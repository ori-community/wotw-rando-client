#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Method__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Method__Enum__Class** type_info;
        inline app::Method__Enum__Class* get_class() {
            return il2cpp::get_class<app::Method__Enum__Class>(type_info, "Moon.Network.Web", "Method");
        }
        inline app::Method__Enum* create() {
            return il2cpp::create_object<app::Method__Enum>(get_class());
        }
    } // namespace Method__Enum
} // namespace app::classes::types
