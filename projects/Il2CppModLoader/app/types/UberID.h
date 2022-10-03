#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberID__Class** type_info;
        inline app::UberID__Class* get_class() {
            return il2cpp::get_class<app::UberID__Class>(type_info, "Moon", "UberID");
        }
        inline app::UberID* create() {
            return il2cpp::create_object<app::UberID>(get_class());
        }
        inline app::UberID__Array* create_array(int size) {
            return il2cpp::array_new<app::UberID__Array>(get_class(), size);
        }
    } // namespace UberID
} // namespace app::classes::types
