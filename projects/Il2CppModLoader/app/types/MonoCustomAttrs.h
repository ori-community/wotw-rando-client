#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoCustomAttrs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoCustomAttrs__Class** type_info;
        inline app::MonoCustomAttrs__Class* get_class() {
            return il2cpp::get_class<app::MonoCustomAttrs__Class>(type_info, "System", "MonoCustomAttrs");
        }
        inline app::MonoCustomAttrs* create() {
            return il2cpp::create_object<app::MonoCustomAttrs>(get_class());
        }
    } // namespace MonoCustomAttrs
} // namespace app::classes::types
