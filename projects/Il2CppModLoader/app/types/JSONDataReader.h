#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JSONDataReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JSONDataReader__Class** type_info;
        inline app::JSONDataReader__Class* get_class() {
            return il2cpp::get_class<app::JSONDataReader__Class>(type_info, "Moon.Network.Web", "JSONDataReader");
        }
        inline app::JSONDataReader* create() {
            return il2cpp::create_object<app::JSONDataReader>(get_class());
        }
    } // namespace JSONDataReader
} // namespace app::classes::types
