#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteObjectInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteObjectInfo__Array__Class** type_info;
        inline app::WriteObjectInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::WriteObjectInfo__Array__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo[]");
        }
        inline app::WriteObjectInfo__Array* create() {
            return il2cpp::create_object<app::WriteObjectInfo__Array>(get_class());
        }
    } // namespace WriteObjectInfo__Array
} // namespace app::classes::types
