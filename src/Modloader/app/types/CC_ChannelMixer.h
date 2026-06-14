#pragma once
#include <Modloader/app/structs/CC_ChannelMixer.h>
#include <Modloader/app/structs/CC_ChannelMixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_ChannelMixer {
        inline app::CC_ChannelMixer__Class** type_info() {
            static app::CC_ChannelMixer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_ChannelMixer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::CC_ChannelMixer__Class>(type_info(), "", "CC_ChannelMixer");
        }
        inline app::CC_ChannelMixer* create() {
            return il2cpp::create_object<app::CC_ChannelMixer>(get_class());
        }
    } // namespace CC_ChannelMixer
} // namespace app::classes::types
