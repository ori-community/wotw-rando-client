#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuildData__Class** type_info;
        inline app::BuildData__Class* get_class() {
            return il2cpp::get_class<app::BuildData__Class>(type_info, "", "BuildData");
        }
        inline app::BuildData* create() {
            return il2cpp::create_object<app::BuildData>(get_class());
        }
        inline app::BuildData__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildData__Array>(get_class(), size);
        }
    } // namespace BuildData
} // namespace app::classes::types
