#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Attribute.h>
#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationPrewarmPriorityAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_UserConfigurable.h>
#include <Modloader/app/structs/NeutralResourcesLanguageAttribute.h>
#include <Modloader/app/structs/NonSerializedAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute.h>
#include <Modloader/app/structs/SerializableAttribute.h>
#include <Modloader/app/structs/SerializeField.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlTypeConvertorAttribute.h>

namespace app::classes::System::Reflection::CustomAttributeExtensions {
    IL2CPP_REGISTER_METHOD(0x0229B200, app::Attribute*, GetCustomAttribute_1, app::Assembly* element, app::Type* attribute_type)
    IL2CPP_REGISTER_METHOD(0x0229A2D0, app::Attribute*, GetCustomAttribute_2, app::MemberInfo_1* element, app::Type* attribute_type)
    IL2CPP_REGISTER_METHOD(0x013DCFB0, bool, IsDefined, app::MemberInfo_1* element, app::Type* attribute_type)
    IL2CPP_REGISTER_METHOD(0x0157A300, app::Object*, GetCustomAttribute_3, app::Assembly* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::Object*, GetCustomAttribute_4, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A300, app::NeutralResourcesLanguageAttribute*, GetCustomAttribute_5, app::Assembly* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::XmlTypeConvertorAttribute*, GetCustomAttribute_6, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::DynamicInstantiationProviderAttribute*, GetCustomAttribute_7, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::DynamicInstantiationAttribute*, GetCustomAttribute_8, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::SerializeField*, GetCustomAttribute_9, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::NonSerializedAttribute*, GetCustomAttribute_10, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::DynamicInstantiationIgnoreAttribute*, GetCustomAttribute_11, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::SerializableAttribute*, GetCustomAttribute_12, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::DynamicInstantiationPrewarmPriorityAttribute*, GetCustomAttribute_13, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::PhysicsUpdateHandlerAttribute*, GetCustomAttribute_14, app::MemberInfo_1* element)
    IL2CPP_REGISTER_METHOD(0x0157A4D0, app::MoonRenderPipelineAsset_UserConfigurable*, GetCustomAttribute_15, app::MemberInfo_1* element)
} // namespace app::classes::System::Reflection::CustomAttributeExtensions
