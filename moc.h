

#pragma once

#ifndef GO_MOC_5426e9_H
#define GO_MOC_5426e9_H

#include <stdint.h>

#ifdef __cplusplus
class QmlBridge5426e9;
void QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; void* ptr; };
struct Moc_PackedList { void* data; long long len; };
void QmlBridge5426e9_ConnectDisplayTotalBalance(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayTotalBalance(void* ptr);
void QmlBridge5426e9_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD);
void QmlBridge5426e9_ConnectDisplayAvailableBalance(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayAvailableBalance(void* ptr);
void QmlBridge5426e9_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data);
void QmlBridge5426e9_ConnectDisplayLockedBalance(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayLockedBalance(void* ptr);
void QmlBridge5426e9_DisplayLockedBalance(void* ptr, struct Moc_PackedString data);
void QmlBridge5426e9_ConnectDisplayAddress(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayAddress(void* ptr);
void QmlBridge5426e9_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion);
void QmlBridge5426e9_ConnectAddTransactionToList(void* ptr, long long t);
void QmlBridge5426e9_DisconnectAddTransactionToList(void* ptr);
void QmlBridge5426e9_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number);
void QmlBridge5426e9_ConnectAddRemoteNodeToList(void* ptr, long long t);
void QmlBridge5426e9_DisconnectAddRemoteNodeToList(void* ptr);
void QmlBridge5426e9_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName);
void QmlBridge5426e9_ConnectChangeTextRemoteNode(void* ptr, long long t);
void QmlBridge5426e9_DisconnectChangeTextRemoteNode(void* ptr);
void QmlBridge5426e9_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText);
void QmlBridge5426e9_ConnectSetSelectedRemoteNode(void* ptr, long long t);
void QmlBridge5426e9_DisconnectSetSelectedRemoteNode(void* ptr);
void QmlBridge5426e9_SetSelectedRemoteNode(void* ptr, int index);
void QmlBridge5426e9_ConnectDisplayPopup(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayPopup(void* ptr);
void QmlBridge5426e9_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti);
void QmlBridge5426e9_ConnectDisplaySyncingInfo(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplaySyncingInfo(void* ptr);
void QmlBridge5426e9_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo);
void QmlBridge5426e9_ConnectDisplayErrorDialog(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayErrorDialog(void* ptr);
void QmlBridge5426e9_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText);
void QmlBridge5426e9_ConnectDisplayInfoDialog(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayInfoDialog(void* ptr);
void QmlBridge5426e9_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText);
void QmlBridge5426e9_ConnectClearTransferAmount(void* ptr, long long t);
void QmlBridge5426e9_DisconnectClearTransferAmount(void* ptr);
void QmlBridge5426e9_ClearTransferAmount(void* ptr);
void QmlBridge5426e9_ConnectAskForFusion(void* ptr, long long t);
void QmlBridge5426e9_DisconnectAskForFusion(void* ptr);
void QmlBridge5426e9_AskForFusion(void* ptr);
void QmlBridge5426e9_ConnectClearListTransactions(void* ptr, long long t);
void QmlBridge5426e9_DisconnectClearListTransactions(void* ptr);
void QmlBridge5426e9_ClearListTransactions(void* ptr);
void QmlBridge5426e9_ConnectDisplayPrivateKeys(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayPrivateKeys(void* ptr);
void QmlBridge5426e9_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress);
void QmlBridge5426e9_ConnectDisplaySeed(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplaySeed(void* ptr);
void QmlBridge5426e9_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress);
void QmlBridge5426e9_ConnectDisplayOpenWalletScreen(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayOpenWalletScreen(void* ptr);
void QmlBridge5426e9_DisplayOpenWalletScreen(void* ptr);
void QmlBridge5426e9_ConnectDisplayMainWalletScreen(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayMainWalletScreen(void* ptr);
void QmlBridge5426e9_DisplayMainWalletScreen(void* ptr);
void QmlBridge5426e9_ConnectFinishedLoadingWalletd(void* ptr, long long t);
void QmlBridge5426e9_DisconnectFinishedLoadingWalletd(void* ptr);
void QmlBridge5426e9_FinishedLoadingWalletd(void* ptr);
void QmlBridge5426e9_ConnectFinishedCreatingWallet(void* ptr, long long t);
void QmlBridge5426e9_DisconnectFinishedCreatingWallet(void* ptr);
void QmlBridge5426e9_FinishedCreatingWallet(void* ptr);
void QmlBridge5426e9_ConnectFinishedSendingTransaction(void* ptr, long long t);
void QmlBridge5426e9_DisconnectFinishedSendingTransaction(void* ptr);
void QmlBridge5426e9_FinishedSendingTransaction(void* ptr);
void QmlBridge5426e9_ConnectDisplayPathToPreviousWallet(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayPathToPreviousWallet(void* ptr);
void QmlBridge5426e9_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet);
void QmlBridge5426e9_ConnectDisplayWalletCreationLocation(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayWalletCreationLocation(void* ptr);
void QmlBridge5426e9_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation);
void QmlBridge5426e9_ConnectDisplayUseRemoteNode(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayUseRemoteNode(void* ptr);
void QmlBridge5426e9_DisplayUseRemoteNode(void* ptr, char useRemote);
void QmlBridge5426e9_ConnectHideSettingsScreen(void* ptr, long long t);
void QmlBridge5426e9_DisconnectHideSettingsScreen(void* ptr);
void QmlBridge5426e9_HideSettingsScreen(void* ptr);
void QmlBridge5426e9_ConnectDisplaySettingsScreen(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplaySettingsScreen(void* ptr);
void QmlBridge5426e9_DisplaySettingsScreen(void* ptr);
void QmlBridge5426e9_ConnectDisplaySettingsValues(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplaySettingsValues(void* ptr);
void QmlBridge5426e9_DisplaySettingsValues(void* ptr, char displayFiat);
void QmlBridge5426e9_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr);
void QmlBridge5426e9_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort);
void QmlBridge5426e9_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayFullBalanceInTransferAmount(void* ptr);
void QmlBridge5426e9_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance);
void QmlBridge5426e9_ConnectDisplayDefaultFee(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayDefaultFee(void* ptr);
void QmlBridge5426e9_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee);
void QmlBridge5426e9_ConnectDisplayNodeFee(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayNodeFee(void* ptr);
void QmlBridge5426e9_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee);
void QmlBridge5426e9_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t);
void QmlBridge5426e9_DisconnectUpdateConfirmationsOfTransaction(void* ptr);
void QmlBridge5426e9_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations);
void QmlBridge5426e9_ConnectDisplayInfoScreen(void* ptr, long long t);
void QmlBridge5426e9_DisconnectDisplayInfoScreen(void* ptr);
void QmlBridge5426e9_DisplayInfoScreen(void* ptr);
void QmlBridge5426e9_ConnectAddSavedAddressToList(void* ptr, long long t);
void QmlBridge5426e9_DisconnectAddSavedAddressToList(void* ptr);
void QmlBridge5426e9_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridge5426e9_Log(void* ptr, struct Moc_PackedString msg);
void QmlBridge5426e9_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID);
void QmlBridge5426e9_GoToWebsite(void* ptr, struct Moc_PackedString url);
void QmlBridge5426e9_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID);
void QmlBridge5426e9_ClickedButtonCopyAddress(void* ptr);
void QmlBridge5426e9_ClickedButtonCopyKeys(void* ptr);
void QmlBridge5426e9_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy);
void QmlBridge5426e9_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee);
void QmlBridge5426e9_ClickedButtonBackupWallet(void* ptr);
void QmlBridge5426e9_ClickedCloseWallet(void* ptr);
void QmlBridge5426e9_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet);
void QmlBridge5426e9_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet);
void QmlBridge5426e9_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight);
void QmlBridge5426e9_ChoseRemote(void* ptr, char remote);
void QmlBridge5426e9_SelectedRemoteNode(void* ptr, int index);
struct Moc_PackedString QmlBridge5426e9_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL);
void QmlBridge5426e9_ClickedCloseSettings(void* ptr);
void QmlBridge5426e9_ClickedSettingsButton(void* ptr);
void QmlBridge5426e9_ChoseDisplayFiat(void* ptr, char displayFiat);
void QmlBridge5426e9_ChoseCheckpoints(void* ptr, char checkpoints);
void QmlBridge5426e9_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort);
void QmlBridge5426e9_ResetRemoteDaemonInfo(void* ptr);
void QmlBridge5426e9_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee);
void QmlBridge5426e9_GetDefaultFeeAndDisplay(void* ptr);
void QmlBridge5426e9_LimitDisplayTransactions(void* ptr, char limit);
struct Moc_PackedString QmlBridge5426e9_GetVersion(void* ptr);
struct Moc_PackedString QmlBridge5426e9_GetNewVersion(void* ptr);
struct Moc_PackedString QmlBridge5426e9_GetNewVersionURL(void* ptr);
void QmlBridge5426e9_OptimizeWalletWithFusion(void* ptr);
void QmlBridge5426e9_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridge5426e9_FillListSavedAddresses(void* ptr);
void QmlBridge5426e9_DeleteSavedAddress(void* ptr, int dbID);
void QmlBridge5426e9_ExportListTransactions(void* ptr);
void QmlBridge5426e9_RegisterToGo(void* ptr, void* object);
void QmlBridge5426e9_DeregisterToGo(void* ptr, struct Moc_PackedString objectName);
int QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaType();
int QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaType2(char* typeName);
int QmlBridge5426e9_QmlBridge5426e9_QmlRegisterType();
int QmlBridge5426e9_QmlBridge5426e9_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QmlBridge5426e9___children_atList(void* ptr, int i);
void QmlBridge5426e9___children_setList(void* ptr, void* i);
void* QmlBridge5426e9___children_newList(void* ptr);
void* QmlBridge5426e9___dynamicPropertyNames_atList(void* ptr, int i);
void QmlBridge5426e9___dynamicPropertyNames_setList(void* ptr, void* i);
void* QmlBridge5426e9___dynamicPropertyNames_newList(void* ptr);
void* QmlBridge5426e9___findChildren_atList(void* ptr, int i);
void QmlBridge5426e9___findChildren_setList(void* ptr, void* i);
void* QmlBridge5426e9___findChildren_newList(void* ptr);
void* QmlBridge5426e9___findChildren_atList3(void* ptr, int i);
void QmlBridge5426e9___findChildren_setList3(void* ptr, void* i);
void* QmlBridge5426e9___findChildren_newList3(void* ptr);
void* QmlBridge5426e9_NewQmlBridge(void* parent);
void QmlBridge5426e9_DestroyQmlBridge(void* ptr);
void QmlBridge5426e9_DestroyQmlBridgeDefault(void* ptr);
void QmlBridge5426e9_ChildEventDefault(void* ptr, void* event);
void QmlBridge5426e9_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridge5426e9_CustomEventDefault(void* ptr, void* event);
void QmlBridge5426e9_DeleteLaterDefault(void* ptr);
void QmlBridge5426e9_DisconnectNotifyDefault(void* ptr, void* sign);
char QmlBridge5426e9_EventDefault(void* ptr, void* e);
char QmlBridge5426e9_EventFilterDefault(void* ptr, void* watched, void* event);
;
void QmlBridge5426e9_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif