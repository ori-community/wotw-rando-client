#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChannelInfo {
        inline app::ChannelInfo__Class** type_info = (app::ChannelInfo__Class**)(modloader::win::memory::resolve_rva(0x04764090));
        inline app::ChannelInfo__Class* get_class() {
            return il2cpp::get_class<app::ChannelInfo__Class>(type_info, "System.Runtime.Remoting", "ChannelInfo");
        }
        inline app::ChannelInfo* create() {
            return il2cpp::create_object<app::ChannelInfo>(get_class());
        }
    } // namespace ChannelInfo
} // namespace app::classes::types
