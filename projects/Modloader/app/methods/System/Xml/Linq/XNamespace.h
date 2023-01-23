#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XNamespace.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XName.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WeakReference.h>

namespace app::classes::System::Xml::Linq::XNamespace {
    IL2CPP_REGISTER_METHOD(0x030390C0, void, ctor, (app::XNamespace * this_ptr, app::String* namespace_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_NamespaceName, (app::XNamespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03039310, app::XName*, GetName_1, (app::XNamespace * this_ptr, app::String* local_name))
    IL2CPP_REGISTER_METHODINFO(0x04797888, XNamespace_GetName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, ToString, (app::XNamespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030393F0, app::XNamespace*, get_None, ())
    IL2CPP_REGISTER_METHOD(0x03039490, app::XNamespace*, get_Xml, ())
    IL2CPP_REGISTER_METHOD(0x03039520, app::XNamespace*, get_Xmlns, ())
    IL2CPP_REGISTER_METHOD(0x030395B0, app::XNamespace*, Get_1, (app::String * namespace_name))
    IL2CPP_REGISTER_METHODINFO(0x0470C448, XNamespace_Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03039670, app::XNamespace*, op_Implicit, (app::String * namespace_name))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::XNamespace * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, GetHashCode, (app::XNamespace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::XNamespace * left, app::XNamespace* right))
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, (app::XNamespace * left, app::XNamespace* right))
    IL2CPP_REGISTER_METHOD(0x03039680, app::XName*, GetName_2, (app::XNamespace * this_ptr, app::String* local_name, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x03039950, app::XNamespace*, Get_2, (app::String * namespace_name, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00C3DB20, app::String*, ExtractLocalName, (app::XName * n))
    IL2CPP_REGISTER_METHODINFO(0x04777F78, XNamespace_ExtractLocalName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303A040, app::String*, ExtractNamespace, (app::WeakReference * r))
    IL2CPP_REGISTER_METHODINFO(0x04780C88, XNamespace_ExtractNamespace__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303A110, app::XNamespace*, EnsureNamespace, (app::WeakReference * *ref_nmsp, app::String* namespace_name))
    inline bool operator==(app::XNamespace& left, app::XNamespace& right) {
        return op_Equality(&left, &right);
    }
    inline bool operator!=(app::XNamespace& left, app::XNamespace& right) {
        return op_Inequality(&left, &right);
    }
} // namespace app::classes::System::Xml::Linq::XNamespace
