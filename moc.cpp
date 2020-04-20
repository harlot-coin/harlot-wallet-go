

#define protected public
#define private public

#include "moc.h"
#include "_cgo_export.h"

#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QPaintDeviceWindow>
#include <QPdfWriter>
#include <QString>
#include <QTimerEvent>
#include <QWindow>

#ifdef QT_QML_LIB
	#include <QQmlEngine>
#endif


class QmlBridge5426e9: public QObject
{
Q_OBJECT
public:
	QmlBridge5426e9(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaType();QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaTypes();callbackQmlBridge5426e9_Constructor(this);};
	void Signal_DisplayTotalBalance(QString balance, QString balanceUSD) { QByteArray* t8dfa30 = new QByteArray(balance.toUtf8()); Moc_PackedString balancePacked = { const_cast<char*>(t8dfa30->prepend("WHITESPACE").constData()+10), t8dfa30->size()-10, t8dfa30 };QByteArray* t7a7b4e = new QByteArray(balanceUSD.toUtf8()); Moc_PackedString balanceUSDPacked = { const_cast<char*>(t7a7b4e->prepend("WHITESPACE").constData()+10), t7a7b4e->size()-10, t7a7b4e };callbackQmlBridge5426e9_DisplayTotalBalance(this, balancePacked, balanceUSDPacked); };
	void Signal_DisplayAvailableBalance(QString data) { QByteArray* ta17c9a = new QByteArray(data.toUtf8()); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a->prepend("WHITESPACE").constData()+10), ta17c9a->size()-10, ta17c9a };callbackQmlBridge5426e9_DisplayAvailableBalance(this, dataPacked); };
	void Signal_DisplayLockedBalance(QString data) { QByteArray* ta17c9a = new QByteArray(data.toUtf8()); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a->prepend("WHITESPACE").constData()+10), ta17c9a->size()-10, ta17c9a };callbackQmlBridge5426e9_DisplayLockedBalance(this, dataPacked); };
	void Signal_DisplayAddress(QString address, QString wallet, bool displayFiatConversion) { QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc307b6 = new QByteArray(wallet.toUtf8()); Moc_PackedString walletPacked = { const_cast<char*>(tc307b6->prepend("WHITESPACE").constData()+10), tc307b6->size()-10, tc307b6 };callbackQmlBridge5426e9_DisplayAddress(this, addressPacked, walletPacked, displayFiatConversion); };
	void Signal_AddTransactionToList(QString paymentID, QString transactionID, QString amount, QString confirmations, QString ti, QString number) { QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };QByteArray* t9cb6ff = new QByteArray(amount.toUtf8()); Moc_PackedString amountPacked = { const_cast<char*>(t9cb6ff->prepend("WHITESPACE").constData()+10), t9cb6ff->size()-10, t9cb6ff };QByteArray* t8499a0 = new QByteArray(confirmations.toUtf8()); Moc_PackedString confirmationsPacked = { const_cast<char*>(t8499a0->prepend("WHITESPACE").constData()+10), t8499a0->size()-10, t8499a0 };QByteArray* t714eea = new QByteArray(ti.toUtf8()); Moc_PackedString tiPacked = { const_cast<char*>(t714eea->prepend("WHITESPACE").constData()+10), t714eea->size()-10, t714eea };QByteArray* t53b0a1 = new QByteArray(number.toUtf8()); Moc_PackedString numberPacked = { const_cast<char*>(t53b0a1->prepend("WHITESPACE").constData()+10), t53b0a1->size()-10, t53b0a1 };callbackQmlBridge5426e9_AddTransactionToList(this, paymentIDPacked, transactionIDPacked, amountPacked, confirmationsPacked, tiPacked, numberPacked); };
	void Signal_AddRemoteNodeToList(QString nodeName) { QByteArray* tc1a2e1 = new QByteArray(nodeName.toUtf8()); Moc_PackedString nodeNamePacked = { const_cast<char*>(tc1a2e1->prepend("WHITESPACE").constData()+10), tc1a2e1->size()-10, tc1a2e1 };callbackQmlBridge5426e9_AddRemoteNodeToList(this, nodeNamePacked); };
	void Signal_ChangeTextRemoteNode(qint32 index, QString newText) { QByteArray* t7bacb7 = new QByteArray(newText.toUtf8()); Moc_PackedString newTextPacked = { const_cast<char*>(t7bacb7->prepend("WHITESPACE").constData()+10), t7bacb7->size()-10, t7bacb7 };callbackQmlBridge5426e9_ChangeTextRemoteNode(this, index, newTextPacked); };
	void Signal_SetSelectedRemoteNode(qint32 index) { callbackQmlBridge5426e9_SetSelectedRemoteNode(this, index); };
	void Signal_DisplayPopup(QString text, qint32 ti) { QByteArray* t372ea0 = new QByteArray(text.toUtf8()); Moc_PackedString textPacked = { const_cast<char*>(t372ea0->prepend("WHITESPACE").constData()+10), t372ea0->size()-10, t372ea0 };callbackQmlBridge5426e9_DisplayPopup(this, textPacked, ti); };
	void Signal_DisplaySyncingInfo(QString syncing, QString syncingInfo) { QByteArray* t72df87 = new QByteArray(syncing.toUtf8()); Moc_PackedString syncingPacked = { const_cast<char*>(t72df87->prepend("WHITESPACE").constData()+10), t72df87->size()-10, t72df87 };QByteArray* t834023 = new QByteArray(syncingInfo.toUtf8()); Moc_PackedString syncingInfoPacked = { const_cast<char*>(t834023->prepend("WHITESPACE").constData()+10), t834023->size()-10, t834023 };callbackQmlBridge5426e9_DisplaySyncingInfo(this, syncingPacked, syncingInfoPacked); };
	void Signal_DisplayErrorDialog(QString errorText, QString errorInformativeText) { QByteArray* t5f7b8e = new QByteArray(errorText.toUtf8()); Moc_PackedString errorTextPacked = { const_cast<char*>(t5f7b8e->prepend("WHITESPACE").constData()+10), t5f7b8e->size()-10, t5f7b8e };QByteArray* tae90fd = new QByteArray(errorInformativeText.toUtf8()); Moc_PackedString errorInformativeTextPacked = { const_cast<char*>(tae90fd->prepend("WHITESPACE").constData()+10), tae90fd->size()-10, tae90fd };callbackQmlBridge5426e9_DisplayErrorDialog(this, errorTextPacked, errorInformativeTextPacked); };
	void Signal_DisplayInfoDialog(QString title, QString mainText, QString informativeText) { QByteArray* t3c6de1 = new QByteArray(title.toUtf8()); Moc_PackedString titlePacked = { const_cast<char*>(t3c6de1->prepend("WHITESPACE").constData()+10), t3c6de1->size()-10, t3c6de1 };QByteArray* ta3233c = new QByteArray(mainText.toUtf8()); Moc_PackedString mainTextPacked = { const_cast<char*>(ta3233c->prepend("WHITESPACE").constData()+10), ta3233c->size()-10, ta3233c };QByteArray* t69f3f8 = new QByteArray(informativeText.toUtf8()); Moc_PackedString informativeTextPacked = { const_cast<char*>(t69f3f8->prepend("WHITESPACE").constData()+10), t69f3f8->size()-10, t69f3f8 };callbackQmlBridge5426e9_DisplayInfoDialog(this, titlePacked, mainTextPacked, informativeTextPacked); };
	void Signal_ClearTransferAmount() { callbackQmlBridge5426e9_ClearTransferAmount(this); };
	void Signal_AskForFusion() { callbackQmlBridge5426e9_AskForFusion(this); };
	void Signal_ClearListTransactions() { callbackQmlBridge5426e9_ClearListTransactions(this); };
	void Signal_DisplayPrivateKeys(QString filename, QString privateViewKey, QString privateSpendKey, QString walletAddress) { QByteArray* t08deae = new QByteArray(filename.toUtf8()); Moc_PackedString filenamePacked = { const_cast<char*>(t08deae->prepend("WHITESPACE").constData()+10), t08deae->size()-10, t08deae };QByteArray* tc634db = new QByteArray(privateViewKey.toUtf8()); Moc_PackedString privateViewKeyPacked = { const_cast<char*>(tc634db->prepend("WHITESPACE").constData()+10), tc634db->size()-10, tc634db };QByteArray* t1f6ec2 = new QByteArray(privateSpendKey.toUtf8()); Moc_PackedString privateSpendKeyPacked = { const_cast<char*>(t1f6ec2->prepend("WHITESPACE").constData()+10), t1f6ec2->size()-10, t1f6ec2 };QByteArray* t208cac = new QByteArray(walletAddress.toUtf8()); Moc_PackedString walletAddressPacked = { const_cast<char*>(t208cac->prepend("WHITESPACE").constData()+10), t208cac->size()-10, t208cac };callbackQmlBridge5426e9_DisplayPrivateKeys(this, filenamePacked, privateViewKeyPacked, privateSpendKeyPacked, walletAddressPacked); };
	void Signal_DisplaySeed(QString filename, QString mnemonicSeed, QString walletAddress) { QByteArray* t08deae = new QByteArray(filename.toUtf8()); Moc_PackedString filenamePacked = { const_cast<char*>(t08deae->prepend("WHITESPACE").constData()+10), t08deae->size()-10, t08deae };QByteArray* tde366e = new QByteArray(mnemonicSeed.toUtf8()); Moc_PackedString mnemonicSeedPacked = { const_cast<char*>(tde366e->prepend("WHITESPACE").constData()+10), tde366e->size()-10, tde366e };QByteArray* t208cac = new QByteArray(walletAddress.toUtf8()); Moc_PackedString walletAddressPacked = { const_cast<char*>(t208cac->prepend("WHITESPACE").constData()+10), t208cac->size()-10, t208cac };callbackQmlBridge5426e9_DisplaySeed(this, filenamePacked, mnemonicSeedPacked, walletAddressPacked); };
	void Signal_DisplayOpenWalletScreen() { callbackQmlBridge5426e9_DisplayOpenWalletScreen(this); };
	void Signal_DisplayMainWalletScreen() { callbackQmlBridge5426e9_DisplayMainWalletScreen(this); };
	void Signal_FinishedLoadingWalletd() { callbackQmlBridge5426e9_FinishedLoadingWalletd(this); };
	void Signal_FinishedCreatingWallet() { callbackQmlBridge5426e9_FinishedCreatingWallet(this); };
	void Signal_FinishedSendingTransaction() { callbackQmlBridge5426e9_FinishedSendingTransaction(this); };
	void Signal_DisplayPathToPreviousWallet(QString pathToPreviousWallet) { QByteArray* t70f286 = new QByteArray(pathToPreviousWallet.toUtf8()); Moc_PackedString pathToPreviousWalletPacked = { const_cast<char*>(t70f286->prepend("WHITESPACE").constData()+10), t70f286->size()-10, t70f286 };callbackQmlBridge5426e9_DisplayPathToPreviousWallet(this, pathToPreviousWalletPacked); };
	void Signal_DisplayWalletCreationLocation(QString walletLocation) { QByteArray* tabe26e = new QByteArray(walletLocation.toUtf8()); Moc_PackedString walletLocationPacked = { const_cast<char*>(tabe26e->prepend("WHITESPACE").constData()+10), tabe26e->size()-10, tabe26e };callbackQmlBridge5426e9_DisplayWalletCreationLocation(this, walletLocationPacked); };
	void Signal_DisplayUseRemoteNode(bool useRemote) { callbackQmlBridge5426e9_DisplayUseRemoteNode(this, useRemote); };
	void Signal_HideSettingsScreen() { callbackQmlBridge5426e9_HideSettingsScreen(this); };
	void Signal_DisplaySettingsScreen() { callbackQmlBridge5426e9_DisplaySettingsScreen(this); };
	void Signal_DisplaySettingsValues(bool displayFiat) { callbackQmlBridge5426e9_DisplaySettingsValues(this, displayFiat); };
	void Signal_DisplaySettingsRemoteDaemonInfo(QString remoteNodeAddress, QString remoteNodePort) { QByteArray* tc6f2b4 = new QByteArray(remoteNodeAddress.toUtf8()); Moc_PackedString remoteNodeAddressPacked = { const_cast<char*>(tc6f2b4->prepend("WHITESPACE").constData()+10), tc6f2b4->size()-10, tc6f2b4 };QByteArray* t1b1377 = new QByteArray(remoteNodePort.toUtf8()); Moc_PackedString remoteNodePortPacked = { const_cast<char*>(t1b1377->prepend("WHITESPACE").constData()+10), t1b1377->size()-10, t1b1377 };callbackQmlBridge5426e9_DisplaySettingsRemoteDaemonInfo(this, remoteNodeAddressPacked, remoteNodePortPacked); };
	void Signal_DisplayFullBalanceInTransferAmount(QString fullBalance) { QByteArray* tccc49e = new QByteArray(fullBalance.toUtf8()); Moc_PackedString fullBalancePacked = { const_cast<char*>(tccc49e->prepend("WHITESPACE").constData()+10), tccc49e->size()-10, tccc49e };callbackQmlBridge5426e9_DisplayFullBalanceInTransferAmount(this, fullBalancePacked); };
	void Signal_DisplayDefaultFee(QString fee) { QByteArray* t9c15cd = new QByteArray(fee.toUtf8()); Moc_PackedString feePacked = { const_cast<char*>(t9c15cd->prepend("WHITESPACE").constData()+10), t9c15cd->size()-10, t9c15cd };callbackQmlBridge5426e9_DisplayDefaultFee(this, feePacked); };
	void Signal_DisplayNodeFee(QString nodeFee) { QByteArray* t96217f = new QByteArray(nodeFee.toUtf8()); Moc_PackedString nodeFeePacked = { const_cast<char*>(t96217f->prepend("WHITESPACE").constData()+10), t96217f->size()-10, t96217f };callbackQmlBridge5426e9_DisplayNodeFee(this, nodeFeePacked); };
	void Signal_UpdateConfirmationsOfTransaction(qint32 index, QString confirmations) { QByteArray* t8499a0 = new QByteArray(confirmations.toUtf8()); Moc_PackedString confirmationsPacked = { const_cast<char*>(t8499a0->prepend("WHITESPACE").constData()+10), t8499a0->size()-10, t8499a0 };callbackQmlBridge5426e9_UpdateConfirmationsOfTransaction(this, index, confirmationsPacked); };
	void Signal_DisplayInfoScreen() { callbackQmlBridge5426e9_DisplayInfoScreen(this); };
	void Signal_AddSavedAddressToList(qint32 dbID, QString name, QString address, QString paymentID) { QByteArray* t6ae999 = new QByteArray(name.toUtf8()); Moc_PackedString namePacked = { const_cast<char*>(t6ae999->prepend("WHITESPACE").constData()+10), t6ae999->size()-10, t6ae999 };QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };callbackQmlBridge5426e9_AddSavedAddressToList(this, dbID, namePacked, addressPacked, paymentIDPacked); };
	 ~QmlBridge5426e9() { callbackQmlBridge5426e9_DestroyQmlBridge(this); };
	void childEvent(QChildEvent * event) { callbackQmlBridge5426e9_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackQmlBridge5426e9_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackQmlBridge5426e9_CustomEvent(this, event); };
	void deleteLater() { callbackQmlBridge5426e9_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackQmlBridge5426e9_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackQmlBridge5426e9_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool event(QEvent * e) { return callbackQmlBridge5426e9_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackQmlBridge5426e9_EventFilter(this, watched, event) != 0; };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQmlBridge5426e9_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackQmlBridge5426e9_TimerEvent(this, event); };
