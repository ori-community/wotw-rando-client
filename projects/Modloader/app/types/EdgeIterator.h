#pragma once
#include <Modloader/app/structs/EdgeIterator.h>
#include <Modloader/app/structs/EdgeIterator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EdgeIterator {
        inline app::EdgeIterator__Class** type_info() {
            static app::EdgeIterator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EdgeIterator__Class**)(modloader::win::memory::resolve_rva(0x04727498));
            }
            return cache;
        }
        inline app::EdgeIterator__Class* get_class() {
            return il2cpp::get_class<app::EdgeIterator__Class>(type_info(), "TriangleNet.Meshing.Iterators", "EdgeIterator");
        }
        inline app::EdgeIterator* create() {
            return il2cpp::create_object<app::EdgeIterator>(get_class());
        }
    } // namespace EdgeIterator
} // namespace app::classes::types
