#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FpsGraph {
        inline app::FpsGraph__Class** type_info = (app::FpsGraph__Class**)(modloader::win::memory::resolve_rva(0x04766B70));
        inline app::FpsGraph__Class* get_class() {
            return il2cpp::get_class<app::FpsGraph__Class>(type_info, "", "FpsGraph");
        }
        inline app::FpsGraph* create() {
            return il2cpp::create_object<app::FpsGraph>(get_class());
        }
    } // namespace FpsGraph
} // namespace app::classes::types
