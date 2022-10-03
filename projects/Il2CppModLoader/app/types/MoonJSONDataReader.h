#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonJSONDataReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonJSONDataReader__Class** type_info;
        inline app::MoonJSONDataReader__Class* get_class() {
            return il2cpp::get_class<app::MoonJSONDataReader__Class>(type_info, "Moon.Network.Web", "MoonJSONDataReader");
        }
        inline app::MoonJSONDataReader* create() {
            return il2cpp::create_object<app::MoonJSONDataReader>(get_class());
        }
    } // namespace MoonJSONDataReader
} // namespace app::classes::types
