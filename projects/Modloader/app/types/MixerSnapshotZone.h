#pragma once
#include <Modloader/app/structs/MixerSnapshotZone.h>
#include <Modloader/app/structs/MixerSnapshotZone__Array.h>
#include <Modloader/app/structs/MixerSnapshotZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixerSnapshotZone {
        inline app::MixerSnapshotZone__Class** type_info() {
            static app::MixerSnapshotZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MixerSnapshotZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MixerSnapshotZone__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshotZone__Class>(type_info(), "", "MixerSnapshotZone");
        }
        inline app::MixerSnapshotZone* create() {
            return il2cpp::create_object<app::MixerSnapshotZone>(get_class());
        }
        inline app::MixerSnapshotZone__Array* create_array(int size) {
            return il2cpp::array_new<app::MixerSnapshotZone__Array>(get_class(), size);
        }
        inline app::MixerSnapshotZone__Array* create_array(const std::vector<app::MixerSnapshotZone*>& items) {
            return il2cpp::array_new<app::MixerSnapshotZone__Array>(get_class(), items);
        }
    } // namespace MixerSnapshotZone
} // namespace app::classes::types