signals:
	void displayTotalBalance(QString balance, QString balanceUSD);
	void displayAvailableBalance(QString data);
	void displayLockedBalance(QString data);
	void displayAddress(QString address, QString wallet, bool displayFiatConversion);
	void addTransactionToList(QString paymentID, QString transactionID, QString amount, QString confirmations, QString ti, QString number);
	void addRemoteNodeToList(QString nodeName);
	void changeTextRemoteNode(qint32 index, QString newText);
	void setSelectedRemoteNode(qint32 index);
	void displayPopup(QString text, qint32 ti);
	void displaySyncingInfo(QString syncing, QString syncingInfo);
	void displayErrorDialog(QString errorText, QString errorInformativeText);
	void displayInfoDialog(QString title, QString mainText, QString informativeText);
	void clearTransferAmount();
	void askForFusion();
	void clearListTransactions();
	void displayPrivateKeys(QString filename, QString privateViewKey, QString privateSpendKey, QString walletAddress);
	void displaySeed(QString filename, QString mnemonicSeed, QString walletAddress);
	void displayOpenWalletScreen();
	void displayMainWalletScreen();
	void finishedLoadingWalletd();
	void finishedCreatingWallet();
	void finishedSendingTransaction();
	void displayPathToPreviousWallet(QString pathToPreviousWallet);
	void displayWalletCreationLocation(QString walletLocation);
	void displayUseRemoteNode(bool useRemote);
	void hideSettingsScreen();
	void displaySettingsScreen();
	void displaySettingsValues(bool displayFiat);
	void displaySettingsRemoteDaemonInfo(QString remoteNodeAddress, QString remoteNodePort);
	void displayFullBalanceInTransferAmount(QString fullBalance);
	void displayDefaultFee(QString fee);
	void displayNodeFee(QString nodeFee);
	void updateConfirmationsOfTransaction(qint32 index, QString confirmations);
	void displayInfoScreen();
	void addSavedAddressToList(qint32 dbID, QString name, QString address, QString paymentID);
