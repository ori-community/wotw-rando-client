#pragma once
#include <Modloader/app/structs/NodeSoundPlayerPair__Array.h>
#include <Modloader/app/structs/NodeSoundPlayerPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NodeSoundPlayerPair__Array {
        inline app::NodeSoundPlayerPair__Array__Class** type_info() {
            static app::NodeSoundPlayerPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NodeSoundPlayerPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NodeSoundPlayerPair__Array__Class* get_class() {
            return il2cpp::get_class<app::NodeSoundPlayerPair__Array__Class>(type_info(), "", "NodeSoundPlayerPair[]");
        }
        inline app::NodeSoundPlayerPair__Array* create() {
            return il2cpp::create_object<app::NodeSoundPlayerPair__Array>(get_class());
        }
    } // namespace NodeSoundPlayerPair__Array
} // namespace app::classes::types
