#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonPosition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonPosition__Class** type_info;
        inline app::JsonPosition__Class* get_class() {
            return il2cpp::get_class<app::JsonPosition__Class>(type_info, "Newtonsoft.Json", "JsonPosition");
        }
        inline app::JsonPosition* create() {
            return il2cpp::create_object<app::JsonPosition>(get_class());
        }
        inline app::JsonPosition__Boxed* box(app::JsonPosition value) {
            return il2cpp::box_value<app::JsonPosition__Boxed>(get_class(), value);
        }
        inline app::JsonPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonPosition__Array>(get_class(), size);
        }
    } // namespace JsonPosition
} // namespace app::classes::types