public slots:
	void log(QString msg) { QByteArray* t19f34e = new QByteArray(msg.toUtf8()); Moc_PackedString msgPacked = { const_cast<char*>(t19f34e->prepend("WHITESPACE").constData()+10), t19f34e->size()-10, t19f34e };callbackQmlBridge5426e9_Log(this, msgPacked); };
	void clickedButtonExplorer(QString transactionID) { QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };callbackQmlBridge5426e9_ClickedButtonExplorer(this, transactionIDPacked); };
	void goToWebsite(QString url) { QByteArray* t817363 = new QByteArray(url.toUtf8()); Moc_PackedString urlPacked = { const_cast<char*>(t817363->prepend("WHITESPACE").constData()+10), t817363->size()-10, t817363 };callbackQmlBridge5426e9_GoToWebsite(this, urlPacked); };
	void clickedButtonCopyTx(QString transactionID) { QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };callbackQmlBridge5426e9_ClickedButtonCopyTx(this, transactionIDPacked); };
	void clickedButtonCopyAddress() { callbackQmlBridge5426e9_ClickedButtonCopyAddress(this); };
	void clickedButtonCopyKeys() { callbackQmlBridge5426e9_ClickedButtonCopyKeys(this); };
	void clickedButtonCopy(QString stringToCopy) { QByteArray* te009d3 = new QByteArray(stringToCopy.toUtf8()); Moc_PackedString stringToCopyPacked = { const_cast<char*>(te009d3->prepend("WHITESPACE").constData()+10), te009d3->size()-10, te009d3 };callbackQmlBridge5426e9_ClickedButtonCopy(this, stringToCopyPacked); };
	void clickedButtonSend(QString transferAddress, QString transferAmount, QString transferPaymentID, QString transferFee) { QByteArray* tb2289f = new QByteArray(transferAddress.toUtf8()); Moc_PackedString transferAddressPacked = { const_cast<char*>(tb2289f->prepend("WHITESPACE").constData()+10), tb2289f->size()-10, tb2289f };QByteArray* t307ef6 = new QByteArray(transferAmount.toUtf8()); Moc_PackedString transferAmountPacked = { const_cast<char*>(t307ef6->prepend("WHITESPACE").constData()+10), t307ef6->size()-10, t307ef6 };QByteArray* tc16f3f = new QByteArray(transferPaymentID.toUtf8()); Moc_PackedString transferPaymentIDPacked = { const_cast<char*>(tc16f3f->prepend("WHITESPACE").constData()+10), tc16f3f->size()-10, tc16f3f };QByteArray* t1a861b = new QByteArray(transferFee.toUtf8()); Moc_PackedString transferFeePacked = { const_cast<char*>(t1a861b->prepend("WHITESPACE").constData()+10), t1a861b->size()-10, t1a861b };callbackQmlBridge5426e9_ClickedButtonSend(this, transferAddressPacked, transferAmountPacked, transferPaymentIDPacked, transferFeePacked); };
	void clickedButtonBackupWallet() { callbackQmlBridge5426e9_ClickedButtonBackupWallet(this); };
	void clickedCloseWallet() { callbackQmlBridge5426e9_ClickedCloseWallet(this); };
	void clickedButtonOpen(QString pathToWallet, QString passwordWallet) { QByteArray* t6c0b5c = new QByteArray(pathToWallet.toUtf8()); Moc_PackedString pathToWalletPacked = { const_cast<char*>(t6c0b5c->prepend("WHITESPACE").constData()+10), t6c0b5c->size()-10, t6c0b5c };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };callbackQmlBridge5426e9_ClickedButtonOpen(this, pathToWalletPacked, passwordWalletPacked); };
	void clickedButtonCreate(QString filenameWallet, QString passwordWallet, QString confirmPasswordWallet) { QByteArray* t794b1e = new QByteArray(filenameWallet.toUtf8()); Moc_PackedString filenameWalletPacked = { const_cast<char*>(t794b1e->prepend("WHITESPACE").constData()+10), t794b1e->size()-10, t794b1e };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };QByteArray* taf1d27 = new QByteArray(confirmPasswordWallet.toUtf8()); Moc_PackedString confirmPasswordWalletPacked = { const_cast<char*>(taf1d27->prepend("WHITESPACE").constData()+10), taf1d27->size()-10, taf1d27 };callbackQmlBridge5426e9_ClickedButtonCreate(this, filenameWalletPacked, passwordWalletPacked, confirmPasswordWalletPacked); };
	void clickedButtonImport(QString filenameWallet, QString passwordWallet, QString privateViewKey, QString privateSpendKey, QString mnemonicSeed, QString confirmPasswordWallet, QString scanHeight) { QByteArray* t794b1e = new QByteArray(filenameWallet.toUtf8()); Moc_PackedString filenameWalletPacked = { const_cast<char*>(t794b1e->prepend("WHITESPACE").constData()+10), t794b1e->size()-10, t794b1e };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };QByteArray* tc634db = new QByteArray(privateViewKey.toUtf8()); Moc_PackedString privateViewKeyPacked = { const_cast<char*>(tc634db->prepend("WHITESPACE").constData()+10), tc634db->size()-10, tc634db };QByteArray* t1f6ec2 = new QByteArray(privateSpendKey.toUtf8()); Moc_PackedString privateSpendKeyPacked = { const_cast<char*>(t1f6ec2->prepend("WHITESPACE").constData()+10), t1f6ec2->size()-10, t1f6ec2 };QByteArray* tde366e = new QByteArray(mnemonicSeed.toUtf8()); Moc_PackedString mnemonicSeedPacked = { const_cast<char*>(tde366e->prepend("WHITESPACE").constData()+10), tde366e->size()-10, tde366e };QByteArray* taf1d27 = new QByteArray(confirmPasswordWallet.toUtf8()); Moc_PackedString confirmPasswordWalletPacked = { const_cast<char*>(taf1d27->prepend("WHITESPACE").constData()+10), taf1d27->size()-10, taf1d27 };QByteArray* t32972b = new QByteArray(scanHeight.toUtf8()); Moc_PackedString scanHeightPacked = { const_cast<char*>(t32972b->prepend("WHITESPACE").constData()+10), t32972b->size()-10, t32972b };callbackQmlBridge5426e9_ClickedButtonImport(this, filenameWalletPacked, passwordWalletPacked, privateViewKeyPacked, privateSpendKeyPacked, mnemonicSeedPacked, confirmPasswordWalletPacked, scanHeightPacked); };
	void choseRemote(bool remote) { callbackQmlBridge5426e9_ChoseRemote(this, remote); };
	void selectedRemoteNode(qint32 index) { callbackQmlBridge5426e9_SelectedRemoteNode(this, index); };
	QString getTransferAmountUSD(QString amountTRTL) { QByteArray* te38fb0 = new QByteArray(amountTRTL.toUtf8()); Moc_PackedString amountTRTLPacked = { const_cast<char*>(te38fb0->prepend("WHITESPACE").constData()+10), te38fb0->size()-10, te38fb0 };return ({ Moc_PackedString tempVal = callbackQmlBridge5426e9_GetTransferAmountUSD(this, amountTRTLPacked); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void clickedCloseSettings() { callbackQmlBridge5426e9_ClickedCloseSettings(this); };
	void clickedSettingsButton() { callbackQmlBridge5426e9_ClickedSettingsButton(this); };
	void choseDisplayFiat(bool displayFiat) { callbackQmlBridge5426e9_ChoseDisplayFiat(this, displayFiat); };
	void choseCheckpoints(bool checkpoints) { callbackQmlBridge5426e9_ChoseCheckpoints(this, checkpoints); };
	void saveRemoteDaemonInfo(QString daemonAddress, QString daemonPort) { QByteArray* td2b37c = new QByteArray(daemonAddress.toUtf8()); Moc_PackedString daemonAddressPacked = { const_cast<char*>(td2b37c->prepend("WHITESPACE").constData()+10), td2b37c->size()-10, td2b37c };QByteArray* tcb21fe = new QByteArray(daemonPort.toUtf8()); Moc_PackedString daemonPortPacked = { const_cast<char*>(tcb21fe->prepend("WHITESPACE").constData()+10), tcb21fe->size()-10, tcb21fe };callbackQmlBridge5426e9_SaveRemoteDaemonInfo(this, daemonAddressPacked, daemonPortPacked); };
	void resetRemoteDaemonInfo() { callbackQmlBridge5426e9_ResetRemoteDaemonInfo(this); };
	void getFullBalanceAndDisplayInTransferAmount(QString transferFee) { QByteArray* t1a861b = new QByteArray(transferFee.toUtf8()); Moc_PackedString transferFeePacked = { const_cast<char*>(t1a861b->prepend("WHITESPACE").constData()+10), t1a861b->size()-10, t1a861b };callbackQmlBridge5426e9_GetFullBalanceAndDisplayInTransferAmount(this, transferFeePacked); };
	void getDefaultFeeAndDisplay() { callbackQmlBridge5426e9_GetDefaultFeeAndDisplay(this); };
	void limitDisplayTransactions(bool limit) { callbackQmlBridge5426e9_LimitDisplayTransactions(this, limit); };
	QString getVersion() { return ({ Moc_PackedString tempVal = callbackQmlBridge5426e9_GetVersion(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString getNewVersion() { return ({ Moc_PackedString tempVal = callbackQmlBridge5426e9_GetNewVersion(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString getNewVersionURL() { return ({ Moc_PackedString tempVal = callbackQmlBridge5426e9_GetNewVersionURL(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void optimizeWalletWithFusion() { callbackQmlBridge5426e9_OptimizeWalletWithFusion(this); };
	void saveAddress(QString name, QString address, QString paymentID) { QByteArray* t6ae999 = new QByteArray(name.toUtf8()); Moc_PackedString namePacked = { const_cast<char*>(t6ae999->prepend("WHITESPACE").constData()+10), t6ae999->size()-10, t6ae999 };QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };callbackQmlBridge5426e9_SaveAddress(this, namePacked, addressPacked, paymentIDPacked); };
	void fillListSavedAddresses() { callbackQmlBridge5426e9_FillListSavedAddresses(this); };
	void deleteSavedAddress(qint32 dbID) { callbackQmlBridge5426e9_DeleteSavedAddress(this, dbID); };
	void exportListTransactions() { callbackQmlBridge5426e9_ExportListTransactions(this); };
	void registerToGo(QObject* object) { callbackQmlBridge5426e9_RegisterToGo(this, object); };
	void deregisterToGo(QString objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQmlBridge5426e9_DeregisterToGo(this, objectNamePacked); };
private:
};

Q_DECLARE_METATYPE(QmlBridge5426e9*)


void QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaTypes() {
}

void QmlBridge5426e9_ConnectDisplayTotalBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displayTotalBalance), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplayTotalBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayTotalBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displayTotalBalance), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplayTotalBalance));
}

void QmlBridge5426e9_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayTotalBalance(QString::fromUtf8(balance.data, balance.len), QString::fromUtf8(balanceUSD.data, balanceUSD.len));
}

void QmlBridge5426e9_ConnectDisplayAvailableBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayAvailableBalance), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayAvailableBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayAvailableBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayAvailableBalance), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayAvailableBalance));
}

void QmlBridge5426e9_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayAvailableBalance(QString::fromUtf8(data.data, data.len));
}

void QmlBridge5426e9_ConnectDisplayLockedBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayLockedBalance), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayLockedBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayLockedBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayLockedBalance), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayLockedBalance));
}

