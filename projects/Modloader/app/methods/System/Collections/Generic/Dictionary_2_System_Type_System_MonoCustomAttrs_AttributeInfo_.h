#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0478AA28, Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_ * this_ptr, app::Type* key, app::MonoCustomAttrs_AttributeInfo** value))
    IL2CPP_REGISTER_METHODINFO(0x0478DD00, Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_ * this_ptr, app::Type* key, app::MonoCustomAttrs_AttributeInfo* value))
    IL2CPP_REGISTER_METHODINFO(0x04734928, Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_
