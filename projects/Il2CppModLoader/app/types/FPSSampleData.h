#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSSampleData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSSampleData__Class** type_info;
        inline app::FPSSampleData__Class* get_class() {
            return il2cpp::get_class<app::FPSSampleData__Class>(type_info, "", "FPSSampleData");
        }
        inline app::FPSSampleData* create() {
            return il2cpp::create_object<app::FPSSampleData>(get_class());
        }
        inline app::FPSSampleData__Array* create_array(int size) {
            return il2cpp::array_new<app::FPSSampleData__Array>(get_class(), size);
        }
        inline app::FPSSampleData__Array* create_array(const std::vector<app::FPSSampleData*>& items) {
            return il2cpp::array_new<app::FPSSampleData__Array>(get_class(), items);
        }
    } // namespace FPSSampleData
} // namespace app::classes::types
