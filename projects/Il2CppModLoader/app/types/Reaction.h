#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Reaction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Reaction__Class** type_info;
        inline app::Reaction__Class* get_class() {
            return il2cpp::get_class<app::Reaction__Class>(type_info, "Moon.Timeline", "Reaction");
        }
        inline app::Reaction* create() {
            return il2cpp::create_object<app::Reaction>(get_class());
        }
        inline app::Reaction__Boxed* box(app::Reaction value) {
            return il2cpp::box_value<app::Reaction__Boxed>(get_class(), value);
        }
        inline app::Reaction__Array* create_array(int size) {
            return il2cpp::array_new<app::Reaction__Array>(get_class(), size);
        }
        inline app::Reaction__Array* create_array(const std::vector<app::Reaction__Boxed>& items) {
            return il2cpp::array_new<app::Reaction__Array>(get_class(), items);
        }
    } // namespace Reaction
} // namespace app::classes::types
