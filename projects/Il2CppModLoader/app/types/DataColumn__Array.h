#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataColumn__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataColumn__Array__Class** type_info;
        inline app::DataColumn__Array__Class* get_class() {
            return il2cpp::get_class<app::DataColumn__Array__Class>(type_info, "System.Data", "DataColumn[]");
        }
        inline app::DataColumn__Array* create() {
            return il2cpp::create_object<app::DataColumn__Array>(get_class());
        }
    } // namespace DataColumn__Array
} // namespace app::classes::types
