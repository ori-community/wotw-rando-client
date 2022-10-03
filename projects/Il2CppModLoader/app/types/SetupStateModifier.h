#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupStateModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetupStateModifier__Class** type_info;
        inline app::SetupStateModifier__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifier__Class>(type_info, "", "SetupStateModifier");
        }
        inline app::SetupStateModifier* create() {
            return il2cpp::create_object<app::SetupStateModifier>(get_class());
        }
        inline app::SetupStateModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupStateModifier__Array>(get_class(), size);
        }
    } // namespace SetupStateModifier
} // namespace app::classes::types
