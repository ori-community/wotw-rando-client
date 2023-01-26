#pragma once
#include <Modloader/app/structs/AppliedTextStyle__Array.h>
#include <Modloader/app/structs/AppliedTextStyle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppliedTextStyle__Array {
        inline app::AppliedTextStyle__Array__Class** type_info() {
            static app::AppliedTextStyle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppliedTextStyle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppliedTextStyle__Array__Class* get_class() {
            return il2cpp::get_class<app::AppliedTextStyle__Array__Class>(type_info(), "CatlikeCoding.TextBox", "AppliedTextStyle[]");
        }
        inline app::AppliedTextStyle__Array* create() {
            return il2cpp::create_object<app::AppliedTextStyle__Array>(get_class());
        }
    } // namespace AppliedTextStyle__Array
} // namespace app::classes::types
