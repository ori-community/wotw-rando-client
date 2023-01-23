#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Face_EnumerateEdges_d_18__Class.h>
#include <Modloader/app/structs/Face_EnumerateEdges_d_18.h>

namespace app::classes::types {
    namespace Face_EnumerateEdges_d_18 {
        inline app::Face_EnumerateEdges_d_18__Class** type_info = (app::Face_EnumerateEdges_d_18__Class**)(modloader::win::memory::resolve_rva(0x04797988));
        inline app::Face_EnumerateEdges_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::Face_EnumerateEdges_d_18__Class>(type_info, "TriangleNet.Topology.DCEL", "Face", "<EnumerateEdges>d__18");
        }
        inline app::Face_EnumerateEdges_d_18* create() {
            return il2cpp::create_object<app::Face_EnumerateEdges_d_18>(get_class());
        }
    } // namespace Face_EnumerateEdges_d_18
} // namespace app::classes::types
