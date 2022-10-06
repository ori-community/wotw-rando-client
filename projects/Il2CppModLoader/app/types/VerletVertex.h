#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletVertex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletVertex__Class** type_info;
        inline app::VerletVertex__Class* get_class() {
            return il2cpp::get_class<app::VerletVertex__Class>(type_info, "", "VerletVertex");
        }
        inline app::VerletVertex* create() {
            return il2cpp::create_object<app::VerletVertex>(get_class());
        }
        inline app::VerletVertex__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletVertex__Array>(get_class(), size);
        }
        inline app::VerletVertex__Array* create_array(const std::vector<app::VerletVertex*>& items) {
            return il2cpp::array_new<app::VerletVertex__Array>(get_class(), items);
        }
    } // namespace VerletVertex
} // namespace app::classes::types
