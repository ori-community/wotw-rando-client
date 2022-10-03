#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NodeSoundPlayerPair {
        namespace {
            app::NodeSoundPlayerPair__Class* type_info_ref = nullptr;
        }
        app::NodeSoundPlayerPair__Class** type_info = &type_info_ref;
        inline app::NodeSoundPlayerPair__Class* get_class() {
            return il2cpp::get_class<app::NodeSoundPlayerPair__Class>(type_info, "", "NodeSoundPlayerPair");
        }
        inline app::NodeSoundPlayerPair* create() {
            return il2cpp::create_object<app::NodeSoundPlayerPair>(get_class());
        }
        inline app::NodeSoundPlayerPair__Array* create_array(int size) {
            return il2cpp::array_new<app::NodeSoundPlayerPair__Array>(get_class(), size);
        }
    } // namespace NodeSoundPlayerPair
} // namespace app::classes::types
