#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComponentChanges {
        namespace {
            app::ComponentChanges__Class* type_info_ref = nullptr;
        }
        app::ComponentChanges__Class** type_info = &type_info_ref;
        inline app::ComponentChanges__Class* get_class() {
            return il2cpp::get_class<app::ComponentChanges__Class>(type_info, "Moon.ReviewFramework", "ComponentChanges");
        }
        inline app::ComponentChanges* create() {
            return il2cpp::create_object<app::ComponentChanges>(get_class());
        }
        inline app::ComponentChanges__Array* create_array(int size) {
            return il2cpp::array_new<app::ComponentChanges__Array>(get_class(), size);
        }
    } // namespace ComponentChanges
} // namespace app::classes::types
