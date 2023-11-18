#pragma once
#include <Modloader/app/structs/CollectablePlaceholder__Array.h>
#include <Modloader/app/structs/CollectablePlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectablePlaceholder__Array {
        inline app::CollectablePlaceholder__Array__Class** type_info() {
            static app::CollectablePlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollectablePlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollectablePlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::CollectablePlaceholder__Array__Class>(type_info(), "", "CollectablePlaceholder[]");
        }
        inline app::CollectablePlaceholder__Array* create() {
            return il2cpp::create_object<app::CollectablePlaceholder__Array>(get_class());
        }
    } // namespace CollectablePlaceholder__Array
} // namespace app::classes::types
