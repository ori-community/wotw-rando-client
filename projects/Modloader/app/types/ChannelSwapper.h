#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChannelSwapper {
        inline app::ChannelSwapper__Class** type_info = (app::ChannelSwapper__Class**)(modloader::win::memory::resolve_rva(0x0475D340));
        inline app::ChannelSwapper__Class* get_class() {
            return il2cpp::get_class<app::ChannelSwapper__Class>(type_info, "Colorful", "ChannelSwapper");
        }
        inline app::ChannelSwapper* create() {
            return il2cpp::create_object<app::ChannelSwapper>(get_class());
        }
    } // namespace ChannelSwapper
} // namespace app::classes::types
