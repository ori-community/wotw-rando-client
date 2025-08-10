#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTargetDescriptor.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTargetType__Enum.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Rendering::RenderTarget {
    IL2CPP_REGISTER_METHOD(0x00EB1BB0, void, ctor_1, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1C10, void, ctor_2, app::RenderTarget* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::RenderTargetType__Enum, get_type, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_name, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1C70, int32_t, get_width, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1C80, int32_t, get_height, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1C90, app::Int2, get_size, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1CB0, int64_t, get_vramSize, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1D20, app::RenderTargetDescriptor, get_currentDesc, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB1D60, app::RenderTargetIdentifier, op_Implicit, app::RenderTarget* rt)
    IL2CPP_REGISTER_METHOD(
        0x00EB1DA0,
        void,
        Set,
        app::RenderTarget* this_ptr,
        app::RenderTargetType__Enum _type,
        app::String* _name,
        app::RenderTextureDescriptor _desc,
        app::FilterMode__Enum _filter_mode
    )
    IL2CPP_REGISTER_METHOD(0x00EB1DE0, void, SetExternal, app::RenderTarget* this_ptr, app::Camera* _camera)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::RenderTexture*, get_tex, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_tex, app::RenderTarget* this_ptr, app::RenderTexture* value)
    IL2CPP_REGISTER_METHOD(0x008468B0, int32_t, get_nameID, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008468C0, void, set_nameID, app::RenderTarget* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00EB2190, app::RenderTargetIdentifier, get_id, app::RenderTarget* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EB21C0, void, set_id, app::RenderTarget* this_ptr, app::RenderTargetIdentifier value)
    IL2CPP_REGISTER_METHOD(0x00EB21F0, bool, Acquire, app::RenderTarget* this_ptr, app::MoonRenderContext* context)
    IL2CPP_REGISTER_METHOD(0x00EB22B0, void, Release_1, app::RenderTarget* this_ptr, app::MoonRenderContext* context)
    IL2CPP_REGISTER_METHOD(0x00EB22E0, void, Release_2, app::RenderTarget* this_ptr, app::CommandBuffer* cmd)
    IL2CPP_REGISTER_METHOD(0x00EB22F0, void, AcquireInternal, app::RenderTarget* this_ptr, app::CommandBuffer* cmd)
    IL2CPP_REGISTER_METHOD(0x00EB2880, void, ReleaseInternal, app::RenderTarget* this_ptr, app::CommandBuffer* cmd)
} // namespace app::classes::Moon::Rendering::RenderTarget
