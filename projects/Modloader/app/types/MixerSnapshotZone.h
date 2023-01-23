#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MixerSnapshotZone__Class.h>
#include <Modloader/app/structs/MixerSnapshotZone.h>
#include <Modloader/app/structs/MixerSnapshotZone__Array.h>

namespace app::classes::types {
    namespace MixerSnapshotZone {
        namespace {
            inline app::MixerSnapshotZone__Class* type_info_ref = nullptr;
        }
        inline app::MixerSnapshotZone__Class** type_info = &type_info_ref;
        inline app::MixerSnapshotZone__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshotZone__Class>(type_info, "", "MixerSnapshotZone");
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