void QmlBridge5426e9_DisplayLockedBalance(void* ptr, struct Moc_PackedString data)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayLockedBalance(QString::fromUtf8(data.data, data.len));
}

void QmlBridge5426e9_ConnectDisplayAddress(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, bool)>(&QmlBridge5426e9::displayAddress), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, bool)>(&QmlBridge5426e9::Signal_DisplayAddress), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayAddress(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, bool)>(&QmlBridge5426e9::displayAddress), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, bool)>(&QmlBridge5426e9::Signal_DisplayAddress));
}

void QmlBridge5426e9_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayAddress(QString::fromUtf8(address.data, address.len), QString::fromUtf8(wallet.data, wallet.len), displayFiatConversion != 0);
}

void QmlBridge5426e9_ConnectAddTransactionToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridge5426e9::addTransactionToList), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridge5426e9::Signal_AddTransactionToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectAddTransactionToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridge5426e9::addTransactionToList), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridge5426e9::Signal_AddTransactionToList));
}

void QmlBridge5426e9_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number)
{
	static_cast<QmlBridge5426e9*>(ptr)->addTransactionToList(QString::fromUtf8(paymentID.data, paymentID.len), QString::fromUtf8(transactionID.data, transactionID.len), QString::fromUtf8(amount.data, amount.len), QString::fromUtf8(confirmations.data, confirmations.len), QString::fromUtf8(ti.data, ti.len), QString::fromUtf8(number.data, number.len));
}

