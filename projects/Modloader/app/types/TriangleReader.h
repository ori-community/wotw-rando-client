#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriangleReader {
        inline app::TriangleReader__Class** type_info = (app::TriangleReader__Class**)(modloader::win::memory::resolve_rva(0x0477FF30));
        inline app::TriangleReader__Class* get_class() {
            return il2cpp::get_class<app::TriangleReader__Class>(type_info, "TriangleNet.IO", "TriangleReader");
        }
        inline app::TriangleReader* create() {
            return il2cpp::create_object<app::TriangleReader>(get_class());
        }
    } // namespace TriangleReader
} // namespace app::classes::types
