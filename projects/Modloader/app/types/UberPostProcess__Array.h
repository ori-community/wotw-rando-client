#pragma once
#include <Modloader/app/structs/UberPostProcess__Array.h>
#include <Modloader/app/structs/UberPostProcess__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostProcess__Array {
        inline app::UberPostProcess__Array__Class** type_info() {
            static app::UberPostProcess__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostProcess__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostProcess__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcess__Array__Class>(type_info(), "", "UberPostProcess[]");
        }
        inline app::UberPostProcess__Array* create() {
            return il2cpp::create_object<app::UberPostProcess__Array>(get_class());
        }
    } // namespace UberPostProcess__Array
} // namespace app::classes::types
