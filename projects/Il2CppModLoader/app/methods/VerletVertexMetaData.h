#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VerletVertexMetaData {
    IL2CPP_REGISTER_METHOD(0x013D3F10, void, OnAddVertex, (app::VerletVertexMetaData * this_ptr, app::CageStructureTool_Vertex * vertex))
    IL2CPP_REGISTER_METHOD(0x013D4090, void, ctor, (app::VerletVertexMetaData * this_ptr))
}
