#pragma once
#include <Modloader/app/structs/ITriangle__Array.h>
#include <Modloader/app/structs/ITriangle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITriangle__Array {
        inline app::ITriangle__Array__Class** type_info() {
            static app::ITriangle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITriangle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::ITriangle__Array__Class>(type_info(), "TriangleNet.Geometry", "ITriangle[]");
        }
        inline app::ITriangle__Array* create() {
            return il2cpp::create_object<app::ITriangle__Array>(get_class());
        }
    } // namespace ITriangle__Array
} // namespace app::classes::types
