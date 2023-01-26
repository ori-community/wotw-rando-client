#pragma once
#include <Modloader/app/structs/ShaderID_CC_ChannelMixer.h>
#include <Modloader/app/structs/ShaderID_CC_ChannelMixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_ChannelMixer {
        inline app::ShaderID_CC_ChannelMixer__Class** type_info() {
            static app::ShaderID_CC_ChannelMixer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_ChannelMixer__Class**)(modloader::win::memory::resolve_rva(0x04730B08));
            }
            return cache;
        }
        inline app::ShaderID_CC_ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_ChannelMixer__Class>(type_info(), "", "ShaderID_CC_ChannelMixer");
        }
        inline app::ShaderID_CC_ChannelMixer* create() {
            return il2cpp::create_object<app::ShaderID_CC_ChannelMixer>(get_class());
        }
    } // namespace ShaderID_CC_ChannelMixer
} // namespace app::classes::types
