/****************************************************************************
**
** WinThings library
**
** Copyright (C) 2011 Ivan Vizir <define-true-false@yandex.com>
**
*****************************************************************************
**
** $QUTIM_BEGIN_LICENSE$
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
** See the GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program. If not, see http://www.gnu.org/licenses/.
** $QUTIM_END_LICENSE$
**
****************************************************************************/

#include <QCoreApplication>
#include <QSize>

//class QPixmap;

class Win7EventFilter : public QObject
{
	Q_OBJECT

	Win7EventFilter();
	static QCoreApplication::EventFilter replacedFilter;

public:
	static Win7EventFilter *instance();
	static bool eventFilter(void *message, long *result);
};