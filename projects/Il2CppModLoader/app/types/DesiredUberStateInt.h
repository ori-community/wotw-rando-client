#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateInt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesiredUberStateInt__Class** type_info;
        inline app::DesiredUberStateInt__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateInt__Class>(type_info, "", "DesiredUberStateInt");
        }
        inline app::DesiredUberStateInt* create() {
            return il2cpp::create_object<app::DesiredUberStateInt>(get_class());
        }
        inline app::DesiredUberStateInt__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateInt__Array>(get_class(), size);
        }
        inline app::DesiredUberStateInt__Array* create_array(const std::vector<app::DesiredUberStateInt*>& items) {
            return il2cpp::array_new<app::DesiredUberStateInt__Array>(get_class(), items);
        }
    } // namespace DesiredUberStateInt
} // namespace app::classes::types
