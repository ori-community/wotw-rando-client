#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISuspendable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISuspendable__Class** type_info;
        inline app::ISuspendable__Class* get_class() {
            return il2cpp::get_class<app::ISuspendable__Class>(type_info, "Moon", "ISuspendable");
        }
        inline app::ISuspendable__Array* create_array(int size) {
            return il2cpp::array_new<app::ISuspendable__Array>(get_class(), size);
        }
    } // namespace ISuspendable
} // namespace app::classes::types
