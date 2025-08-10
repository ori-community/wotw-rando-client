#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QuestMessageBox.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::QuestMessageBox {
    IL2CPP_REGISTER_METHOD(0x00E8B040, void, SetHeaderAndFooter, app::QuestMessageBox* this_ptr, app::String* header, app::String* footer)
    IL2CPP_REGISTER_METHOD(0x00E8B0F0, void, ctor, app::QuestMessageBox* this_ptr)
} // namespace app::classes::QuestMessageBox
