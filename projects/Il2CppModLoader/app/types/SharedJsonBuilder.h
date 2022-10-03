#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedJsonBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SharedJsonBuilder__Class** type_info;
        inline app::SharedJsonBuilder__Class* get_class() {
            return il2cpp::get_class<app::SharedJsonBuilder__Class>(type_info, "Moon", "SharedJsonBuilder");
        }
        inline app::SharedJsonBuilder* create() {
            return il2cpp::create_object<app::SharedJsonBuilder>(get_class());
        }
        inline app::SharedJsonBuilder__Boxed* box(app::SharedJsonBuilder value) {
            return il2cpp::box_value<app::SharedJsonBuilder__Boxed>(get_class(), value);
        }
    } // namespace SharedJsonBuilder
} // namespace app::classes::types
