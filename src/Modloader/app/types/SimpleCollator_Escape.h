#pragma once
#include <Modloader/app/structs/SimpleCollator_Escape.h>
#include <Modloader/app/structs/SimpleCollator_Escape__Boxed.h>
#include <Modloader/app/structs/SimpleCollator_Escape__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleCollator_Escape {
        inline app::SimpleCollator_Escape__Class** type_info() {
            static app::SimpleCollator_Escape__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleCollator_Escape__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleCollator_Escape__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCollator_Escape__Class>(type_info(), "Mono.Globalization.Unicode", "SimpleCollator", "Escape");
        }
        inline app::SimpleCollator_Escape* create() {
            return il2cpp::create_object<app::SimpleCollator_Escape>(get_class());
        }
        inline app::SimpleCollator_Escape__Boxed* box(app::SimpleCollator_Escape value) {
            return il2cpp::box_value<app::SimpleCollator_Escape__Boxed>(get_class(), value);
        }
    } // namespace SimpleCollator_Escape
} // namespace app::classes::types
