#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MenuTabEntry.h>
#include <Modloader/app/structs/MenuTabManager_c.h>

namespace app::classes::MenuTabManager___c {
    IL2CPP_REGISTER_METHOD(0x009EAE20, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MenuTabManager_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009EAF60, bool, _FixedUpdate_b__26_0, app::MenuTabManager_c* this_ptr, app::MenuTabEntry* x)
    IL2CPP_REGISTER_METHOD(0x009EB020, bool, _FixedUpdate_b__26_1, app::MenuTabManager_c* this_ptr, app::MenuTabEntry* x)
    IL2CPP_REGISTER_METHOD(0x009EB0E0, void, _OpenMap_b__42_0, app::MenuTabManager_c* this_ptr)
} // namespace app::classes::MenuTabManager___c
