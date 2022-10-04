#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICloneable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICloneable__Class** type_info;
        inline app::ICloneable__Class* get_class() {
            return il2cpp::get_class<app::ICloneable__Class>(type_info, "System", "ICloneable");
        }
        inline app::ICloneable* create() {
            return il2cpp::create_object<app::ICloneable>(get_class());
        }
    } // namespace ICloneable
} // namespace app::classes::types
