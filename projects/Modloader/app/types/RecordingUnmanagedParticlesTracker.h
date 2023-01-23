#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker__Class.h>
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker.h>

namespace app::classes::types {
    namespace RecordingUnmanagedParticlesTracker {
        namespace {
            inline app::RecordingUnmanagedParticlesTracker__Class* type_info_ref = nullptr;
        }
        inline app::RecordingUnmanagedParticlesTracker__Class** type_info = &type_info_ref;
        inline app::RecordingUnmanagedParticlesTracker__Class* get_class() {
            return il2cpp::get_class<app::RecordingUnmanagedParticlesTracker__Class>(type_info, "", "RecordingUnmanagedParticlesTracker");
        }
        inline app::RecordingUnmanagedParticlesTracker* create() {
            return il2cpp::create_object<app::RecordingUnmanagedParticlesTracker>(get_class());
        }
    } // namespace RecordingUnmanagedParticlesTracker
} // namespace app::classes::types
