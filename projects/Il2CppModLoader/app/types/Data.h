#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Data__Class** type_info;
        inline app::Data__Class* get_class() {
            return il2cpp::get_class<app::Data__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Data");
        }
        inline app::Data* create() {
            return il2cpp::create_object<app::Data>(get_class());
        }
        inline app::Data__Array* create_array(int size) {
            return il2cpp::array_new<app::Data__Array>(get_class(), size);
        }
    } // namespace Data
} // namespace app::classes::types
