#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsDirectConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsDirectConverter__Class** type_info;
        inline app::fsDirectConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDirectConverter__Class>(type_info, "FullSerializer", "fsDirectConverter");
        }
        inline app::fsDirectConverter* create() {
            return il2cpp::create_object<app::fsDirectConverter>(get_class());
        }
        inline app::fsDirectConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::fsDirectConverter__Array>(get_class(), size);
        }
        inline app::fsDirectConverter__Array* create_array(const std::vector<app::fsDirectConverter*>& items) {
            return il2cpp::array_new<app::fsDirectConverter__Array>(get_class(), items);
        }
    } // namespace fsDirectConverter
} // namespace app::classes::types
