// The Tofita Kernel
// Copyright (C) 2020  Oleg Petrenko
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, version 3 of the License.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// PS/2 Mouse

enum class MouseActionType : uint8_t {
	Noop = 0,
	LeftDown,
	LeftUp,
	RightDown,
	RightUp,
	MiddleDown,
	MiddleUp,
	// TODO ScrollFromUser,
	// TODO ScrollToUser,
	Moved
};

volatile bool lockMouse = false;
function handleMousePacket();