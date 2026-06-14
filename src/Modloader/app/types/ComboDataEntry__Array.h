#pragma once
#include <Modloader/app/structs/ComboDataEntry__Array.h>
#include <Modloader/app/structs/ComboDataEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboDataEntry__Array {
        inline app::ComboDataEntry__Array__Class** type_info() {
            static app::ComboDataEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboDataEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboDataEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboDataEntry__Array__Class>(type_info(), "Moon.ComboSystem", "ComboDataEntry[]");
        }
        inline app::ComboDataEntry__Array* create() {
            return il2cpp::create_object<app::ComboDataEntry__Array>(get_class());
        }
    } // namespace ComboDataEntry__Array
} // namespace app::classes::types
