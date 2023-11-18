#pragma once
#include <Modloader/app/structs/ChannelClamper.h>
#include <Modloader/app/structs/ChannelClamper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChannelClamper {
        inline app::ChannelClamper__Class** type_info() {
            static app::ChannelClamper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChannelClamper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChannelClamper__Class* get_class() {
            return il2cpp::get_class<app::ChannelClamper__Class>(type_info(), "Colorful", "ChannelClamper");
        }
        inline app::ChannelClamper* create() {
            return il2cpp::create_object<app::ChannelClamper>(get_class());
        }
    } // namespace ChannelClamper
} // namespace app::classes::types