void QmlBridge5426e9_ConnectAddRemoteNodeToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::addRemoteNodeToList), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_AddRemoteNodeToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectAddRemoteNodeToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::addRemoteNodeToList), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_AddRemoteNodeToList));
}

void QmlBridge5426e9_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName)
{
	static_cast<QmlBridge5426e9*>(ptr)->addRemoteNodeToList(QString::fromUtf8(nodeName.data, nodeName.len));
}

void QmlBridge5426e9_ConnectChangeTextRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::changeTextRemoteNode), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::Signal_ChangeTextRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectChangeTextRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::changeTextRemoteNode), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::Signal_ChangeTextRemoteNode));
}

void QmlBridge5426e9_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText)
{
	static_cast<QmlBridge5426e9*>(ptr)->changeTextRemoteNode(index, QString::fromUtf8(newText.data, newText.len));
}

void QmlBridge5426e9_ConnectSetSelectedRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32)>(&QmlBridge5426e9::setSelectedRemoteNode), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32)>(&QmlBridge5426e9::Signal_SetSelectedRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectSetSelectedRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32)>(&QmlBridge5426e9::setSelectedRemoteNode), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32)>(&QmlBridge5426e9::Signal_SetSelectedRemoteNode));
}

void QmlBridge5426e9_SetSelectedRemoteNode(void* ptr, int index)
{
	static_cast<QmlBridge5426e9*>(ptr)->setSelectedRemoteNode(index);
}

