#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReflectionUtils_c.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Utilities::ReflectionUtils___c {
    IL2CPP_REGISTER_METHOD(0x03026560, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReflectionUtils_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030266A0, bool, _GetDefaultConstructor_b__11_0, (app::ReflectionUtils_c * this_ptr, app::ConstructorInfo* c))
    IL2CPP_REGISTER_METHOD(0x00CD8530, app::String*, _GetFieldsAndProperties_b__31_0, (app::ReflectionUtils_c * this_ptr, app::MemberInfo_1* m))
    IL2CPP_REGISTER_METHOD(0x00CD8530, app::Type*, _GetMemberInfoFromType_b__39_0, (app::ReflectionUtils_c * this_ptr, app::ParameterInfo_1* p))
    IL2CPP_REGISTER_METHOD(0x03026750, bool, _GetChildPrivateFields_b__41_0, (app::ReflectionUtils_c * this_ptr, app::FieldInfo_1* f))
} // namespace app::classes::Newtonsoft::Json::Utilities::ReflectionUtils___c
