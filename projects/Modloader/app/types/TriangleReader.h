#pragma once
#include <Modloader/app/structs/TriangleReader.h>
#include <Modloader/app/structs/TriangleReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleReader {
        inline app::TriangleReader__Class** type_info() {
            static app::TriangleReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriangleReader__Class**)(modloader::win::memory::resolve_rva(0x0477FF30));
            }
            return cache;
        }
        inline app::TriangleReader__Class* get_class() {
            return il2cpp::get_class<app::TriangleReader__Class>(type_info(), "TriangleNet.IO", "TriangleReader");
        }
        inline app::TriangleReader* create() {
            return il2cpp::create_object<app::TriangleReader>(get_class());
        }
    } // namespace TriangleReader
} // namespace app::classes::types
