#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::Module {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268DF80, void, GetObjectData, (app::Module * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047859A0, Module_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, ToString, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268DFD0, app::Guid, GetModuleVersionId, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268E010, bool, filter_by_type_name, (app::Type * m, app::Object * filter_criteria))
    IL2CPP_REGISTER_METHODINFO(0x047560B0, Module_filter_by_type_name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E1C0, bool, filter_by_type_name_ignore_case, (app::Type * m, app::Object * filter_criteria))
    IL2CPP_REGISTER_METHODINFO(0x04778C60, Module_filter_by_type_name_ignore_case__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E4E0, app::String *, GetGuidInternal, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (app::Module * this_ptr, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02283820, bool, op_Equality, (app::Module * left, app::Module * right))
    IL2CPP_REGISTER_METHOD(0x02283870, bool, op_Inequality, (app::Module * left, app::Module * right))
    IL2CPP_REGISTER_METHOD(0x0268E500, app::Assembly *, get_Assembly, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F9B8, Module_get_Assembly__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E5A0, app::String *, get_ScopeName, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717170, Module_get_ScopeName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E640, app::Guid, get_ModuleVersionId, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778968, Module_get_ModuleVersionId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E6E0, app::String *, get_FullyQualifiedName, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E910, Module_get_FullyQualifiedName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E780, app::Exception *, CreateNIE, ())
    IL2CPP_REGISTER_METHOD(0x0268E8D0, bool, IsResource, (app::Module * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762A80, Module_IsResource__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268E970, app::Object__Array *, GetCustomAttributes_1, (app::Module * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04768508, Module_GetCustomAttributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268EA10, app::Object__Array *, GetCustomAttributes_2, (app::Module * this_ptr, app::Type * attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x047440C8, Module_GetCustomAttributes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268EAB0, bool, IsDefined, (app::Module * this_ptr, app::Type * attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x04798700, Module_IsDefined__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268EB50, void, cctor, ())
    inline bool operator == (app::Module & left, app::Module & right) {
        return op_Equality(&left, &right);
    }
    inline bool operator != (app::Module & left, app::Module & right) {
        return op_Inequality(&left, &right);
    }
}
