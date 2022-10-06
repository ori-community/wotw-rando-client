#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Contraction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Contraction__Class** type_info;
        inline app::Contraction__Class* get_class() {
            return il2cpp::get_class<app::Contraction__Class>(type_info, "Mono.Globalization.Unicode", "Contraction");
        }
        inline app::Contraction* create() {
            return il2cpp::create_object<app::Contraction>(get_class());
        }
        inline app::Contraction__Array* create_array(int size) {
            return il2cpp::array_new<app::Contraction__Array>(get_class(), size);
        }
        inline app::Contraction__Array* create_array(const std::vector<app::Contraction*>& items) {
            return il2cpp::array_new<app::Contraction__Array>(get_class(), items);
        }
    } // namespace Contraction
} // namespace app::classes::types
