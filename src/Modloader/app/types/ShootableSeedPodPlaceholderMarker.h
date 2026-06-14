#pragma once
#include <Modloader/app/structs/ShootableSeedPodPlaceholderMarker.h>
#include <Modloader/app/structs/ShootableSeedPodPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootableSeedPodPlaceholderMarker {
        inline app::ShootableSeedPodPlaceholderMarker__Class** type_info() {
            static app::ShootableSeedPodPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootableSeedPodPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootableSeedPodPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::ShootableSeedPodPlaceholderMarker__Class>(type_info(), "", "ShootableSeedPodPlaceholderMarker");
        }
        inline app::ShootableSeedPodPlaceholderMarker* create() {
            return il2cpp::create_object<app::ShootableSeedPodPlaceholderMarker>(get_class());
        }
    } // namespace ShootableSeedPodPlaceholderMarker
} // namespace app::classes::types
