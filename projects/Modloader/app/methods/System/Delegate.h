#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Delegate__Array.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/MulticastDelegate.h>

namespace app::classes::System::Delegate {
    IL2CPP_REGISTER_METHOD(0x0173D7B0, app::MethodInfo_1*, get_Method, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173D7D0, app::MethodInfo_1*, GetVirtualMethod_internal, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_Target, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173D7E0, app::Delegate*, CreateDelegate_internal, (app::Type * type, app::Object* target, app::MethodInfo_1* info, bool throw_on_bind_failure))
    IL2CPP_REGISTER_METHOD(0x0173D8E0, bool, arg_type_match, (app::Type * del_arg_type, app::Type* arg_type))
    IL2CPP_REGISTER_METHOD(0x0173DAE0, bool, arg_type_match_this, (app::Type * del_arg_type, app::Type* arg_type, bool boxed_this))
    IL2CPP_REGISTER_METHOD(0x0173DC90, bool, return_type_match, (app::Type * del_return_type, app::Type* return_type))
    IL2CPP_REGISTER_METHOD(0x0173DD90, app::Delegate*, CreateDelegate_1, (app::Type * type, app::Object* first_argument, app::MethodInfo_1* method_1, bool throw_on_bind_failure))
    IL2CPP_REGISTER_METHOD(0x0173DDB0, app::Delegate*, CreateDelegate_2, (app::Type * type, app::Object* first_argument, app::MethodInfo_1* method_1, bool throw_on_bind_failure, bool allow_closed))
    IL2CPP_REGISTER_METHODINFO(0x0476FCF0, Delegate_CreateDelegate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173E950, app::Delegate*, CreateDelegate_3, (app::Type * type, app::Object* first_argument, app::MethodInfo_1* method_1))
    IL2CPP_REGISTER_METHOD(0x0173E970, app::Delegate*, CreateDelegate_4, (app::Type * type, app::MethodInfo_1* method_1, bool throw_on_bind_failure))
    IL2CPP_REGISTER_METHOD(0x013DCFD0, app::Delegate*, CreateDelegate_5, (app::Type * type, app::MethodInfo_1* method_1))
    IL2CPP_REGISTER_METHOD(0x0173E9A0, app::Delegate*, CreateDelegate_6, (app::Type * type, app::Object* target, app::String* method_1))
    IL2CPP_REGISTER_METHOD(0x0173EB20, app::MethodInfo_1*, GetCandidateMethod, (app::Type * type, app::Type* target, app::String* method_1, app::BindingFlags__Enum bflags, bool ignore_case, bool throw_on_bind_failure))
    IL2CPP_REGISTER_METHODINFO(0x0470F750, Delegate_GetCandidateMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173EFC0, app::Delegate*, CreateDelegate_7, (app::Type * type, app::Type* target, app::String* method_1, bool ignore_case, bool throw_on_bind_failure))
    IL2CPP_REGISTER_METHODINFO(0x047335F8, Delegate_CreateDelegate_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173F160, app::Delegate*, CreateDelegate_8, (app::Type * type, app::Type* target, app::String* method_1))
    IL2CPP_REGISTER_METHOD(0x0173F2F0, app::Delegate*, CreateDelegate_9, (app::Type * type, app::Object* target, app::String* method_1, bool ignore_case, bool throw_on_bind_failure))
    IL2CPP_REGISTER_METHODINFO(0x047705B8, Delegate_CreateDelegate_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173F480, app::Delegate*, CreateDelegate_10, (app::Type * type, app::Object* target, app::String* method_1, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F6C0, bool, Equals, (app::Delegate * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0173F8B0, int32_t, GetHashCode, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F940, app::MethodInfo_1*, GetMethodImpl, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173FA70, void, GetObjectData, (app::Delegate * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0173FA90, app::Delegate__Array*, GetInvocationList, (app::Delegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173FB80, app::Delegate*, Combine_1, (app::Delegate * a, app::Delegate* b))
    IL2CPP_REGISTER_METHODINFO(0x04762F58, Delegate_Combine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173FD70, app::Delegate*, Combine_2, (app::Delegate__Array * delegates))
    IL2CPP_REGISTER_METHOD(0x0173FDE0, app::Delegate*, CombineImpl, (app::Delegate * this_ptr, app::Delegate* d))
    IL2CPP_REGISTER_METHODINFO(0x04755D88, Delegate_CombineImpl__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173FE50, app::Delegate*, Remove, (app::Delegate * source, app::Delegate* value))
    IL2CPP_REGISTER_METHODINFO(0x047156C0, Delegate_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01740040, app::Delegate*, RemoveImpl, (app::Delegate * this_ptr, app::Delegate* d))
    IL2CPP_REGISTER_METHOD(0x01740070, bool, op_Equality, (app::Delegate * d1, app::Delegate* d2))
    IL2CPP_REGISTER_METHOD(0x017400A0, app::Delegate*, CreateDelegateNoSecurityCheck, (app::RuntimeType * type, app::Object* first_argument, app::MethodInfo_1* method_1))
    IL2CPP_REGISTER_METHOD(0x017400C0, app::MulticastDelegate*, AllocDelegateLike_internal, (app::Delegate * d))
    inline bool operator==(app::Delegate& d1, app::Delegate& d2) {
        return op_Equality(&d1, &d2);
    }
} // namespace app::classes::System::Delegate
