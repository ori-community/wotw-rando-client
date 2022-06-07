#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonTrailSystem {
    IL2CPP_REGISTER_METHOD(0x025634F0, app::Mesh *, GetUniversalRenderMesh, (int32_t particle_count))
    IL2CPP_REGISTER_METHOD(0x02563EB0, app::ComputeBuffer *, GetFreeComputeBuffer, ())
    IL2CPP_REGISTER_METHOD(0x02564340, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x025644C0, void, InitInstance, ())
    IL2CPP_REGISTER_METHOD(0x02564550, app::MoonTrailSystem *, GetInstance, ())
    IL2CPP_REGISTER_METHOD(0x025647E0, void, AllocateComputeBuffers, ())
    IL2CPP_REGISTER_METHOD(0x02564C20, void, FreeComputeBuffers, ())
    IL2CPP_REGISTER_METHOD(0x02564E00, void, LateUpdate, (app::MoonTrailSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02565660, void, ctor, (app::MoonTrailSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025656F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x025657B0, int32_t, _GetUniversalRenderMesh_g__PositionOfFirstBit_8_0, (int32_t n))
}
