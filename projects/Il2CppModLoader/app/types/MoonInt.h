#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonInt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonInt__Class** type_info;
        inline app::MoonInt__Class* get_class() {
            return il2cpp::get_class<app::MoonInt__Class>(type_info, "Moon", "MoonInt");
        }
        inline app::MoonInt* create() {
            return il2cpp::create_object<app::MoonInt>(get_class());
        }
        inline app::MoonInt__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonInt__Array>(get_class(), size);
        }
        inline app::MoonInt__Array* create_array(const std::vector<app::MoonInt*>& items) {
            return il2cpp::array_new<app::MoonInt__Array>(get_class(), items);
        }
    } // namespace MoonInt
} // namespace app::classes::types
