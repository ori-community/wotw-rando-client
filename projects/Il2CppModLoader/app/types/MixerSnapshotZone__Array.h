#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
