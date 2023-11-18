#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerletVertex.h>

namespace app::classes::VerletVertex {
    IL2CPP_REGISTER_METHOD(0x013D3D90, void, Set, (app::VerletVertex * this_ptr, app::VerletVertex* verlet_vertex, bool set_skinning))
    IL2CPP_REGISTER_METHOD(0x013D3DD0, void, LerpTo, (app::VerletVertex * this_ptr, app::VerletVertex* verlet_vertex, float k))
    IL2CPP_REGISTER_METHOD(0x013D3EF0, void, ctor, (app::VerletVertex * this_ptr))
} // namespace app::classes::VerletVertex
