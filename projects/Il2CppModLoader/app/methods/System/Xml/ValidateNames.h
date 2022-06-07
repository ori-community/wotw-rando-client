#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::ValidateNames {
    IL2CPP_REGISTER_METHOD(0x019536B0, int32_t, ParseNmtoken, (app::String * s, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x019537D0, int32_t, ParseNmtokenNoNamespaces, (app::String * s, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01953900, int32_t, ParseNameNoNamespaces, (app::String * s, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01953AC0, bool, IsNameNoNamespaces, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x01953B80, int32_t, ParseNCName_1, (app::String * s, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01953D20, int32_t, ParseNCName_2, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x01953DC0, int32_t, ParseQName, (app::String * s, int32_t offset, int32_t * colon_offset))
    IL2CPP_REGISTER_METHOD(0x01953EF0, void, ParseQNameThrow, (app::String * s, app::String * * prefix, app::String * * local_name))
    IL2CPP_REGISTER_METHOD(0x01954040, void, ThrowInvalidName, (app::String * s, int32_t offset_start_char, int32_t offset_bad_char))
    IL2CPP_REGISTER_METHODINFO(0x0472CAC0, ValidateNames_ThrowInvalidName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01954260, app::Exception *, GetInvalidNameException, (app::String * s, int32_t offset_start_char, int32_t offset_bad_char))
    IL2CPP_REGISTER_METHOD(0x01954690, void, SplitQName, (app::String * name, app::String * * prefix, app::String * * lname))
    IL2CPP_REGISTER_METHODINFO(0x0471D448, ValidateNames_SplitQName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01954800, void, cctor, ())
}