void QmlBridge5426e9_ConnectDisplayPopup(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, qint32)>(&QmlBridge5426e9::displayPopup), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, qint32)>(&QmlBridge5426e9::Signal_DisplayPopup), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayPopup(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, qint32)>(&QmlBridge5426e9::displayPopup), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, qint32)>(&QmlBridge5426e9::Signal_DisplayPopup));
}

void QmlBridge5426e9_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayPopup(QString::fromUtf8(text.data, text.len), ti);
}

void QmlBridge5426e9_ConnectDisplaySyncingInfo(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displaySyncingInfo), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplaySyncingInfo), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplaySyncingInfo(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displaySyncingInfo), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplaySyncingInfo));
}

void QmlBridge5426e9_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo)
{
	static_cast<QmlBridge5426e9*>(ptr)->displaySyncingInfo(QString::fromUtf8(syncing.data, syncing.len), QString::fromUtf8(syncingInfo.data, syncingInfo.len));
}

void QmlBridge5426e9_ConnectDisplayErrorDialog(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displayErrorDialog), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplayErrorDialog), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayErrorDialog(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displayErrorDialog), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplayErrorDialog));
}

void QmlBridge5426e9_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayErrorDialog(QString::fromUtf8(errorText.data, errorText.len), QString::fromUtf8(errorInformativeText.data, errorInformativeText.len));
}

void QmlBridge5426e9_ConnectDisplayInfoDialog(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::displayInfoDialog), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::Signal_DisplayInfoDialog), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayInfoDialog(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::displayInfoDialog), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::Signal_DisplayInfoDialog));
}

void QmlBridge5426e9_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayInfoDialog(QString::fromUtf8(title.data, title.len), QString::fromUtf8(mainText.data, mainText.len), QString::fromUtf8(informativeText.data, informativeText.len));
}

void QmlBridge5426e9_ConnectClearTransferAmount(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::clearTransferAmount), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_ClearTransferAmount), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectClearTransferAmount(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::clearTransferAmount), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_ClearTransferAmount));
}

void QmlBridge5426e9_ClearTransferAmount(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->clearTransferAmount();
}

void QmlBridge5426e9_ConnectAskForFusion(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::askForFusion), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_AskForFusion), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectAskForFusion(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::askForFusion), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_AskForFusion));
}

void QmlBridge5426e9_AskForFusion(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->askForFusion();
}

void QmlBridge5426e9_ConnectClearListTransactions(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::clearListTransactions), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_ClearListTransactions), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectClearListTransactions(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::clearListTransactions), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_ClearListTransactions));
}

void QmlBridge5426e9_ClearListTransactions(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->clearListTransactions();
}

void QmlBridge5426e9_ConnectDisplayPrivateKeys(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString)>(&QmlBridge5426e9::displayPrivateKeys), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString)>(&QmlBridge5426e9::Signal_DisplayPrivateKeys), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayPrivateKeys(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString)>(&QmlBridge5426e9::displayPrivateKeys), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString, QString)>(&QmlBridge5426e9::Signal_DisplayPrivateKeys));
}

void QmlBridge5426e9_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayPrivateKeys(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(privateViewKey.data, privateViewKey.len), QString::fromUtf8(privateSpendKey.data, privateSpendKey.len), QString::fromUtf8(walletAddress.data, walletAddress.len));
}

void QmlBridge5426e9_ConnectDisplaySeed(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::displaySeed), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::Signal_DisplaySeed), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplaySeed(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::displaySeed), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString, QString)>(&QmlBridge5426e9::Signal_DisplaySeed));
}

void QmlBridge5426e9_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress)
{
	static_cast<QmlBridge5426e9*>(ptr)->displaySeed(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(mnemonicSeed.data, mnemonicSeed.len), QString::fromUtf8(walletAddress.data, walletAddress.len));
}

void QmlBridge5426e9_ConnectDisplayOpenWalletScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displayOpenWalletScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplayOpenWalletScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayOpenWalletScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displayOpenWalletScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplayOpenWalletScreen));
}

void QmlBridge5426e9_DisplayOpenWalletScreen(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayOpenWalletScreen();
}

void QmlBridge5426e9_ConnectDisplayMainWalletScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displayMainWalletScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplayMainWalletScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayMainWalletScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displayMainWalletScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplayMainWalletScreen));
}

void QmlBridge5426e9_DisplayMainWalletScreen(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayMainWalletScreen();
}

void QmlBridge5426e9_ConnectFinishedLoadingWalletd(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::finishedLoadingWalletd), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_FinishedLoadingWalletd), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectFinishedLoadingWalletd(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::finishedLoadingWalletd), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_FinishedLoadingWalletd));
}

void QmlBridge5426e9_FinishedLoadingWalletd(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->finishedLoadingWalletd();
}

void QmlBridge5426e9_ConnectFinishedCreatingWallet(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::finishedCreatingWallet), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_FinishedCreatingWallet), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectFinishedCreatingWallet(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::finishedCreatingWallet), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_FinishedCreatingWallet));
}

void QmlBridge5426e9_FinishedCreatingWallet(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->finishedCreatingWallet();
}

void QmlBridge5426e9_ConnectFinishedSendingTransaction(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::finishedSendingTransaction), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_FinishedSendingTransaction), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectFinishedSendingTransaction(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::finishedSendingTransaction), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_FinishedSendingTransaction));
}

void QmlBridge5426e9_FinishedSendingTransaction(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->finishedSendingTransaction();
}

void QmlBridge5426e9_ConnectDisplayPathToPreviousWallet(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayPathToPreviousWallet), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayPathToPreviousWallet), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayPathToPreviousWallet(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayPathToPreviousWallet), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayPathToPreviousWallet));
}

void QmlBridge5426e9_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayPathToPreviousWallet(QString::fromUtf8(pathToPreviousWallet.data, pathToPreviousWallet.len));
}

void QmlBridge5426e9_ConnectDisplayWalletCreationLocation(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayWalletCreationLocation), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayWalletCreationLocation), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayWalletCreationLocation(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayWalletCreationLocation), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayWalletCreationLocation));
}

void QmlBridge5426e9_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayWalletCreationLocation(QString::fromUtf8(walletLocation.data, walletLocation.len));
}

