#pragma once
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GhostRecorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostRecorder {
        inline app::GhostRecorder__Class** type_info() {
            static app::GhostRecorder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostRecorder__Class**)(modloader::win::memory::resolve_rva(0x04781760));
            }
            return cache;
        }
        inline app::GhostRecorder__Class* get_class() {
            return il2cpp::get_class<app::GhostRecorder__Class>(type_info(), "", "GhostRecorder");
        }
        inline app::GhostRecorder* create() {
            return il2cpp::create_object<app::GhostRecorder>(get_class());
        }
    } // namespace GhostRecorder
} // namespace app::classes::types
