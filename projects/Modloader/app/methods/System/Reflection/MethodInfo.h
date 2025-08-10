#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/MemberTypes__Enum.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::MethodInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MethodInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268D960, bool, op_Equality, app::MethodInfo_1* left, app::MethodInfo_1* right)
    IL2CPP_REGISTER_METHOD(0x0268DA40, bool, op_Inequality, app::MethodInfo_1* left, app::MethodInfo_1* right)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, app::MethodInfo_1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, app::MethodInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::MemberTypes__Enum, get_MemberType, app::MethodInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268DA60, app::Type*, get_ReturnType, app::MethodInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268DAB0, app::Type__Array*, GetGenericArguments, app::MethodInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268DB20, app::MethodInfo_1*, GetGenericMethodDefinition, app::MethodInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0268DB90, app::MethodInfo_1*, MakeGenericMethod, app::MethodInfo_1* this_ptr, app::Type__Array* type_arguments)
    IL2CPP_REGISTER_METHOD(0x0268DC00, app::Delegate*, CreateDelegate_1, app::MethodInfo_1* this_ptr, app::Type* delegate_type)
    IL2CPP_REGISTER_METHOD(0x0268DC70, app::Delegate*, CreateDelegate_2, app::MethodInfo_1* this_ptr, app::Type* delegate_type, app::Object* target)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::MethodInfo_1*, GetBaseMethod, app::MethodInfo_1* this_ptr)
    inline bool operator==(app::MethodInfo_1& left, app::MethodInfo_1& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::MethodInfo_1& left, app::MethodInfo_1& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::Reflection::MethodInfo