void QmlBridge5426e9_ConnectDisplayUseRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::displayUseRemoteNode), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::Signal_DisplayUseRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayUseRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::displayUseRemoteNode), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::Signal_DisplayUseRemoteNode));
}

void QmlBridge5426e9_DisplayUseRemoteNode(void* ptr, char useRemote)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayUseRemoteNode(useRemote != 0);
}

void QmlBridge5426e9_ConnectHideSettingsScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::hideSettingsScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_HideSettingsScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectHideSettingsScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::hideSettingsScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_HideSettingsScreen));
}

void QmlBridge5426e9_HideSettingsScreen(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->hideSettingsScreen();
}

void QmlBridge5426e9_ConnectDisplaySettingsScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displaySettingsScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplaySettingsScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplaySettingsScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displaySettingsScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplaySettingsScreen));
}

void QmlBridge5426e9_DisplaySettingsScreen(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->displaySettingsScreen();
}

void QmlBridge5426e9_ConnectDisplaySettingsValues(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::displaySettingsValues), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::Signal_DisplaySettingsValues), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplaySettingsValues(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::displaySettingsValues), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(bool)>(&QmlBridge5426e9::Signal_DisplaySettingsValues));
}

void QmlBridge5426e9_DisplaySettingsValues(void* ptr, char displayFiat)
{
	static_cast<QmlBridge5426e9*>(ptr)->displaySettingsValues(displayFiat != 0);
}

void QmlBridge5426e9_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displaySettingsRemoteDaemonInfo), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplaySettingsRemoteDaemonInfo), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::displaySettingsRemoteDaemonInfo), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString, QString)>(&QmlBridge5426e9::Signal_DisplaySettingsRemoteDaemonInfo));
}

void QmlBridge5426e9_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort)
{
	static_cast<QmlBridge5426e9*>(ptr)->displaySettingsRemoteDaemonInfo(QString::fromUtf8(remoteNodeAddress.data, remoteNodeAddress.len), QString::fromUtf8(remoteNodePort.data, remoteNodePort.len));
}

void QmlBridge5426e9_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayFullBalanceInTransferAmount), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayFullBalanceInTransferAmount), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayFullBalanceInTransferAmount(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayFullBalanceInTransferAmount), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayFullBalanceInTransferAmount));
}

void QmlBridge5426e9_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayFullBalanceInTransferAmount(QString::fromUtf8(fullBalance.data, fullBalance.len));
}

void QmlBridge5426e9_ConnectDisplayDefaultFee(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayDefaultFee), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayDefaultFee), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayDefaultFee(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayDefaultFee), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayDefaultFee));
}

void QmlBridge5426e9_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayDefaultFee(QString::fromUtf8(fee.data, fee.len));
}

void QmlBridge5426e9_ConnectDisplayNodeFee(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayNodeFee), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayNodeFee), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayNodeFee(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::displayNodeFee), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(QString)>(&QmlBridge5426e9::Signal_DisplayNodeFee));
}

void QmlBridge5426e9_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayNodeFee(QString::fromUtf8(nodeFee.data, nodeFee.len));
}

void QmlBridge5426e9_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::updateConfirmationsOfTransaction), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::Signal_UpdateConfirmationsOfTransaction), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectUpdateConfirmationsOfTransaction(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::updateConfirmationsOfTransaction), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString)>(&QmlBridge5426e9::Signal_UpdateConfirmationsOfTransaction));
}

void QmlBridge5426e9_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations)
{
	static_cast<QmlBridge5426e9*>(ptr)->updateConfirmationsOfTransaction(index, QString::fromUtf8(confirmations.data, confirmations.len));
}

void QmlBridge5426e9_ConnectDisplayInfoScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displayInfoScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplayInfoScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectDisplayInfoScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::displayInfoScreen), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)()>(&QmlBridge5426e9::Signal_DisplayInfoScreen));
}

void QmlBridge5426e9_DisplayInfoScreen(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->displayInfoScreen();
}

void QmlBridge5426e9_ConnectAddSavedAddressToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString, QString, QString)>(&QmlBridge5426e9::addSavedAddressToList), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString, QString, QString)>(&QmlBridge5426e9::Signal_AddSavedAddressToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridge5426e9_DisconnectAddSavedAddressToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString, QString, QString)>(&QmlBridge5426e9::addSavedAddressToList), static_cast<QmlBridge5426e9*>(ptr), static_cast<void (QmlBridge5426e9::*)(qint32, QString, QString, QString)>(&QmlBridge5426e9::Signal_AddSavedAddressToList));
}

void QmlBridge5426e9_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID)
{
	static_cast<QmlBridge5426e9*>(ptr)->addSavedAddressToList(dbID, QString::fromUtf8(name.data, name.len), QString::fromUtf8(address.data, address.len), QString::fromUtf8(paymentID.data, paymentID.len));
}

void QmlBridge5426e9_Log(void* ptr, struct Moc_PackedString msg)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "log", Q_ARG(QString, QString::fromUtf8(msg.data, msg.len)));
}

void QmlBridge5426e9_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonExplorer", Q_ARG(QString, QString::fromUtf8(transactionID.data, transactionID.len)));
}

void QmlBridge5426e9_GoToWebsite(void* ptr, struct Moc_PackedString url)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "goToWebsite", Q_ARG(QString, QString::fromUtf8(url.data, url.len)));
}

void QmlBridge5426e9_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonCopyTx", Q_ARG(QString, QString::fromUtf8(transactionID.data, transactionID.len)));
}

void QmlBridge5426e9_ClickedButtonCopyAddress(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonCopyAddress");
}

void QmlBridge5426e9_ClickedButtonCopyKeys(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonCopyKeys");
}

void QmlBridge5426e9_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonCopy", Q_ARG(QString, QString::fromUtf8(stringToCopy.data, stringToCopy.len)));
}

void QmlBridge5426e9_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonSend", Q_ARG(QString, QString::fromUtf8(transferAddress.data, transferAddress.len)), Q_ARG(QString, QString::fromUtf8(transferAmount.data, transferAmount.len)), Q_ARG(QString, QString::fromUtf8(transferPaymentID.data, transferPaymentID.len)), Q_ARG(QString, QString::fromUtf8(transferFee.data, transferFee.len)));
}

void QmlBridge5426e9_ClickedButtonBackupWallet(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonBackupWallet");
}

void QmlBridge5426e9_ClickedCloseWallet(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedCloseWallet");
}

