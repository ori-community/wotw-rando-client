#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MixerSnapshotZone__Array__Class.h>
#include <Modloader/app/structs/MixerSnapshotZone__Array.h>

namespace app::classes::types {
    namespace MixerSnapshotZone__Array {
        namespace {
            inline app::MixerSnapshotZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::MixerSnapshotZone__Array__Class** type_info = &type_info_ref;
        inline app::MixerSnapshotZone__Array__Class* get_class() {
            return il2cpp::get_class<app::MixerSnapshotZone__Array__Class>(type_info, "", "MixerSnapshotZone[]");
        }
        inline app::MixerSnapshotZone__Array* create() {
            return il2cpp::create_object<app::MixerSnapshotZone__Array>(get_class());
        }
    } // namespace MixerSnapshotZone__Array
} // namespace app::classes::types
