#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::IO::FileProcessor {
    IL2CPP_REGISTER_METHOD(0x02620610, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02620850, void, Add, (app::IFileFormat * format))
    IL2CPP_REGISTER_METHOD(0x02620910, bool, IsSupported, (app::String * file))
    IL2CPP_REGISTER_METHOD(0x02620AE0, app::IPolygon*, Read, (app::String * filename))
    IL2CPP_REGISTER_METHODINFO(0x0470D608, FileProcessor_Read__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02620D20, void, Write_1, (app::IPolygon * polygon, app::String* filename))
    IL2CPP_REGISTER_METHODINFO(0x04773DA0, FileProcessor_Write__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02620F60, app::IMesh*, Import, (app::String * filename))
    IL2CPP_REGISTER_METHODINFO(0x047329A0, FileProcessor_Import__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026211A0, void, Write_2, (app::IMesh * mesh, app::String* filename))
    IL2CPP_REGISTER_METHODINFO(0x0471B658, FileProcessor_Write_1__MethodInfo)
} // namespace app::classes::TriangleNet::IO::FileProcessor
