#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::RenderTargetDescriptor {
    IL2CPP_REGISTER_METHOD(0x001200A0, void, ctor, (app::RenderTargetDescriptor__Boxed * this_ptr, app::RenderTargetType__Enum _type, app::String* _name, app::RenderTextureDescriptor _desc, app::FilterMode__Enum _filter_mode, app::RenderTexture* _external, bool drs))
    IL2CPP_REGISTER_METHOD(0x001200F0, void, Assign, (app::RenderTargetDescriptor__Boxed * this_ptr, app::RenderTargetType__Enum _type, app::Int2 _size, app::RenderTextureFormat__Enum _format, int32_t _depth_buffer_bits, app::FilterMode__Enum _filter_mode, app::RenderTexture* _external, int32_t msaa_samples, bool bind_m_s, bool drs))
    IL2CPP_REGISTER_METHOD(0x00120160, int32_t, get_width, (app::RenderTargetDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120170, int32_t, get_height, (app::RenderTargetDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120180, app::Int2, get_size, (app::RenderTargetDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001201A0, void, set_size, (app::RenderTargetDescriptor__Boxed * this_ptr, app::Int2 value))
    IL2CPP_REGISTER_METHOD(0x001201B0, int64_t, get_pixelCount, (app::RenderTargetDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001201C0, int64_t, get_vramSize, (app::RenderTargetDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120220, bool, Equals_1, (app::RenderTargetDescriptor__Boxed * this_ptr, app::RenderTargetDescriptor other, bool drs_acceptable))
    IL2CPP_REGISTER_METHOD(0x00EB2EF0, bool, op_Equality, (app::RenderTargetDescriptor left, app::RenderTargetDescriptor right))
    IL2CPP_REGISTER_METHOD(0x00EB2F30, bool, op_Inequality, (app::RenderTargetDescriptor left, app::RenderTargetDescriptor right))
    IL2CPP_REGISTER_METHOD(0x00120270, bool, Equals_2, (app::RenderTargetDescriptor__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00120370, int32_t, GetHashCode, (app::RenderTargetDescriptor__Boxed * this_ptr))
    inline bool operator==(app::RenderTargetDescriptor left, app::RenderTargetDescriptor right) {
        return op_Equality(left, right);
    }
    inline bool operator!=(app::RenderTargetDescriptor left, app::RenderTargetDescriptor right) {
        return op_Inequality(left, right);
    }
} // namespace app::classes::Moon::Rendering::RenderTargetDescriptor
