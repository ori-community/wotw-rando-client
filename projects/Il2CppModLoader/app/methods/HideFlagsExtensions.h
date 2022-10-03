#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HideFlagsExtensions {
    IL2CPP_REGISTER_METHOD(0x00B49070, bool, HasFlagDontSave, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B490E0, bool, HasFlagNotEditable, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B49140, bool, HasFlagHideInHierarchy, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B491A0, bool, HasFlagHideInInspector, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B49200, bool, HasFlagDontSaveInEditor, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B49260, bool, HasFlagDontSaveInBuild, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B492C0, bool, HasFlagDontUnloadUnusedAsset, (app::Object_1 * _this))
    IL2CPP_REGISTER_METHOD(0x00B49320, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0157F9A0, app::Object*, OrNull_1, (app::Object * o))
    IL2CPP_REGISTER_METHOD(0x0157F9A0, app::ScenesManager*, OrNull_2, (app::ScenesManager * o))
    IL2CPP_REGISTER_METHODINFO(0x0473C678, HideFlagsExtensions_OrNull_1__MethodInfo)
} // namespace app::classes::HideFlagsExtensions
