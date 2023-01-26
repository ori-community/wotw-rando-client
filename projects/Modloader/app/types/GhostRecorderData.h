#pragma once
#include <Modloader/app/structs/GhostRecorderData.h>
#include <Modloader/app/structs/GhostRecorderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostRecorderData {
        inline app::GhostRecorderData__Class** type_info() {
            static app::GhostRecorderData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047147E8));
            }
            return cache;
        }
        inline app::GhostRecorderData__Class* get_class() {
            return il2cpp::get_class<app::GhostRecorderData__Class>(type_info(), "", "GhostRecorderData");
        }
        inline app::GhostRecorderData* create() {
            return il2cpp::create_object<app::GhostRecorderData>(get_class());
        }
    } // namespace GhostRecorderData
} // namespace app::classes::types
