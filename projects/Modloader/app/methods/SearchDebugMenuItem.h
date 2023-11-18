#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SearchDebugMenuItem.h>

namespace app::classes::SearchDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (app::SearchDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Text, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Text, (app::SearchDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_HelpText, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_HelpText, (app::SearchDebugMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0106A150, void, ctor, (app::SearchDebugMenuItem * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x0106A3A0, bool, Draw, (app::SearchDebugMenuItem * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106A760, void, OnSelectedFixedUpdate, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106A7C0, void, RefreshSearch, (app::SearchDebugMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106AC70, void, Search, (app::SearchDebugMenuItem * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Func_1_String_*, get_DynamicText, (app::SearchDebugMenuItem * this_ptr))
} // namespace app::classes::SearchDebugMenuItem
