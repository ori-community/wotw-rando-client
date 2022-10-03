#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IScenesManagerBehaviour__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IScenesManagerBehaviour__Array__Class** type_info;
        inline app::IScenesManagerBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::IScenesManagerBehaviour__Array__Class>(type_info, "", "IScenesManagerBehaviour[]");
        }
        inline app::IScenesManagerBehaviour__Array* create() {
            return il2cpp::create_object<app::IScenesManagerBehaviour__Array>(get_class());
        }
    } // namespace IScenesManagerBehaviour__Array
} // namespace app::classes::types
