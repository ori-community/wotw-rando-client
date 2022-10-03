#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidTimeZoneException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidTimeZoneException__Class** type_info;
        inline app::InvalidTimeZoneException__Class* get_class() {
            return il2cpp::get_class<app::InvalidTimeZoneException__Class>(type_info, "System", "InvalidTimeZoneException");
        }
        inline app::InvalidTimeZoneException* create() {
            return il2cpp::create_object<app::InvalidTimeZoneException>(get_class());
        }
    } // namespace InvalidTimeZoneException
} // namespace app::classes::types
