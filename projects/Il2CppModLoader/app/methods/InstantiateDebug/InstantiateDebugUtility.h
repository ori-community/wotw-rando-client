#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InstantiateDebug::InstantiateDebugUtility {
    IL2CPP_REGISTER_METHOD(0x0062D3F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0062D850, app::InstantiateDebugIgnore *, get_ObjectsToIgnore, ())
    IL2CPP_REGISTER_METHOD(0x0062D9A0, void, Init, (app::List_1_UberPoolPrefabSetting_ * settings))
    IL2CPP_REGISTER_METHOD(0x0062DCB0, void, Report_1, (app::Object_1 * original))
    IL2CPP_REGISTER_METHOD(0x0062DE30, void, Report_2, (app::Object_1 * original, app::InstantiateDebugUtility_InstantiationType__Enum instantiation_type))
    IL2CPP_REGISTER_METHOD(0x0062E0A0, void, ReportUnpooled, (app::Object_1 * original))
    IL2CPP_REGISTER_METHOD(0x0062E140, void, ReportInsufficient, (app::GameObject * original))
    IL2CPP_REGISTER_METHOD(0x0062E1E0, void, DumpReports, (bool on_exit))
    IL2CPP_REGISTER_METHOD(0x0062E4D0, void, DumpMetricsReport, ())
    IL2CPP_REGISTER_METHOD(0x0062ECC0, void, DumpOverTimeReport, ())
    IL2CPP_REGISTER_METHOD(0x0062F3A0, void, AddReport, (app::InstantiateDebugUtility_InstanceInfo info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InstantiateDebugUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062F470, void, cctor, ())
}
