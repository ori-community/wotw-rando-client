#pragma once
#include <Modloader/app/structs/ChannelBinding.h>
#include <Modloader/app/structs/ChannelBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChannelBinding {
        inline app::ChannelBinding__Class** type_info() {
            static app::ChannelBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChannelBinding__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChannelBinding__Class* get_class() {
            return il2cpp::get_class<app::ChannelBinding__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "ChannelBinding");
        }
        inline app::ChannelBinding* create() {
            return il2cpp::create_object<app::ChannelBinding>(get_class());
        }
    } // namespace ChannelBinding
} // namespace app::classes::types
