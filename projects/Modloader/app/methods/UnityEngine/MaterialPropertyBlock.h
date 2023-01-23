#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/ComputeBuffer.h>

namespace app::classes::UnityEngine::MaterialPropertyBlock {
    IL2CPP_REGISTER_METHOD(0x02533D50, void, ctor, (app::MaterialPropertyBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02533DB0, void, SetFloatImpl, (app::MaterialPropertyBlock * this_ptr, int32_t name, float value))
    IL2CPP_REGISTER_METHOD(0x02533E20, void, SetVectorImpl, (app::MaterialPropertyBlock * this_ptr, int32_t name, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x02533E90, void, SetTextureImpl, (app::MaterialPropertyBlock * this_ptr, int32_t name, app::Texture* value))
    IL2CPP_REGISTER_METHOD(0x02533F00, void, SetBufferImpl, (app::MaterialPropertyBlock * this_ptr, int32_t name, app::ComputeBuffer* value))
    IL2CPP_REGISTER_METHOD(0x02533F70, void*, CreateImpl, ())
    IL2CPP_REGISTER_METHOD(0x02533FC0, void, DestroyImpl, (void* mpb))
    IL2CPP_REGISTER_METHOD(0x02534010, void, Finalize, (app::MaterialPropertyBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02534160, void, Dispose, (app::MaterialPropertyBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02533DB0, void, SetFloat, (app::MaterialPropertyBlock * this_ptr, int32_t name_i_d, float value))
    IL2CPP_REGISTER_METHOD(0x02534260, void, SetVector, (app::MaterialPropertyBlock * this_ptr, int32_t name_i_d, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x02533F00, void, SetBuffer, (app::MaterialPropertyBlock * this_ptr, int32_t name_i_d, app::ComputeBuffer* value))
    IL2CPP_REGISTER_METHOD(0x02533E90, void, SetTexture, (app::MaterialPropertyBlock * this_ptr, int32_t name_i_d, app::Texture* value))
    IL2CPP_REGISTER_METHOD(0x025342D0, void, SetVectorImpl_Injected, (app::MaterialPropertyBlock * this_ptr, int32_t name, app::Vector4* value))
} // namespace app::classes::UnityEngine::MaterialPropertyBlock
