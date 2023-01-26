#pragma once
#include <Modloader/app/structs/TrianglePool.h>
#include <Modloader/app/structs/TrianglePool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrianglePool {
        inline app::TrianglePool__Class** type_info() {
            static app::TrianglePool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrianglePool__Class**)(modloader::win::memory::resolve_rva(0x04758108));
            }
            return cache;
        }
        inline app::TrianglePool__Class* get_class() {
            return il2cpp::get_class<app::TrianglePool__Class>(type_info(), "TriangleNet", "TrianglePool");
        }
        inline app::TrianglePool* create() {
            return il2cpp::create_object<app::TrianglePool>(get_class());
        }
    } // namespace TrianglePool
} // namespace app::classes::types
