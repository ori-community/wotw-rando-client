#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsData__Class** type_info;
        inline app::fsData__Class* get_class() {
            return il2cpp::get_class<app::fsData__Class>(type_info, "FullSerializer", "fsData");
        }
        inline app::fsData* create() {
            return il2cpp::create_object<app::fsData>(get_class());
        }
        inline app::fsData__Array* create_array(int size) {
            return il2cpp::array_new<app::fsData__Array>(get_class(), size);
        }
    } // namespace fsData
} // namespace app::classes::types
