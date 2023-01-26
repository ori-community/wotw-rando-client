#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/FormatUsage__Enum.h>
#include <Modloader/app/structs/GraphicsFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/TextureDimension__Enum.h>
#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#include <Modloader/app/structs/UnityException.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Texture {
    IL2CPP_REGISTER_METHOD(0x02C65D20, void, ctor, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65DB0, int32_t, GetDataWidth, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65E00, int32_t, GetDataHeight, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65DB0, int32_t, get_width, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65E50, void, set_width, (app::Texture * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02C65E00, int32_t, get_height, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65EA0, void, set_height, (app::Texture * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02C65EF0, void, set_dimension, (app::Texture * this_ptr, app::TextureDimension__Enum value))
    IL2CPP_REGISTER_METHOD(0x02C65F40, bool, get_isReadable, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65F90, app::TextureWrapMode__Enum, get_wrapMode, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65FE0, void, set_wrapMode, (app::Texture * this_ptr, app::TextureWrapMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02C66040, app::FilterMode__Enum, get_filterMode, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C66090, void, set_filterMode, (app::Texture * this_ptr, app::FilterMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02C660F0, int32_t, get_anisoLevel, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C66140, void, set_anisoLevel, (app::Texture * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02C661A0, void, set_mipMapBias, (app::Texture * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02C66200, app::Vector2, get_texelSize, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C66270, void*, GetNativeTexturePtr, (app::Texture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C662C0, uint64_t, get_totalTextureMemory, ())
    IL2CPP_REGISTER_METHOD(0x02C66310, uint64_t, get_desiredTextureMemory, ())
    IL2CPP_REGISTER_METHOD(0x02C66360, uint64_t, get_targetTextureMemory, ())
    IL2CPP_REGISTER_METHOD(0x010A8370, uint64_t, get_currentTextureMemory, ())
    IL2CPP_REGISTER_METHOD(0x02C663B0, uint64_t, get_nonStreamingTextureMemory, ())
    IL2CPP_REGISTER_METHOD(0x02C66400, bool, ValidateFormat_1, (app::Texture * this_ptr, app::RenderTextureFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02C66560, bool, ValidateFormat_2, (app::Texture * this_ptr, app::TextureFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02C66730, bool, ValidateFormat_3, (app::Texture * this_ptr, app::GraphicsFormat__Enum format, app::FormatUsage__Enum usage))
    IL2CPP_REGISTER_METHOD(0x02C66920, app::UnityException*, CreateNonReadableException, (app::Texture * this_ptr, app::Texture* t))
    IL2CPP_REGISTER_METHOD(0x02C66AF0, void, get_texelSize_Injected, (app::Texture * this_ptr, app::Vector2* ret))
} // namespace app::classes::UnityEngine::Texture
