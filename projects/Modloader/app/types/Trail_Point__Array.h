#pragma once
#include <Modloader/app/structs/Trail_Point__Array.h>
#include <Modloader/app/structs/Trail_Point__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trail_Point__Array {
        inline app::Trail_Point__Array__Class** type_info() {
            static app::Trail_Point__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Trail_Point__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Trail_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::Trail_Point__Array__Class>(type_info(), "Moon", "Trail+Point[]");
        }
        inline app::Trail_Point__Array* create() {
            return il2cpp::create_object<app::Trail_Point__Array>(get_class());
        }
    } // namespace Trail_Point__Array
} // namespace app::classes::types
