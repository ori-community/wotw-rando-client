#pragma once
#include <Modloader/app/structs/TrianglePool_Enumerator.h>
#include <Modloader/app/structs/TrianglePool_Enumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrianglePool_Enumerator {
        inline app::TrianglePool_Enumerator__Class** type_info() {
            static app::TrianglePool_Enumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrianglePool_Enumerator__Class**)(modloader::win::memory::resolve_rva(0x04735930));
            }
            return cache;
        }
        inline app::TrianglePool_Enumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::TrianglePool_Enumerator__Class>(type_info(), "TriangleNet", "TrianglePool", "Enumerator");
        }
        inline app::TrianglePool_Enumerator* create() {
            return il2cpp::create_object<app::TrianglePool_Enumerator>(get_class());
        }
    } // namespace TrianglePool_Enumerator
} // namespace app::classes::types
