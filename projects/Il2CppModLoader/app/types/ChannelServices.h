#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChannelServices {
        inline app::ChannelServices__Class** type_info = (app::ChannelServices__Class**)(modloader::win::memory::resolve_rva(0x04733900));
        inline app::ChannelServices__Class* get_class() {
            return il2cpp::get_class<app::ChannelServices__Class>(type_info, "System.Runtime.Remoting.Channels", "ChannelServices");
        }
        inline app::ChannelServices* create() {
            return il2cpp::create_object<app::ChannelServices>(get_class());
        }
    } // namespace ChannelServices
} // namespace app::classes::types
