#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatZone__Class** type_info;
        inline app::FloatZone__Class* get_class() {
            return il2cpp::get_class<app::FloatZone__Class>(type_info, "", "FloatZone");
        }
        inline app::FloatZone* create() {
            return il2cpp::create_object<app::FloatZone>(get_class());
        }
        inline app::FloatZone__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatZone__Array>(get_class(), size);
        }
    } // namespace FloatZone
} // namespace app::classes::types
