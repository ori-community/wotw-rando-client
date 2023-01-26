#pragma once
#include <Modloader/app/structs/IEnumerator__Array.h>
#include <Modloader/app/structs/IEnumerator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEnumerator__Array {
        inline app::IEnumerator__Array__Class** type_info() {
            static app::IEnumerator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEnumerator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEnumerator__Array__Class* get_class() {
            return il2cpp::get_class<app::IEnumerator__Array__Class>(type_info(), "System.Collections", "IEnumerator[]");
        }
        inline app::IEnumerator__Array* create() {
            return il2cpp::create_object<app::IEnumerator__Array>(get_class());
        }
    } // namespace IEnumerator__Array
} // namespace app::classes::types
