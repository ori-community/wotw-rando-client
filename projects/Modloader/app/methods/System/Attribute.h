#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Attribute.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Attribute {
    IL2CPP_REGISTER_METHOD(0x022990C0, app::Attribute__Array*, InternalGetCustomAttributes_1, (app::PropertyInfo_1 * element, app::Type* type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x022991C0, app::Attribute__Array*, InternalGetCustomAttributes_2, (app::EventInfo_1 * element, app::Type* type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x022992C0, app::Attribute__Array*, InternalParamGetCustomAttributes, (app::ParameterInfo_1 * parameter, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x022998D0, bool, InternalIsDefined_1, (app::PropertyInfo_1 * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02299990, bool, InternalIsDefined_2, (app::EventInfo_1 * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02299A50, app::Attribute__Array*, GetCustomAttributes_1, (app::MemberInfo_1 * element, app::Type* type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04776DD0, Attribute_GetCustomAttributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02299D10, app::Attribute__Array*, GetCustomAttributes_2, (app::MemberInfo_1 * element, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04703E68, Attribute_GetCustomAttributes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013DCFB0, bool, IsDefined_1, (app::MemberInfo_1 * element, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x02299F40, bool, IsDefined_2, (app::MemberInfo_1 * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04798410, Attribute_IsDefined_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229A2D0, app::Attribute*, GetCustomAttribute_1, (app::MemberInfo_1 * element, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x0229A2E0, app::Attribute*, GetCustomAttribute_2, (app::MemberInfo_1 * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x0475A848, Attribute_GetCustomAttribute_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229A3F0, app::Attribute__Array*, GetCustomAttributes_3, (app::ParameterInfo_1 * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04782CE0, Attribute_GetCustomAttributes_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229A720, app::Attribute__Array*, GetCustomAttributes_4, (app::ParameterInfo_1 * element, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x0475DF20, Attribute_GetCustomAttributes_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229A960, app::Attribute__Array*, GetCustomAttributes_5, (app::Module * element, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04715EE0, Attribute_GetCustomAttributes_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229AAC0, app::Attribute__Array*, GetCustomAttributes_6, (app::Module * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04725CF0, Attribute_GetCustomAttributes_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229AD20, app::Attribute__Array*, GetCustomAttributes_7, (app::Assembly * element, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x0229AD30, app::Attribute__Array*, GetCustomAttributes_8, (app::Assembly * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04749C48, Attribute_GetCustomAttributes_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229AF70, app::Attribute__Array*, GetCustomAttributes_9, (app::Assembly * element))
    IL2CPP_REGISTER_METHOD(0x0229B0B0, app::Attribute__Array*, GetCustomAttributes_10, (app::Assembly * element, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04720898, Attribute_GetCustomAttributes_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0229B200, app::Attribute*, GetCustomAttribute_3, (app::Assembly * element, app::Type* attribute_type))
    IL2CPP_REGISTER_METHOD(0x0229B2F0, app::Attribute*, GetCustomAttribute_4, (app::Assembly * element, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04764050, Attribute_GetCustomAttribute_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Attribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229B400, bool, Equals, (app::Attribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0229B710, bool, AreFieldValuesEqual, (app::Object * this_value, app::Object* that_value))
    IL2CPP_REGISTER_METHOD(0x0229B900, int32_t, GetHashCode, (app::Attribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1C4F0, app::Object*, get_TypeId, (app::Attribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229BB40, bool, Match, (app::Attribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDefaultAttribute, (app::Attribute * this_ptr))
} // namespace app::classes::System::Attribute
