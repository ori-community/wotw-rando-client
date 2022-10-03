#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListOfCollidedObjects {
        namespace {
            app::ListOfCollidedObjects__Class* type_info_ref = nullptr;
        }
        app::ListOfCollidedObjects__Class** type_info = &type_info_ref;
        inline app::ListOfCollidedObjects__Class* get_class() {
            return il2cpp::get_class<app::ListOfCollidedObjects__Class>(type_info, "", "ListOfCollidedObjects");
        }
        inline app::ListOfCollidedObjects* create() {
            return il2cpp::create_object<app::ListOfCollidedObjects>(get_class());
        }
    } // namespace ListOfCollidedObjects
} // namespace app::classes::types
