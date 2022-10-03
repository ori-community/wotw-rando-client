#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrownKeystone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinInteraction_ThrownKeystone__Class** type_info;
        inline app::SeinInteraction_ThrownKeystone__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinInteraction_ThrownKeystone__Class>(type_info, "", "SeinInteraction", "ThrownKeystone");
        }
        inline app::SeinInteraction_ThrownKeystone* create() {
            return il2cpp::create_object<app::SeinInteraction_ThrownKeystone>(get_class());
        }
        inline app::SeinInteraction_ThrownKeystone__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinInteraction_ThrownKeystone__Array>(get_class(), size);
        }
    } // namespace SeinInteraction_ThrownKeystone
} // namespace app::classes::types
