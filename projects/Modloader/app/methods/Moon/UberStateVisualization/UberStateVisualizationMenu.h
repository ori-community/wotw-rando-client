#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateVisualizationMenu.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IDebugMenuItem.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationMenu {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Active, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_Active, (app::UberStateVisualizationMenu * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_List_1_IDebugMenuItem_*, get_Items, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Items, (app::UberStateVisualizationMenu * this_ptr, app::List_1_List_1_IDebugMenuItem_* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_Path, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Path, (app::UberStateVisualizationMenu * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_Text, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Text, (app::UberStateVisualizationMenu * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_HelpText, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_HelpText, (app::UberStateVisualizationMenu * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Func_1_String_*, get_DynamicText, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DynamicText, (app::UberStateVisualizationMenu * this_ptr, app::Func_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x0118CAB0, void, Awake, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddMenuItem, (app::UberStateVisualizationMenu * this_ptr, app::String* path, app::IDebugMenuItem* item, int32_t col))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118CB40, bool, Draw, (app::UberStateVisualizationMenu * this_ptr, app::Rect rect, bool b))
    IL2CPP_REGISTER_METHOD(0x0118CD50, void, Update, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GoBackMenu, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118CDF0, void, OnSelected, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118CF80, void, Reset, (app::UberStateVisualizationMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberStateVisualizationMenu * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationMenu
