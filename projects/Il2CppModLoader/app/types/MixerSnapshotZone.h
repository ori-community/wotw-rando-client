#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixerSnapshotZone {
        namespace {
            app::MixerSnapshotZone__Class* type_info_ref = nullptr;
        }
        app::MixerSnapshotZone__Class** type_info = &type_info_ref;
        inline app::MixerSnapshotZone__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshotZone__Class>(type_info, "", "MixerSnapshotZone");
        }
        inline app::MixerSnapshotZone* create() {
            return il2cpp::create_object<app::MixerSnapshotZone>(get_class());
        }
        inline app::MixerSnapshotZone__Array* create_array(int size) {
            return il2cpp::array_new<app::MixerSnapshotZone__Array>(get_class(), size);
        }
    } // namespace MixerSnapshotZone
} // namespace app::classes::types
