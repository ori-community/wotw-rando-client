#pragma once
#include <Modloader/app/structs/ChannelMixer.h>
#include <Modloader/app/structs/ChannelMixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChannelMixer {
        inline app::ChannelMixer__Class** type_info() {
            static app::ChannelMixer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChannelMixer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::ChannelMixer__Class>(type_info(), "Colorful", "ChannelMixer");
        }
        inline app::ChannelMixer* create() {
            return il2cpp::create_object<app::ChannelMixer>(get_class());
        }
    } // namespace ChannelMixer
} // namespace app::classes::types
