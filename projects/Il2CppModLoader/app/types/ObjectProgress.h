#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectProgress {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectProgress__Class** type_info;
        inline app::ObjectProgress__Class* get_class() {
            return il2cpp::get_class<app::ObjectProgress__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
        }
        inline app::ObjectProgress* create() {
            return il2cpp::create_object<app::ObjectProgress>(get_class());
        }
    } // namespace ObjectProgress
} // namespace app::classes::types
