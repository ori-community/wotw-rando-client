#pragma once
#include <Modloader/app/structs/NodeSoundPlayerPair.h>
#include <Modloader/app/structs/NodeSoundPlayerPair__Array.h>
#include <Modloader/app/structs/NodeSoundPlayerPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NodeSoundPlayerPair {
        inline app::NodeSoundPlayerPair__Class** type_info() {
            static app::NodeSoundPlayerPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NodeSoundPlayerPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NodeSoundPlayerPair__Class* get_class() {
            return il2cpp::get_class<app::NodeSoundPlayerPair__Class>(type_info(), "", "NodeSoundPlayerPair");
        }
        inline app::NodeSoundPlayerPair* create() {
            return il2cpp::create_object<app::NodeSoundPlayerPair>(get_class());
        }
        inline app::NodeSoundPlayerPair__Array* create_array(int size) {
            return il2cpp::array_new<app::NodeSoundPlayerPair__Array>(get_class(), size);
        }
        inline app::NodeSoundPlayerPair__Array* create_array(const std::vector<app::NodeSoundPlayerPair*>& items) {
            return il2cpp::array_new<app::NodeSoundPlayerPair__Array>(get_class(), items);
        }
    } // namespace NodeSoundPlayerPair
} // namespace app::classes::types
