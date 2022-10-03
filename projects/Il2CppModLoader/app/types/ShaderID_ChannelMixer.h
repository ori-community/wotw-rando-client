#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChannelMixer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ChannelMixer__Class** type_info;
        inline app::ShaderID_ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChannelMixer__Class>(type_info, "Colorful", "ShaderID_ChannelMixer");
        }
        inline app::ShaderID_ChannelMixer* create() {
            return il2cpp::create_object<app::ShaderID_ChannelMixer>(get_class());
        }
    } // namespace ShaderID_ChannelMixer
} // namespace app::classes::types
