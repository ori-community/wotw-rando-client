#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonGuid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonGuid__Class** type_info;
        inline app::MoonGuid__Class* get_class() {
            return il2cpp::get_class<app::MoonGuid__Class>(type_info, "", "MoonGuid");
        }
        inline app::MoonGuid* create() {
            return il2cpp::create_object<app::MoonGuid>(get_class());
        }
        inline app::MoonGuid__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonGuid__Array>(get_class(), size);
        }
    } // namespace MoonGuid
} // namespace app::classes::types
