#pragma once
#include <Modloader/app/structs/TriangleLocator.h>
#include <Modloader/app/structs/TriangleLocator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleLocator {
        inline app::TriangleLocator__Class** type_info() {
            static app::TriangleLocator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriangleLocator__Class**)(modloader::win::memory::resolve_rva(0x0475BAC0));
            }
            return cache;
        }
        inline app::TriangleLocator__Class* get_class() {
            return il2cpp::get_class<app::TriangleLocator__Class>(type_info(), "TriangleNet", "TriangleLocator");
        }
        inline app::TriangleLocator* create() {
            return il2cpp::create_object<app::TriangleLocator>(get_class());
        }
    } // namespace TriangleLocator
} // namespace app::classes::types
