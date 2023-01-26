#pragma once
#include <Modloader/app/structs/Substr__Array.h>
#include <Modloader/app/structs/Substr__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Substr__Array {
        inline app::Substr__Array__Class** type_info() {
            static app::Substr__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Substr__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Substr__Array__Class* get_class() {
            return il2cpp::get_class<app::Substr__Array__Class>(type_info(), "Moon", "Substr[]");
        }
        inline app::Substr__Array* create() {
            return il2cpp::create_object<app::Substr__Array>(get_class());
        }
    } // namespace Substr__Array
} // namespace app::classes::types
