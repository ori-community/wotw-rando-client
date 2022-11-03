#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Version {
    IL2CPP_REGISTER_METHOD(0x0314B480, void, ctor_1, (app::Version * this_ptr, int32_t major, int32_t minor, int32_t build, int32_t revision))
    IL2CPP_REGISTER_METHODINFO(0x0471B840, Version__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314B660, void, ctor_2, (app::Version * this_ptr, int32_t major, int32_t minor, int32_t build))
    IL2CPP_REGISTER_METHODINFO(0x0473EDE8, Version__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314B7F0, void, ctor_3, (app::Version * this_ptr, int32_t major, int32_t minor))
    IL2CPP_REGISTER_METHODINFO(0x0474D4D0, Version__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314B920, void, ctor_4, (app::Version * this_ptr, app::String* version))
    IL2CPP_REGISTER_METHOD(0x0314BB00, void, ctor_5, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Major, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Minor, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Build, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Revision, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314BB10, app::Object*, Clone, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314BC70, int32_t, CompareTo_1, (app::Version * this_ptr, app::Object* version))
    IL2CPP_REGISTER_METHODINFO(0x0472A578, Version_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314BDD0, int32_t, CompareTo_2, (app::Version * this_ptr, app::Version* value))
    IL2CPP_REGISTER_METHOD(0x0314BED0, bool, Equals_1, (app::Version * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0314BFD0, bool, Equals_2, (app::Version * this_ptr, app::Version* obj))
    IL2CPP_REGISTER_METHOD(0x0314C0C0, int32_t, GetHashCode, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314C0F0, app::String*, ToString_1, (app::Version * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314C230, app::String*, ToString_2, (app::Version * this_ptr, int32_t field_count))
    IL2CPP_REGISTER_METHODINFO(0x04788690, Version_ToString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314C720, void, AppendPositiveNumber, (int32_t num, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x0314C7C0, app::Version*, Parse, (app::String * input))
    IL2CPP_REGISTER_METHODINFO(0x0477E610, Version_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314C8E0, bool, TryParse, (app::String * input, app::Version** result))
    IL2CPP_REGISTER_METHOD(0x0314C9C0, bool, TryParseVersion, (app::String * version, app::Version_VersionResult* result))
    IL2CPP_REGISTER_METHOD(0x0314D040, bool, TryParseComponent, (app::String * component, app::String* component_name, app::Version_VersionResult* result, int32_t* parsed_component))
    IL2CPP_REGISTER_METHOD(0x0314D160, bool, op_Equality, (app::Version * v1, app::Version* v2))
    IL2CPP_REGISTER_METHOD(0x0314D180, bool, op_Inequality, (app::Version * v1, app::Version* v2))
    IL2CPP_REGISTER_METHOD(0x0314D250, bool, op_LessThan, (app::Version * v1, app::Version* v2))
    IL2CPP_REGISTER_METHODINFO(0x04796C98, Version_op_LessThan__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314D320, bool, op_LessThanOrEqual, (app::Version * v1, app::Version* v2))
    IL2CPP_REGISTER_METHODINFO(0x04717E00, Version_op_LessThanOrEqual__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314D3F0, bool, op_GreaterThan, (app::Version * v1, app::Version* v2))
    IL2CPP_REGISTER_METHOD(0x0314D4A0, bool, op_GreaterThanOrEqual, (app::Version * v1, app::Version* v2))
    IL2CPP_REGISTER_METHOD(0x0314D550, void, cctor, ())
    inline bool operator==(app::Version& v1, app::Version& v2) {
        return op_Equality(&v1, &v2);
    }
    inline bool operator!=(app::Version& v1, app::Version& v2) {
        return op_Inequality(&v1, &v2);
    }
    inline bool operator<(app::Version& v1, app::Version& v2) {
        return op_LessThan(&v1, &v2);
    }
    inline bool operator<=(app::Version& v1, app::Version& v2) {
        return op_LessThanOrEqual(&v1, &v2);
    }
    inline bool operator>(app::Version& v1, app::Version& v2) {
        return op_GreaterThan(&v1, &v2);
    }
    inline bool operator>=(app::Version& v1, app::Version& v2) {
        return op_GreaterThanOrEqual(&v1, &v2);
    }
} // namespace app::classes::System::Version
