#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Otri {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Otri__Class** type_info;
        inline app::Otri__Class* get_class() {
            return il2cpp::get_class<app::Otri__Class>(type_info, "TriangleNet.Topology", "Otri");
        }
        inline app::Otri* create() {
            return il2cpp::create_object<app::Otri>(get_class());
        }
        inline app::Otri__Boxed* box(app::Otri value) {
            return il2cpp::box_value<app::Otri__Boxed>(get_class(), value);
        }
        inline app::Otri__Array* create_array(int size) {
            return il2cpp::array_new<app::Otri__Array>(get_class(), size);
        }
        inline app::Otri__Array* create_array(const std::vector<app::Otri__Boxed>& items) {
            return il2cpp::array_new<app::Otri__Array>(get_class(), items);
        }
    } // namespace Otri
} // namespace app::classes::types
