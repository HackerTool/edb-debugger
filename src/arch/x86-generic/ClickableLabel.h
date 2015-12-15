
#ifndef CLICKABLE_LABEL_H_
#define CLICKABLE_LABEL_H_

#include <QLabel>

class ClickableLabel : public QLabel {
	Q_OBJECT
public:
	ClickableLabel(QWidget *parent = 0, Qt::WindowFlags f = 0);
	ClickableLabel(const QString &text, QWidget *parent = 0, Qt::WindowFlags f = 0);
	virtual ~ClickableLabel() override;

Q_SIGNALS:
	void clicked();
	void doubleClicked();
	
protected:
	virtual void mousePressEvent(QMouseEvent* event) ;
	virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
};

#endif
