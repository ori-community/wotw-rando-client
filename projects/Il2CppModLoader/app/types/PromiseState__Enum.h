#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PromiseState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PromiseState__Enum__Class** type_info;
        inline app::PromiseState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PromiseState__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PromiseState");
        }
        inline app::PromiseState__Enum* create() {
            return il2cpp::create_object<app::PromiseState__Enum>(get_class());
        }
    } // namespace PromiseState__Enum
} // namespace app::classes::types
