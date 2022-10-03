#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LoadDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ColumnOffset, (app::LoadDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, (app::LoadDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB27F0, void, Awake, (app::LoadDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB2890, void, GetItems, (app::LoadDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_* items))
    IL2CPP_REGISTER_METHOD(0x00FB2E80, void, Load, (app::LoadDebugMenuPage * this_ptr, app::String* file))
    IL2CPP_REGISTER_METHOD(0x00FB31A0, void, PopulateSaves, (app::LoadDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB3650, void, PopulateFromDirectory, (app::LoadDebugMenuPage * this_ptr, app::String* directory, app::String* prepend))
    IL2CPP_REGISTER_METHOD(0x00FB3C10, void, ctor, (app::LoadDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::LoadDebugMenuPage
