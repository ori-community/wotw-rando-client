#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateValueGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateValueGroup__Class** type_info;
        inline app::UberStateValueGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroup__Class>(type_info, "Moon", "UberStateValueGroup");
        }
        inline app::UberStateValueGroup* create() {
            return il2cpp::create_object<app::UberStateValueGroup>(get_class());
        }
        inline app::UberStateValueGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateValueGroup__Array>(get_class(), size);
        }
    } // namespace UberStateValueGroup
} // namespace app::classes::types
