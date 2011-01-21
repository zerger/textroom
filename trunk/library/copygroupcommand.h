/***************************************************************************
 *   Copyright (C) 2006 by Ian Reinhart Geiser   *
 *   geiseri@yahoo.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef COPYGROUPCOMMAND_H
#define COPYGROUPCOMMAND_H

#include <QUndoCommand>
class MindMap;
/**
Applies a copy command to a group of items.

	@author Ian Reinhart Geiser <geiseri@yahoo.com>
*/
class CopyGroupCommand : public QUndoCommand
{
public:
	CopyGroupCommand(const QList<QByteArray> &ids, MindMap *listener);

	~CopyGroupCommand();
	virtual void redo();
	virtual void undo();
	virtual int id() const;

private:
	QList<QByteArray> m_ids;
	MindMap *m_listener;
};

#endif
