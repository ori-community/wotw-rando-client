#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsDateConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsDateConverter__Class** type_info;
        inline app::fsDateConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDateConverter__Class>(type_info, "FullSerializer.Internal", "fsDateConverter");
        }
        inline app::fsDateConverter* create() {
            return il2cpp::create_object<app::fsDateConverter>(get_class());
        }
    } // namespace fsDateConverter
} // namespace app::classes::types
