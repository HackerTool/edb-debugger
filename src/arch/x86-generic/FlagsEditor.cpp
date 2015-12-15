
#include "FlagsEditor.h"
#include <QtDebug>

namespace {

const int FlagC = (1 << 0);
const int FlagP = (1 << 2);
const int FlagA = (1 << 4);
const int FlagZ = (1 << 6);
const int FlagS = (1 << 7);
const int FlagT = (1 << 8);
const int FlagI = (1 << 9);
const int FlagD = (1 << 10);
const int FlagO = (1 << 11);

}

FlagsEditor::FlagsEditor(QWidget *parent, Qt::WindowFlags f) : QWidget(parent, f), value_(0) {
	ui.setupUi(this);
}

FlagsEditor::~FlagsEditor() {
}

void FlagsEditor::updateLabels() {
	ui.labelC->setText((value_ & FlagC) ? "C" : "c");
	ui.labelP->setText((value_ & FlagP) ? "P" : "p");
	ui.labelA->setText((value_ & FlagA) ? "A" : "a");
	ui.labelZ->setText((value_ & FlagZ) ? "Z" : "z");
	ui.labelS->setText((value_ & FlagS) ? "S" : "s");
	ui.labelT->setText((value_ & FlagT) ? "T" : "t");
	ui.labelI->setText((value_ & FlagI) ? "I" : "i");
	ui.labelD->setText((value_ & FlagD) ? "D" : "d");
	ui.labelO->setText((value_ & FlagO) ? "O" : "o");
}

void FlagsEditor::on_labelC_doubleClicked() {
	setValue(value_ ^ FlagC);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelP_doubleClicked() {
	setValue(value_ ^ FlagP);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelA_doubleClicked() {
	setValue(value_ ^ FlagA);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelZ_doubleClicked() {
	setValue(value_ ^ FlagZ);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelS_doubleClicked() {
	setValue(value_ ^ FlagS);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelT_doubleClicked() {
	setValue(value_ ^ FlagT);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelI_doubleClicked() {
	setValue(value_ ^ FlagI);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelD_doubleClicked() {
	setValue(value_ ^ FlagD);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::on_labelO_doubleClicked() {
	setValue(value_ ^ FlagO);
	Q_EMIT valueChanged(value_);
}

void FlagsEditor::setValue(quint64 value) {
	value_ = value;
	updateLabels();
}

quint64 FlagsEditor::value() const {
	return value_;
}

#include <QApplication>
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	FlagsEditor w;
	w.show();
	return app.exec();
}
