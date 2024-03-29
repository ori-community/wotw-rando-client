#pragma once
#include <Modloader/app/structs/ShaderID_ChannelClamper.h>
#include <Modloader/app/structs/ShaderID_ChannelClamper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChannelClamper {
        inline app::ShaderID_ChannelClamper__Class** type_info() {
            static app::ShaderID_ChannelClamper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ChannelClamper__Class**)(modloader::win::memory::resolve_rva(0x0472C4E8));
            }
            return cache;
        }
        inline app::ShaderID_ChannelClamper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChannelClamper__Class>(type_info(), "Colorful", "ShaderID_ChannelClamper");
        }
        inline app::ShaderID_ChannelClamper* create() {
            return il2cpp::create_object<app::ShaderID_ChannelClamper>(get_class());
        }
    } // namespace ShaderID_ChannelClamper
} // namespace app::classes::types
