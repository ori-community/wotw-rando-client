#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateCollectionReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateCollectionReference__Class** type_info;
        inline app::UberStateCollectionReference__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollectionReference__Class>(type_info, "", "UberStateCollectionReference");
        }
        inline app::UberStateCollectionReference* create() {
            return il2cpp::create_object<app::UberStateCollectionReference>(get_class());
        }
    } // namespace UberStateCollectionReference
} // namespace app::classes::types
