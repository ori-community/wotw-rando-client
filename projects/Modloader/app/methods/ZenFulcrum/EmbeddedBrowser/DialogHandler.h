#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DialogHandler.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/DialogHandler_DialogCallback.h>
#include <Modloader/app/structs/DialogHandler_MenuCallback.h>
#include <Modloader/app/structs/BrowserNative_DialogType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::DialogHandler {
    IL2CPP_REGISTER_METHOD(0x01DD4430, app::DialogHandler*, Create, (app::Browser * parent, app::DialogHandler_DialogCallback* dialog_callback, app::DialogHandler_MenuCallback* context_callback))
    IL2CPP_REGISTER_METHOD(0x01DD49E0, void, HandleDialog, (app::DialogHandler * this_ptr, app::BrowserNative_DialogType__Enum type, app::String* text, app::String* prompt_default))
    IL2CPP_REGISTER_METHODINFO(0x0475B2F8, DialogHandler_HandleDialog__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DD4F30, void, Show, (app::DialogHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD4FA0, void, Hide, (app::DialogHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD50C0, void, HandleContextMenu, (app::DialogHandler * this_ptr, app::String* menu_j_s_o_n, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DialogHandler * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::DialogHandler
