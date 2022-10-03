#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteObjectInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteObjectInfo__Class** type_info;
        inline app::WriteObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::WriteObjectInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
        }
        inline app::WriteObjectInfo* create() {
            return il2cpp::create_object<app::WriteObjectInfo>(get_class());
        }
        inline app::WriteObjectInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::WriteObjectInfo__Array>(get_class(), size);
        }
    } // namespace WriteObjectInfo
} // namespace app::classes::types
