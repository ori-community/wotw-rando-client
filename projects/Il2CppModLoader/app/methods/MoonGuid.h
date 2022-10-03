#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonGuid {
    IL2CPP_REGISTER_METHOD(0x00F506D0, void, ctor_1, (app::MoonGuid * this_ptr, app::MoonGuid* moon_guid))
    IL2CPP_REGISTER_METHOD(0x00F50700, void, ctor_2, (app::MoonGuid * this_ptr, int32_t a, int32_t b, int32_t c, int32_t d))
    IL2CPP_REGISTER_METHOD(0x00F50720, void, ctor_3, (app::MoonGuid * this_ptr, app::Guid guid))
    IL2CPP_REGISTER_METHOD(0x00F50760, void, ctor_4, (app::MoonGuid * this_ptr, app::String* guid))
    IL2CPP_REGISTER_METHOD(0x00F50770, void, ctor_5, (app::MoonGuid * this_ptr, app::Byte__Array* guid_byte_array))
    IL2CPP_REGISTER_METHOD(0x00F50780, void, ctor_6, (app::MoonGuid * this_ptr, app::BinaryReader* reader))
    IL2CPP_REGISTER_METHOD(0x00F50810, void, Parse_1, (app::MoonGuid * this_ptr, app::Guid guid))
    IL2CPP_REGISTER_METHOD(0x00F50840, void, Parse_2, (app::MoonGuid * this_ptr, app::Byte__Array* guid_byte_array))
    IL2CPP_REGISTER_METHOD(0x00F50930, void, Parse_3, (app::MoonGuid * this_ptr, app::String* guid))
    IL2CPP_REGISTER_METHOD(0x00F50B80, app::Byte__Array*, ToByteArray, (app::MoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F51090, app::String*, get_GUIDString, (app::MoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F510B0, bool, op_Equality, (app::MoonGuid * a, app::MoonGuid* b))
    IL2CPP_REGISTER_METHOD(0x00F510E0, bool, op_Inequality, (app::MoonGuid * a, app::MoonGuid* b))
    IL2CPP_REGISTER_METHOD(0x00F51090, app::String*, ToString, (app::MoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F511C0, void, UpdateString, (app::MoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F51540, bool, Equals_1, (app::MoonGuid * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00F516A0, bool, Equals_2, (app::MoonGuid * this_ptr, app::MoonGuid* moon_guid))
    IL2CPP_REGISTER_METHOD(0x00F516D0, int32_t, GetHashCode, (app::MoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F516E0, void, Serialize, (app::MoonGuid * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00F51750, void, Save_1, (app::MoonGuid * this_ptr, app::UberStateArchive* ar))
    IL2CPP_REGISTER_METHOD(0x00F51830, void, Load, (app::MoonGuid * this_ptr, app::UberStateArchive* ar))
    IL2CPP_REGISTER_METHOD(0x00F51920, void, Save_2, (app::MoonGuid * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00F519A0, void, cctor, ())
    inline bool operator==(app::MoonGuid& a, app::MoonGuid& b) {
        return op_Equality(&a, &b);
    }
    inline bool operator!=(app::MoonGuid& a, app::MoonGuid& b) {
        return op_Inequality(&a, &b);
    }
} // namespace app::classes::MoonGuid
