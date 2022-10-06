#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameInfo_1__Class** type_info;
        inline app::NameInfo_1__Class* get_class() {
            return il2cpp::get_class<app::NameInfo_1__Class>(type_info, "System.Diagnostics.Tracing", "NameInfo");
        }
        inline app::NameInfo_1* create() {
            return il2cpp::create_object<app::NameInfo_1>(get_class());
        }
        inline app::NameInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::NameInfo_1__Array>(get_class(), size);
        }
        inline app::NameInfo_1__Array* create_array(const std::vector<app::NameInfo_1*>& items) {
            return il2cpp::array_new<app::NameInfo_1__Array>(get_class(), items);
        }
    } // namespace NameInfo_1
} // namespace app::classes::types
