#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeDescriptionProvider.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IExtenderProvider__Array.h>
#include <Modloader/app/structs/IServiceProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::TypeDescriptionProvider {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::TypeDescriptionProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::TypeDescriptionProvider * this_ptr, app::TypeDescriptionProvider* parent))
    IL2CPP_REGISTER_METHOD(0x02946750, app::Object*, CreateInstance, (app::TypeDescriptionProvider * this_ptr, app::IServiceProvider* provider, app::Type* object_type, app::Type__Array* arg_types, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x029468A0, app::IDictionary*, GetCache, (app::TypeDescriptionProvider * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x029468C0, app::ICustomTypeDescriptor*, GetExtendedTypeDescriptor, (app::TypeDescriptionProvider * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02946A50, app::IExtenderProvider__Array*, GetExtenderProviders, (app::TypeDescriptionProvider * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02946B40, app::String*, GetFullComponentName, (app::TypeDescriptionProvider * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x01F938C0, app::Type*, GetReflectionType_1, (app::TypeDescriptionProvider * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x02946C10, app::Type*, GetReflectionType_2, (app::TypeDescriptionProvider * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02946CF0, app::Type*, GetReflectionType_3, (app::TypeDescriptionProvider * this_ptr, app::Type* object_type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02946D10, app::Type*, GetRuntimeType, (app::TypeDescriptionProvider * this_ptr, app::Type* reflection_type))
    IL2CPP_REGISTER_METHOD(0x02946F00, app::ICustomTypeDescriptor*, GetTypeDescriptor_1, (app::TypeDescriptionProvider * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x02946F20, app::ICustomTypeDescriptor*, GetTypeDescriptor_2, (app::TypeDescriptionProvider * this_ptr, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02947000, app::ICustomTypeDescriptor*, GetTypeDescriptor_3, (app::TypeDescriptionProvider * this_ptr, app::Type* object_type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x02947190, bool, IsSupportedType, (app::TypeDescriptionProvider * this_ptr, app::Type* type))
} // namespace app::classes::System::ComponentModel::TypeDescriptionProvider
