#pragma once
#include <Modloader/app/structs/ShaderID_ChannelMixer.h>
#include <Modloader/app/structs/ShaderID_ChannelMixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChannelMixer {
        inline app::ShaderID_ChannelMixer__Class** type_info() {
            static app::ShaderID_ChannelMixer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ChannelMixer__Class**)(modloader::win::memory::resolve_rva(0x04792D70));
            }
            return cache;
        }
        inline app::ShaderID_ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChannelMixer__Class>(type_info(), "Colorful", "ShaderID_ChannelMixer");
        }
        inline app::ShaderID_ChannelMixer* create() {
            return il2cpp::create_object<app::ShaderID_ChannelMixer>(get_class());
        }
    } // namespace ShaderID_ChannelMixer
} // namespace app::classes::types
