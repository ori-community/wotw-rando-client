#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Activator {
    IL2CPP_REGISTER_METHOD(0x0228AE50, app::Object*, CreateInstance_1, (app::Type * type, app::BindingFlags__Enum binding_attr, app::Binder* binder, app::Object__Array* args, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x0228AE80, app::Object*, CreateInstance_2, (app::Type * type, app::BindingFlags__Enum binding_attr, app::Binder* binder, app::Object__Array* args, app::CultureInfo* culture, app::Object__Array* activation_attributes))
    IL2CPP_REGISTER_METHODINFO(0x0470F338, Activator_CreateInstance_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A08480, app::Object*, CreateInstance_3, (app::Type * type, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x0228B0C0, app::Object*, CreateInstance_4, (app::Type * type, app::Object__Array* args, app::Object__Array* activation_attributes))
    IL2CPP_REGISTER_METHOD(0x0228B0F0, app::Object*, CreateInstance_5, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0228B100, app::Object*, CreateInstance_6, (app::Type * type, bool non_public))
    IL2CPP_REGISTER_METHODINFO(0x0474F420, Activator_CreateInstance_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AC140, app::Object*, CreateInstance_7, ())
    IL2CPP_REGISTER_METHODINFO(0x04794770, Activator_CreateInstance_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016ABF70, app::InstantiateUtility_InstantiateInfo, CreateInstance_8, ())
    IL2CPP_REGISTER_METHODINFO(0x047676A8, Activator_CreateInstance_7__MethodInfo)
} // namespace app::classes::System::Activator
