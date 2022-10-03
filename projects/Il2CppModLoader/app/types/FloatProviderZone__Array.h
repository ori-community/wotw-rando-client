#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatProviderZone__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatProviderZone__Array__Class** type_info;
        inline app::FloatProviderZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderZone__Array__Class>(type_info, "", "FloatProviderZone[]");
        }
        inline app::FloatProviderZone__Array* create() {
            return il2cpp::create_object<app::FloatProviderZone__Array>(get_class());
        }
    } // namespace FloatProviderZone__Array
} // namespace app::classes::types
