#pragma once
#include <Modloader/app/structs/MixerSnapshot_MixerSnapshotState__Enum.h>
#include <Modloader/app/structs/MixerSnapshot_MixerSnapshotState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixerSnapshot_MixerSnapshotState__Enum {
        inline app::MixerSnapshot_MixerSnapshotState__Enum__Class** type_info() {
            static app::MixerSnapshot_MixerSnapshotState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MixerSnapshot_MixerSnapshotState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MixerSnapshot_MixerSnapshotState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MixerSnapshot_MixerSnapshotState__Enum__Class>(type_info(), "", "MixerSnapshot", "MixerSnapshotState");
        }
        inline app::MixerSnapshot_MixerSnapshotState__Enum* create() {
            return il2cpp::create_object<app::MixerSnapshot_MixerSnapshotState__Enum>(get_class());
        }
    } // namespace MixerSnapshot_MixerSnapshotState__Enum
} // namespace app::classes::types
