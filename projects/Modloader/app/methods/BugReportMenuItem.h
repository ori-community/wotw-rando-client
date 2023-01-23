#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BugReportMenuItem.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Func_1_String_.h>

namespace app::classes::BugReportMenuItem {
    IL2CPP_REGISTER_METHOD(0x00807A70, app::String*, get_Name, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00807AF0, app::String*, get_Path, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Path, (app::BugReportMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Text, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Text, (app::BugReportMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00807B70, app::String*, get_HelpText, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HelpText, (app::BugReportMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00807BF0, bool, Draw, (app::BugReportMenuItem * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00807DD0, void, OnSelectedFixedUpdate, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_String_*, get_DynamicText, (app::BugReportMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BugReportMenuItem * this_ptr))
} // namespace app::classes::BugReportMenuItem
