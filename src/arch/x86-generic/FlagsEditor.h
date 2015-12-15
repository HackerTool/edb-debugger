
#ifndef FLAGS_EDITOR_H_
#define FLAGS_EDITOR_H_

#include <QWidget>
#include "ui_FlagsEditor.h"

class FlagsEditor : public QWidget {
	Q_OBJECT
public:
	FlagsEditor(QWidget *parent = 0, Qt::WindowFlags f = 0);
	virtual ~FlagsEditor() override;

public Q_SLOTS:
	void on_labelC_doubleClicked();
	void on_labelP_doubleClicked();
	void on_labelA_doubleClicked();
	void on_labelZ_doubleClicked();
	void on_labelS_doubleClicked();
	void on_labelT_doubleClicked();
	void on_labelI_doubleClicked();
	void on_labelD_doubleClicked();
	void on_labelO_doubleClicked();

Q_SIGNALS:
	void valueChanged(quint64 newValue);

public:
	void setValue(quint64 value);
	quint64 value() const;
	
private:
	void updateLabels();

private:
	Ui::FlagsEditor ui;
	quint64 value_;
};

#endif
