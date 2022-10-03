#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBody_Link {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletBody_Link__Class** type_info;
        inline app::VerletBody_Link__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBody_Link__Class>(type_info, "Moon", "VerletBody", "Link");
        }
        inline app::VerletBody_Link* create() {
            return il2cpp::create_object<app::VerletBody_Link>(get_class());
        }
        inline app::VerletBody_Link__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBody_Link__Array>(get_class(), size);
        }
    } // namespace VerletBody_Link
} // namespace app::classes::types
