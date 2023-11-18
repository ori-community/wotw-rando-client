#pragma once
#include <Modloader/app/structs/TriangleWriter.h>
#include <Modloader/app/structs/TriangleWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleWriter {
        inline app::TriangleWriter__Class** type_info() {
            static app::TriangleWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriangleWriter__Class**)(modloader::win::memory::resolve_rva(0x04705600));
            }
            return cache;
        }
        inline app::TriangleWriter__Class* get_class() {
            return il2cpp::get_class<app::TriangleWriter__Class>(type_info(), "TriangleNet.IO", "TriangleWriter");
        }
        inline app::TriangleWriter* create() {
            return il2cpp::create_object<app::TriangleWriter>(get_class());
        }
    } // namespace TriangleWriter
} // namespace app::classes::types
