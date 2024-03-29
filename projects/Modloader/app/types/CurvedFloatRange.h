#pragma once
#include <Modloader/app/structs/CurvedFloatRange.h>
#include <Modloader/app/structs/CurvedFloatRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurvedFloatRange {
        inline app::CurvedFloatRange__Class** type_info() {
            static app::CurvedFloatRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CurvedFloatRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CurvedFloatRange__Class* get_class() {
            return il2cpp::get_class<app::CurvedFloatRange__Class>(type_info(), "", "CurvedFloatRange");
        }
        inline app::CurvedFloatRange* create() {
            return il2cpp::create_object<app::CurvedFloatRange>(get_class());
        }
    } // namespace CurvedFloatRange
} // namespace app::classes::types
