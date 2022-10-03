#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixerSnapshot_MixerSnapshotState__Enum {
        namespace {
            app::MixerSnapshot_MixerSnapshotState__Enum__Class* type_info_ref = nullptr;
        }
        app::MixerSnapshot_MixerSnapshotState__Enum__Class** type_info = &type_info_ref;
        inline app::MixerSnapshot_MixerSnapshotState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MixerSnapshot_MixerSnapshotState__Enum__Class>(type_info, "", "MixerSnapshot", "MixerSnapshotState");
        }
        inline app::MixerSnapshot_MixerSnapshotState__Enum* create() {
            return il2cpp::create_object<app::MixerSnapshot_MixerSnapshotState__Enum>(get_class());
        }
    } // namespace MixerSnapshot_MixerSnapshotState__Enum
} // namespace app::classes::types
