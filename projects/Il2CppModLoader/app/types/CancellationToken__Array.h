#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancellationToken__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancellationToken__Array__Class** type_info;
        inline app::CancellationToken__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationToken__Array__Class>(type_info, "System.Threading", "CancellationToken[]");
        }
        inline app::CancellationToken__Array* create() {
            return il2cpp::create_object<app::CancellationToken__Array>(get_class());
        }
    } // namespace CancellationToken__Array
} // namespace app::classes::types
