#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChannelSwapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChannelSwapper__Class** type_info;
        inline app::ChannelSwapper__Class* get_class() {
            return il2cpp::get_class<app::ChannelSwapper__Class>(type_info, "Colorful", "ChannelSwapper");
        }
        inline app::ChannelSwapper* create() {
            return il2cpp::create_object<app::ChannelSwapper>(get_class());
        }
    } // namespace ChannelSwapper
} // namespace app::classes::types
