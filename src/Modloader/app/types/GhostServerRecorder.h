#pragma once
#include <Modloader/app/structs/GhostServerRecorder.h>
#include <Modloader/app/structs/GhostServerRecorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostServerRecorder {
        inline app::GhostServerRecorder__Class** type_info() {
            static app::GhostServerRecorder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostServerRecorder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostServerRecorder__Class* get_class() {
            return il2cpp::get_class<app::GhostServerRecorder__Class>(type_info(), "", "GhostServerRecorder");
        }
        inline app::GhostServerRecorder* create() {
            return il2cpp::create_object<app::GhostServerRecorder>(get_class());
        }
    } // namespace GhostServerRecorder
} // namespace app::classes::types
