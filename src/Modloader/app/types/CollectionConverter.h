#pragma once
#include <Modloader/app/structs/CollectionConverter.h>
#include <Modloader/app/structs/CollectionConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectionConverter {
        inline app::CollectionConverter__Class** type_info() {
            static app::CollectionConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollectionConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollectionConverter__Class* get_class() {
            return il2cpp::get_class<app::CollectionConverter__Class>(type_info(), "System.ComponentModel", "CollectionConverter");
        }
        inline app::CollectionConverter* create() {
            return il2cpp::create_object<app::CollectionConverter>(get_class());
        }
    } // namespace CollectionConverter
} // namespace app::classes::types
