#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IScenesManagerBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IScenesManagerBehaviour__Class** type_info;
        inline app::IScenesManagerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::IScenesManagerBehaviour__Class>(type_info, "", "IScenesManagerBehaviour");
        }
        inline app::IScenesManagerBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::IScenesManagerBehaviour__Array>(get_class(), size);
        }
    } // namespace IScenesManagerBehaviour
} // namespace app::classes::types
