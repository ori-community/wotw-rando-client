#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesiredUberStateFloat__Class** type_info;
        inline app::DesiredUberStateFloat__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateFloat__Class>(type_info, "", "DesiredUberStateFloat");
        }
        inline app::DesiredUberStateFloat* create() {
            return il2cpp::create_object<app::DesiredUberStateFloat>(get_class());
        }
        inline app::DesiredUberStateFloat__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateFloat__Array>(get_class(), size);
        }
    } // namespace DesiredUberStateFloat
} // namespace app::classes::types
