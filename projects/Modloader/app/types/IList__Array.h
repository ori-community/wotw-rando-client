#pragma once
#include <Modloader/app/structs/IList__Array.h>
#include <Modloader/app/structs/IList__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IList__Array {
        inline app::IList__Array__Class** type_info() {
            static app::IList__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IList__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IList__Array__Class* get_class() {
            return il2cpp::get_class<app::IList__Array__Class>(type_info(), "System.Collections", "IList[]");
        }
        inline app::IList__Array* create() {
            return il2cpp::create_object<app::IList__Array>(get_class());
        }
    } // namespace IList__Array
} // namespace app::classes::types
