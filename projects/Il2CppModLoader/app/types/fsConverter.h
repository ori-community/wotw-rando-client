#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsConverter__Class** type_info;
        inline app::fsConverter__Class* get_class() {
            return il2cpp::get_class<app::fsConverter__Class>(type_info, "FullSerializer", "fsConverter");
        }
        inline app::fsConverter* create() {
            return il2cpp::create_object<app::fsConverter>(get_class());
        }
        inline app::fsConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::fsConverter__Array>(get_class(), size);
        }
        inline app::fsConverter__Array* create_array(const std::vector<app::fsConverter*>& items) {
            return il2cpp::array_new<app::fsConverter__Array>(get_class(), items);
        }
    } // namespace fsConverter
} // namespace app::classes::types
