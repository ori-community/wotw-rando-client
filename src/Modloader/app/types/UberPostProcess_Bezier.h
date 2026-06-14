#pragma once
#include <Modloader/app/structs/UberPostProcess_Bezier.h>
#include <Modloader/app/structs/UberPostProcess_Bezier__Boxed.h>
#include <Modloader/app/structs/UberPostProcess_Bezier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostProcess_Bezier {
        inline app::UberPostProcess_Bezier__Class** type_info() {
            static app::UberPostProcess_Bezier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostProcess_Bezier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostProcess_Bezier__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPostProcess_Bezier__Class>(type_info(), "", "UberPostProcess", "Bezier");
        }
        inline app::UberPostProcess_Bezier* create() {
            return il2cpp::create_object<app::UberPostProcess_Bezier>(get_class());
        }
        inline app::UberPostProcess_Bezier__Boxed* box(app::UberPostProcess_Bezier value) {
            return il2cpp::box_value<app::UberPostProcess_Bezier__Boxed>(get_class(), value);
        }
    } // namespace UberPostProcess_Bezier
} // namespace app::classes::types
