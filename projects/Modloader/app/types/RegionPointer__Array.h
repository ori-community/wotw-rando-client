#pragma once
#include <Modloader/app/structs/RegionPointer__Array.h>
#include <Modloader/app/structs/RegionPointer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegionPointer__Array {
        inline app::RegionPointer__Array__Class** type_info() {
            static app::RegionPointer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegionPointer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegionPointer__Array__Class* get_class() {
            return il2cpp::get_class<app::RegionPointer__Array__Class>(type_info(), "TriangleNet.Geometry", "RegionPointer[]");
        }
        inline app::RegionPointer__Array* create() {
            return il2cpp::create_object<app::RegionPointer__Array>(get_class());
        }
    } // namespace RegionPointer__Array
} // namespace app::classes::types
