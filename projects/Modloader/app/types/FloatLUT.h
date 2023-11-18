#pragma once
#include <Modloader/app/structs/FloatLUT.h>
#include <Modloader/app/structs/FloatLUT__Boxed.h>
#include <Modloader/app/structs/FloatLUT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatLUT {
        inline app::FloatLUT__Class** type_info() {
            static app::FloatLUT__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatLUT__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatLUT__Class* get_class() {
            return il2cpp::get_class<app::FloatLUT__Class>(type_info(), "Swing", "FloatLUT");
        }
        inline app::FloatLUT* create() {
            return il2cpp::create_object<app::FloatLUT>(get_class());
        }
        inline app::FloatLUT__Boxed* box(app::FloatLUT value) {
            return il2cpp::box_value<app::FloatLUT__Boxed>(get_class(), value);
        }
    } // namespace FloatLUT
} // namespace app::classes::types
