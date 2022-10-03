#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChannelClamper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ChannelClamper__Class** type_info;
        inline app::ShaderID_ChannelClamper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChannelClamper__Class>(type_info, "Colorful", "ShaderID_ChannelClamper");
        }
        inline app::ShaderID_ChannelClamper* create() {
            return il2cpp::create_object<app::ShaderID_ChannelClamper>(get_class());
        }
    } // namespace ShaderID_ChannelClamper
} // namespace app::classes::types
