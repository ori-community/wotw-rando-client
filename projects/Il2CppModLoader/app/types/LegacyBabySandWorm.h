#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyBabySandWorm {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyBabySandWorm__Class** type_info;
        inline app::LegacyBabySandWorm__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWorm__Class>(type_info, "", "LegacyBabySandWorm");
        }
        inline app::LegacyBabySandWorm* create() {
            return il2cpp::create_object<app::LegacyBabySandWorm>(get_class());
        }
        inline app::LegacyBabySandWorm__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyBabySandWorm__Array>(get_class(), size);
        }
    } // namespace LegacyBabySandWorm
} // namespace app::classes::types
