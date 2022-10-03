#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Osub__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Osub__Array__Class** type_info;
        inline app::Osub__Array__Class* get_class() {
            return il2cpp::get_class<app::Osub__Array__Class>(type_info, "TriangleNet.Topology", "Osub[]");
        }
        inline app::Osub__Array* create() {
            return il2cpp::create_object<app::Osub__Array>(get_class());
        }
    } // namespace Osub__Array
} // namespace app::classes::types
