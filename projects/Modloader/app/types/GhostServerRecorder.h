#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostServerRecorder__Class.h>
#include <Modloader/app/structs/GhostServerRecorder.h>

namespace app::classes::types {
    namespace GhostServerRecorder {
        namespace {
            inline app::GhostServerRecorder__Class* type_info_ref = nullptr;
        }
        inline app::GhostServerRecorder__Class** type_info = &type_info_ref;
        inline app::GhostServerRecorder__Class* get_class() {
            return il2cpp::get_class<app::GhostServerRecorder__Class>(type_info, "", "GhostServerRecorder");
        }
        inline app::GhostServerRecorder* create() {
            return il2cpp::create_object<app::GhostServerRecorder>(get_class());
        }
    } // namespace GhostServerRecorder
} // namespace app::classes::types
