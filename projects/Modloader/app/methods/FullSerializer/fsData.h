#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Dictionary_2_System_String_FullSerializer_fsData_.h>
#include <Modloader/app/structs/List_1_FullSerializer_fsData_.h>
#include <Modloader/app/structs/fsDataType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::FullSerializer::fsData {
    IL2CPP_REGISTER_METHOD(0x0063D180, void, ctor_1, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150A1A0, void, ctor_2, (app::fsData * this_ptr, bool boolean))
    IL2CPP_REGISTER_METHOD(0x0150A240, void, ctor_3, (app::fsData * this_ptr, double f))
    IL2CPP_REGISTER_METHOD(0x0150A2E0, void, ctor_4, (app::fsData * this_ptr, int64_t i))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_5, (app::fsData * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_6, (app::fsData * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* dict))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_7, (app::fsData * this_ptr, app::List_1_FullSerializer_fsData_* list))
    IL2CPP_REGISTER_METHOD(0x0150A380, app::fsData*, CreateDictionary, ())
    IL2CPP_REGISTER_METHOD(0x0150A630, app::fsData*, CreateList_1, ())
    IL2CPP_REGISTER_METHOD(0x0150A840, app::fsData*, CreateList_2, (int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0150AA50, void, BecomeDictionary, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150ABC0, app::fsData*, Clone, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150AD10, app::fsDataType__Enum, get_Type, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047045D0, fsData_get_Type__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0150AEB0, bool, get_IsNull, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150AEC0, bool, get_IsDouble, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150AF60, bool, get_IsInt64, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B000, bool, get_IsBool, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B0A0, bool, get_IsString, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B140, bool, get_IsDictionary, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B200, bool, get_IsList, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B2C0, double, get_AsDouble, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B340, int64_t, get_AsInt64, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B3C0, bool, get_AsBool, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B440, app::String*, get_AsString, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B4C0, app::Dictionary_2_System_String_FullSerializer_fsData_*, get_AsDictionary, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B540, app::List_1_FullSerializer_fsData_*, get_AsList, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B5C0, app::String*, ToString, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150B5D0, bool, Equals_1, (app::fsData * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0150B680, bool, Equals_2, (app::fsData * this_ptr, app::fsData* other))
    IL2CPP_REGISTER_METHODINFO(0x04798988, fsData_Equals_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0150BBF0, bool, op_Equality, (app::fsData * a, app::fsData* b))
    IL2CPP_REGISTER_METHOD(0x0150BD30, bool, op_Inequality, (app::fsData * a, app::fsData* b))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0150BE10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x015E9100, app::Object*, Cast_1, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755F90, fsData_Cast__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E8A00, double, Cast_2, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720C08, fsData_Cast_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E8D80, int64_t, Cast_3, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FF98, fsData_Cast_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E8680, bool, Cast_4, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C830, fsData_Cast_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E9100, app::String*, Cast_5, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738C40, fsData_Cast_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E9100, app::Dictionary_2_System_String_FullSerializer_fsData_*, Cast_6, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761268, fsData_Cast_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E9100, app::List_1_FullSerializer_fsData_*, Cast_7, (app::fsData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A2E0, fsData_Cast_6__MethodInfo)
    inline bool operator==(app::fsData& a, app::fsData& b) {
        return op_Equality(&a, &b);
    }
    inline bool operator!=(app::fsData& a, app::fsData& b) {
        return op_Inequality(&a, &b);
    }
} // namespace app::classes::FullSerializer::fsData