void QmlBridge5426e9_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonOpen", Q_ARG(QString, QString::fromUtf8(pathToWallet.data, pathToWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)));
}

void QmlBridge5426e9_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonCreate", Q_ARG(QString, QString::fromUtf8(filenameWallet.data, filenameWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)), Q_ARG(QString, QString::fromUtf8(confirmPasswordWallet.data, confirmPasswordWallet.len)));
}

void QmlBridge5426e9_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedButtonImport", Q_ARG(QString, QString::fromUtf8(filenameWallet.data, filenameWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)), Q_ARG(QString, QString::fromUtf8(privateViewKey.data, privateViewKey.len)), Q_ARG(QString, QString::fromUtf8(privateSpendKey.data, privateSpendKey.len)), Q_ARG(QString, QString::fromUtf8(mnemonicSeed.data, mnemonicSeed.len)), Q_ARG(QString, QString::fromUtf8(confirmPasswordWallet.data, confirmPasswordWallet.len)), Q_ARG(QString, QString::fromUtf8(scanHeight.data, scanHeight.len)));
}

void QmlBridge5426e9_ChoseRemote(void* ptr, char remote)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "choseRemote", Q_ARG(bool, remote != 0));
}

void QmlBridge5426e9_SelectedRemoteNode(void* ptr, int index)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "selectedRemoteNode", Q_ARG(qint32, index));
}

struct Moc_PackedString QmlBridge5426e9_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "getTransferAmountUSD", Q_RETURN_ARG(QString, returnArg), Q_ARG(QString, QString::fromUtf8(amountTRTL.data, amountTRTL.len)));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

void QmlBridge5426e9_ClickedCloseSettings(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedCloseSettings");
}

void QmlBridge5426e9_ClickedSettingsButton(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "clickedSettingsButton");
}

void QmlBridge5426e9_ChoseDisplayFiat(void* ptr, char displayFiat)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "choseDisplayFiat", Q_ARG(bool, displayFiat != 0));
}

void QmlBridge5426e9_ChoseCheckpoints(void* ptr, char checkpoints)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "choseCheckpoints", Q_ARG(bool, checkpoints != 0));
}

void QmlBridge5426e9_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "saveRemoteDaemonInfo", Q_ARG(QString, QString::fromUtf8(daemonAddress.data, daemonAddress.len)), Q_ARG(QString, QString::fromUtf8(daemonPort.data, daemonPort.len)));
}

void QmlBridge5426e9_ResetRemoteDaemonInfo(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "resetRemoteDaemonInfo");
}

void QmlBridge5426e9_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "getFullBalanceAndDisplayInTransferAmount", Q_ARG(QString, QString::fromUtf8(transferFee.data, transferFee.len)));
}

void QmlBridge5426e9_GetDefaultFeeAndDisplay(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "getDefaultFeeAndDisplay");
}

void QmlBridge5426e9_LimitDisplayTransactions(void* ptr, char limit)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "limitDisplayTransactions", Q_ARG(bool, limit != 0));
}

struct Moc_PackedString QmlBridge5426e9_GetVersion(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "getVersion", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

struct Moc_PackedString QmlBridge5426e9_GetNewVersion(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "getNewVersion", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

struct Moc_PackedString QmlBridge5426e9_GetNewVersionURL(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "getNewVersionURL", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

void QmlBridge5426e9_OptimizeWalletWithFusion(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "optimizeWalletWithFusion");
}

void QmlBridge5426e9_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "saveAddress", Q_ARG(QString, QString::fromUtf8(name.data, name.len)), Q_ARG(QString, QString::fromUtf8(address.data, address.len)), Q_ARG(QString, QString::fromUtf8(paymentID.data, paymentID.len)));
}

void QmlBridge5426e9_FillListSavedAddresses(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "fillListSavedAddresses");
}

void QmlBridge5426e9_DeleteSavedAddress(void* ptr, int dbID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "deleteSavedAddress", Q_ARG(qint32, dbID));
}

void QmlBridge5426e9_ExportListTransactions(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "exportListTransactions");
}

void QmlBridge5426e9_RegisterToGo(void* ptr, void* object)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "registerToGo", Q_ARG(QObject*, static_cast<QObject*>(object)));
}

void QmlBridge5426e9_DeregisterToGo(void* ptr, struct Moc_PackedString objectName)
{
	QMetaObject::invokeMethod(static_cast<QmlBridge5426e9*>(ptr), "deregisterToGo", Q_ARG(QString, QString::fromUtf8(objectName.data, objectName.len)));
}

int QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaType()
{
	return qRegisterMetaType<QmlBridge5426e9*>();
}

int QmlBridge5426e9_QmlBridge5426e9_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<QmlBridge5426e9*>(const_cast<const char*>(typeName));
}

int QmlBridge5426e9_QmlBridge5426e9_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<QmlBridge5426e9>();
#else
	return 0;
#endif
}

int QmlBridge5426e9_QmlBridge5426e9_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<QmlBridge5426e9>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

void* QmlBridge5426e9___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridge5426e9___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridge5426e9___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* QmlBridge5426e9___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QmlBridge5426e9___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QmlBridge5426e9___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* QmlBridge5426e9___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridge5426e9___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridge5426e9___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QmlBridge5426e9___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridge5426e9___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridge5426e9___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QmlBridge5426e9_NewQmlBridge(void* parent)
{
	if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new QmlBridge5426e9(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new QmlBridge5426e9(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new QmlBridge5426e9(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new QmlBridge5426e9(static_cast<QWindow*>(parent));
	} else {
		return new QmlBridge5426e9(static_cast<QObject*>(parent));
	}
}

void QmlBridge5426e9_DestroyQmlBridge(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->~QmlBridge5426e9();
}

void QmlBridge5426e9_DestroyQmlBridgeDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

void QmlBridge5426e9_ChildEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridge5426e9*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void QmlBridge5426e9_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<QmlBridge5426e9*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void QmlBridge5426e9_CustomEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridge5426e9*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void QmlBridge5426e9_DeleteLaterDefault(void* ptr)
{
	static_cast<QmlBridge5426e9*>(ptr)->QObject::deleteLater();
}

void QmlBridge5426e9_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<QmlBridge5426e9*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char QmlBridge5426e9_EventDefault(void* ptr, void* e)
{
	return static_cast<QmlBridge5426e9*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char QmlBridge5426e9_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<QmlBridge5426e9*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}



void QmlBridge5426e9_TimerEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridge5426e9*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}

#include "moc_moc.h"
