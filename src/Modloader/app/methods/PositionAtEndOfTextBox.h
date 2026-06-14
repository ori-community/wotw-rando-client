#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PositionAtEndOfTextBox.h>

namespace app::classes::PositionAtEndOfTextBox {
    IL2CPP_REGISTER_METHOD(0x00C67490, void, FixedUpdate, app::PositionAtEndOfTextBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PositionAtEndOfTextBox* this_ptr)
} // namespace app::classes::PositionAtEndOfTextBox
