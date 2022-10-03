#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StretchGameObject {
        namespace {
            app::StretchGameObject__Class* type_info_ref = nullptr;
        }
        app::StretchGameObject__Class** type_info = &type_info_ref;
        inline app::StretchGameObject__Class* get_class() {
            return il2cpp::get_class<app::StretchGameObject__Class>(type_info, "", "StretchGameObject");
        }
        inline app::StretchGameObject* create() {
            return il2cpp::create_object<app::StretchGameObject>(get_class());
        }
        inline app::StretchGameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::StretchGameObject__Array>(get_class(), size);
        }
    } // namespace StretchGameObject
} // namespace app::classes::types
