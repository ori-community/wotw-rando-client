#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Otri__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Otri__Array__Class** type_info;
        inline app::Otri__Array__Class* get_class() {
            return il2cpp::get_class<app::Otri__Array__Class>(type_info, "TriangleNet.Topology", "Otri[]");
        }
        inline app::Otri__Array* create() {
            return il2cpp::create_object<app::Otri__Array>(get_class());
        }
    } // namespace Otri__Array
} // namespace app::classes::types
