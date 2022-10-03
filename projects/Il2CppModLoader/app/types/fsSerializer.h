#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsSerializer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsSerializer__Class** type_info;
        inline app::fsSerializer__Class* get_class() {
            return il2cpp::get_class<app::fsSerializer__Class>(type_info, "FullSerializer", "fsSerializer");
        }
        inline app::fsSerializer* create() {
            return il2cpp::create_object<app::fsSerializer>(get_class());
        }
    } // namespace fsSerializer
} // namespace app::classes::types
