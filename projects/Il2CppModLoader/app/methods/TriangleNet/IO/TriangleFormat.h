#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::IO::TriangleFormat {
    IL2CPP_REGISTER_METHOD(0x02621520, bool, IsSupported, (app::TriangleFormat * this_ptr, app::String* file))
    IL2CPP_REGISTER_METHOD(0x02621670, app::IMesh*, Import, (app::TriangleFormat * this_ptr, app::String* filename))
    IL2CPP_REGISTER_METHODINFO(0x04717850, TriangleFormat_Import__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026219D0, void, Write_1, (app::TriangleFormat * this_ptr, app::IMesh* mesh, app::String* filename))
    IL2CPP_REGISTER_METHOD(0x02621C30, void, Write_2, (app::TriangleFormat * this_ptr, app::IMesh* mesh, app::Stream* stream))
    IL2CPP_REGISTER_METHODINFO(0x04709F50, TriangleFormat_Write_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02621C80, app::IPolygon*, Read, (app::TriangleFormat * this_ptr, app::String* filename))
    IL2CPP_REGISTER_METHODINFO(0x047131A0, TriangleFormat_Read__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02621FB0, void, Write_3, (app::TriangleFormat * this_ptr, app::IPolygon* polygon, app::String* filename))
    IL2CPP_REGISTER_METHOD(0x02622110, void, Write_4, (app::TriangleFormat * this_ptr, app::IPolygon* polygon, app::Stream* stream))
    IL2CPP_REGISTER_METHODINFO(0x04785698, TriangleFormat_Write_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TriangleFormat * this_ptr))
} // namespace app::classes::TriangleNet::IO::TriangleFormat
