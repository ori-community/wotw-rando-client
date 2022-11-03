#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::DictionaryExtensions {
    IL2CPP_REGISTER_METHOD(0x01565240, bool, TryAdd_1, (app::Dictionary_2_System_Object_System_Object_ * _this, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015652B0, bool, TryGetValueOrAddNew_1, (app::Dictionary_2_System_Object_System_Object_ * _this, app::Object* key, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x015652B0, bool, TryGetValueOrAddNew_2, (app::Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ * _this, app::PhysicsUpdateHandlerAttribute* key, app::List_1_UnityEngine_Component_** value))
    IL2CPP_REGISTER_METHODINFO(0x047095C8, DictionaryExtensions_TryGetValueOrAddNew_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01565240, bool, TryAdd_2, (app::Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * _this, app::IButtonInput* key, app::Input_InputButtonProcessor* value))
    IL2CPP_REGISTER_METHODINFO(0x047703B8, DictionaryExtensions_TryAdd_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015651D0, bool, TryAdd_3, (app::Dictionary_2_System_Int32_UberPoolItem_ * _this, int32_t key, app::UberPoolItem* value))
    IL2CPP_REGISTER_METHODINFO(0x047874E8, DictionaryExtensions_TryAdd_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015651D0, bool, TryAdd_4, (app::Dictionary_2_System_Int32_System_Object_ * _this, int32_t key, app::Object* value))
} // namespace app::classes::System::Collections::Generic::DictionaryExtensions
