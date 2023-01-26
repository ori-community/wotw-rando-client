#pragma once
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker.h>
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordingUnmanagedParticlesTracker {
        inline app::RecordingUnmanagedParticlesTracker__Class** type_info() {
            static app::RecordingUnmanagedParticlesTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordingUnmanagedParticlesTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordingUnmanagedParticlesTracker__Class* get_class() {
            return il2cpp::get_class<app::RecordingUnmanagedParticlesTracker__Class>(type_info(), "", "RecordingUnmanagedParticlesTracker");
        }
        inline app::RecordingUnmanagedParticlesTracker* create() {
            return il2cpp::create_object<app::RecordingUnmanagedParticlesTracker>(get_class());
        }
    } // namespace RecordingUnmanagedParticlesTracker
} // namespace app::classes::types
