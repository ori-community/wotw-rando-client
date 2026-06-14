#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ZDontSaveGroup.h>

namespace app::classes::ZDontSaveGroup {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::ZDontSaveGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ZDontSaveGroup* this_ptr)
} // namespace app::classes::ZDontSaveGroup
