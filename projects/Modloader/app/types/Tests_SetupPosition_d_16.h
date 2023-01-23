#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tests_SetupPosition_d_16__Class.h>
#include <Modloader/app/structs/Tests_SetupPosition_d_16.h>

namespace app::classes::types {
    namespace Tests_SetupPosition_d_16 {
        inline app::Tests_SetupPosition_d_16__Class** type_info = (app::Tests_SetupPosition_d_16__Class**)(modloader::win::memory::resolve_rva(0x04730F50));
        inline app::Tests_SetupPosition_d_16__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_SetupPosition_d_16__Class>(type_info, "HierarchyPerfTest", "Tests", "<SetupPosition>d__16");
        }
        inline app::Tests_SetupPosition_d_16* create() {
            return il2cpp::create_object<app::Tests_SetupPosition_d_16>(get_class());
        }
    } // namespace Tests_SetupPosition_d_16
} // namespace app::classes::types
