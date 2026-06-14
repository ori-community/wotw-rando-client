#pragma once
#include <Modloader/app/structs/ShaderID_ChannelSwapper.h>
#include <Modloader/app/structs/ShaderID_ChannelSwapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChannelSwapper {
        inline app::ShaderID_ChannelSwapper__Class** type_info() {
            static app::ShaderID_ChannelSwapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ChannelSwapper__Class**)(modloader::win::memory::resolve_rva(0x0475F1B0));
            }
            return cache;
        }
        inline app::ShaderID_ChannelSwapper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChannelSwapper__Class>(type_info(), "Colorful", "ShaderID_ChannelSwapper");
        }
        inline app::ShaderID_ChannelSwapper* create() {
            return il2cpp::create_object<app::ShaderID_ChannelSwapper>(get_class());
        }
    } // namespace ShaderID_ChannelSwapper
} // namespace app::classes::types
