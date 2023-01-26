#pragma once
#include <Modloader/app/structs/IIndexedItem__Array.h>
#include <Modloader/app/structs/IIndexedItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IIndexedItem__Array {
        inline app::IIndexedItem__Array__Class** type_info() {
            static app::IIndexedItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IIndexedItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IIndexedItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IIndexedItem__Array__Class>(type_info(), "", "IIndexedItem[]");
        }
        inline app::IIndexedItem__Array* create() {
            return il2cpp::create_object<app::IIndexedItem__Array>(get_class());
        }
    } // namespace IIndexedItem__Array
} // namespace app::classes::types
