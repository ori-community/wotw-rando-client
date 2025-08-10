#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IModularZoneModifier.h>
#include <Modloader/app/structs/IModularZoneModifier__Array.h>
#include <Modloader/app/structs/List_1_ICondition_.h>
#include <Modloader/app/structs/ModularZone.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::ModularZone {
    IL2CPP_REGISTER_METHOD(0x0132F750, float, get_TimeSinceLastActive, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01292100, void, set_TimeSinceLastActive, app::ModularZone* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0132F760, app::IModularZoneModifier__Array*, get_Modifiers, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Modifiers, app::ModularZone* this_ptr, app::IModularZoneModifier__Array* value)
    IL2CPP_REGISTER_METHOD(0x0132F790, app::List_1_ICondition_*, get_ResolvedConditions, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132F9C0, app::Transform*, get_TargetTransform, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132FB80, bool, get_IsTargetInside, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldUpdateWhileDisabled, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132FCF0, void, AwakeInternal, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132FEA0, void, DestroyInternal, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01330050, void, OnEnableEditor, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01330060, void, OnDisableEditor, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01330070, void, InitializeAllModifiers, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01330200, void, CleanUpModifiers, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01330390, void, OnEnableRuntime, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisableRuntime, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013303C0, void, UpdateAllModifiers, app::ModularZone* this_ptr, float weight, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01330560, void, EditorUpdate, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013305F0, void, OnZoneUpdate, app::ModularZone* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x0132A7C0, void, InvalidateModifierCache, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013308E0, void, FindModifiers, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01330B30, app::IModularZoneModifier*, AddModifier_1, app::ModularZone* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01330D20, void, RemoveModifier, app::ModularZone* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01330F70, bool, HasModifier_1, app::ModularZone* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01331040, bool, ConditionsPassed, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013311C0, void, OnPostRestoreCheckpoint, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01331230, void, ctor, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EB9B0, app::Object*, AddModifier_2, app::ModularZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018F31E0, bool, HasModifier_2, app::ModularZone* this_ptr)
} // namespace app::classes::ModularZone
