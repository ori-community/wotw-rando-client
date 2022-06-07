#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::Quads {
    IL2CPP_REGISTER_METHOD(0x02D5FE80, bool, HasMeshes, ())
    IL2CPP_REGISTER_METHOD(0x02D5FFE0, void, Cleanup, ())
    IL2CPP_REGISTER_METHOD(0x02D60270, app::Mesh__Array *, GetMeshes, (int32_t total_width, int32_t total_height))
    IL2CPP_REGISTER_METHOD(0x02D60690, app::Mesh *, GetMesh, (int32_t tri_count, int32_t tri_offset, int32_t total_width, int32_t total_height))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Quads * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
