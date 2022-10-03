#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordingUnmanagedParticlesTracker {
        namespace {
            app::RecordingUnmanagedParticlesTracker__Class* type_info_ref = nullptr;
        }
        app::RecordingUnmanagedParticlesTracker__Class** type_info = &type_info_ref;
        inline app::RecordingUnmanagedParticlesTracker__Class* get_class() {
            return il2cpp::get_class<app::RecordingUnmanagedParticlesTracker__Class>(type_info, "", "RecordingUnmanagedParticlesTracker");
        }
        inline app::RecordingUnmanagedParticlesTracker* create() {
            return il2cpp::create_object<app::RecordingUnmanagedParticlesTracker>(get_class());
        }
    } // namespace RecordingUnmanagedParticlesTracker
} // namespace app::classes::types
