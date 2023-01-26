#pragma once
#include <Modloader/app/structs/SweepLine_SplayNode__Array.h>
#include <Modloader/app/structs/SweepLine_SplayNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SweepLine_SplayNode__Array {
        inline app::SweepLine_SplayNode__Array__Class** type_info() {
            static app::SweepLine_SplayNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SweepLine_SplayNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SweepLine_SplayNode__Array__Class* get_class() {
            return il2cpp::get_class<app::SweepLine_SplayNode__Array__Class>(type_info(), "TriangleNet.Meshing.Algorithm", "SweepLine+SplayNode[]");
        }
        inline app::SweepLine_SplayNode__Array* create() {
            return il2cpp::create_object<app::SweepLine_SplayNode__Array>(get_class());
        }
    } // namespace SweepLine_SplayNode__Array
} // namespace app::classes::types
