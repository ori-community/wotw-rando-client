#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChannelMixer {
        namespace {
            inline app::ChannelMixer__Class* type_info_ref = nullptr;
        }
        inline app::ChannelMixer__Class** type_info = &type_info_ref;
        inline app::ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::ChannelMixer__Class>(type_info, "Colorful", "ChannelMixer");
        }
        inline app::ChannelMixer* create() {
            return il2cpp::create_object<app::ChannelMixer>(get_class());
        }
    } // namespace ChannelMixer
} // namespace app::classes::types
