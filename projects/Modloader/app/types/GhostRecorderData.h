#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostRecorderData__Class.h>
#include <Modloader/app/structs/GhostRecorderData.h>

namespace app::classes::types {
    namespace GhostRecorderData {
        inline app::GhostRecorderData__Class** type_info = (app::GhostRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047147E8));
        inline app::GhostRecorderData__Class* get_class() {
            return il2cpp::get_class<app::GhostRecorderData__Class>(type_info, "", "GhostRecorderData");
        }
        inline app::GhostRecorderData* create() {
            return il2cpp::create_object<app::GhostRecorderData>(get_class());
        }
    } // namespace GhostRecorderData
} // namespace app::classes::types
