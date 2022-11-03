#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Face__Array {
        inline app::Face__Array__Class** type_info = (app::Face__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B0C0));
        inline app::Face__Array__Class* get_class() {
            return il2cpp::get_class<app::Face__Array__Class>(type_info, "TriangleNet.Topology.DCEL", "Face[]");
        }
        inline app::Face__Array* create() {
            return il2cpp::create_object<app::Face__Array>(get_class());
        }
    } // namespace Face__Array
} // namespace app::classes::types
