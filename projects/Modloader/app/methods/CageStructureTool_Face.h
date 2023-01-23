#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>

namespace app::classes::CageStructureTool_Face {
    IL2CPP_REGISTER_METHOD(0x0167F990, void, ctor, (app::CageStructureTool_Face * this_ptr, app::List_1_System_Int32_* vertices, int32_t id))
    IL2CPP_REGISTER_METHOD(0x0167FD20, int32_t, GetVertexIndexAtWrappedIndex, (app::CageStructureTool_Face * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0167FDD0, int32_t, get_FaceHash, (app::CageStructureTool_Face * this_ptr))
} // namespace app::classes::CageStructureTool_Face
