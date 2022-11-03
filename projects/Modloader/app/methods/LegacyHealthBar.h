#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyHealthBar {
    IL2CPP_REGISTER_METHOD(0x00A26FE0, float, get_Value, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A27010, void, Awake, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A27210, void, ValidateAssignReferences, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A27610, void, OnDestroy, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A277B0, void, ResetHealthBar, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EAC0, LegacyHealthBar_ResetHealthBar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A27850, void, Start, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A27A10, void, FixedUpdate, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28080, void, UpdateVisuals, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28280, void, LateUpdate, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A283B0, void, ctor, (app::LegacyHealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, (app::LegacyHealthBar * this_ptr))
} // namespace app::classes::LegacyHealthBar
