#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IFileFormat.h>
#include <Modloader/app/structs/IMesh.h>
#include <Modloader/app/structs/IPolygon.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TriangleNet::IO::FileProcessor {
    IL2CPP_REGISTER_METHOD(0x02620610, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02620850, void, Add, app::IFileFormat* format)
    IL2CPP_REGISTER_METHOD(0x02620910, bool, IsSupported, app::String* file)
    IL2CPP_REGISTER_METHOD(0x02620AE0, app::IPolygon*, Read, app::String* filename)
    IL2CPP_REGISTER_METHOD(0x02620D20, void, Write_1, app::IPolygon* polygon, app::String* filename)
    IL2CPP_REGISTER_METHOD(0x02620F60, app::IMesh*, Import, app::String* filename)
    IL2CPP_REGISTER_METHOD(0x026211A0, void, Write_2, app::IMesh* mesh, app::String* filename)
} // namespace app::classes::TriangleNet::IO::FileProcessor
