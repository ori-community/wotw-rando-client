#pragma once
#include <Modloader/app/structs/TriangleFormat.h>
#include <Modloader/app/structs/TriangleFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleFormat {
        inline app::TriangleFormat__Class** type_info() {
            static app::TriangleFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriangleFormat__Class**)(modloader::win::memory::resolve_rva(0x047081F0));
            }
            return cache;
        }
        inline app::TriangleFormat__Class* get_class() {
            return il2cpp::get_class<app::TriangleFormat__Class>(type_info(), "TriangleNet.IO", "TriangleFormat");
        }
        inline app::TriangleFormat* create() {
            return il2cpp::create_object<app::TriangleFormat>(get_class());
        }
    } // namespace TriangleFormat
} // namespace app::classes::types
