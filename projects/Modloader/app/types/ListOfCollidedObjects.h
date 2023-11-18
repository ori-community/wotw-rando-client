#pragma once
#include <Modloader/app/structs/ListOfCollidedObjects.h>
#include <Modloader/app/structs/ListOfCollidedObjects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListOfCollidedObjects {
        inline app::ListOfCollidedObjects__Class** type_info() {
            static app::ListOfCollidedObjects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ListOfCollidedObjects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ListOfCollidedObjects__Class* get_class() {
            return il2cpp::get_class<app::ListOfCollidedObjects__Class>(type_info(), "", "ListOfCollidedObjects");
        }
        inline app::ListOfCollidedObjects* create() {
            return il2cpp::create_object<app::ListOfCollidedObjects>(get_class());
        }
    } // namespace ListOfCollidedObjects
} // namespace app::classes::types
