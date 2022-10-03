#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_ChannelMixer {
        namespace {
            app::CC_ChannelMixer__Class* type_info_ref = nullptr;
        }
        app::CC_ChannelMixer__Class** type_info = &type_info_ref;
        inline app::CC_ChannelMixer__Class* get_class() {
            return il2cpp::get_class<app::CC_ChannelMixer__Class>(type_info, "", "CC_ChannelMixer");
        }
        inline app::CC_ChannelMixer* create() {
            return il2cpp::create_object<app::CC_ChannelMixer>(get_class());
        }
    } // namespace CC_ChannelMixer
} // namespace app::classes::types
