#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChannelBinding__Class.h>
#include <Modloader/app/structs/ChannelBinding.h>

namespace app::classes::types {
    namespace ChannelBinding {
        namespace {
            inline app::ChannelBinding__Class* type_info_ref = nullptr;
        }
        inline app::ChannelBinding__Class** type_info = &type_info_ref;
        inline app::ChannelBinding__Class* get_class() {
            return il2cpp::get_class<app::ChannelBinding__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "ChannelBinding");
        }
        inline app::ChannelBinding* create() {
            return il2cpp::create_object<app::ChannelBinding>(get_class());
        }
    } // namespace ChannelBinding
} // namespace app::classes::types
