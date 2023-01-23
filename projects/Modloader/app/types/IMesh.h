#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMesh__Class.h>

namespace app::classes::types {
    namespace IMesh {
        inline app::IMesh__Class** type_info = (app::IMesh__Class**)(modloader::win::memory::resolve_rva(0x04775558));
        inline app::IMesh__Class* get_class() {
            return il2cpp::get_class<app::IMesh__Class>(type_info, "TriangleNet.Meshing", "IMesh");
        }
    } // namespace IMesh
} // namespace app::classes::types
