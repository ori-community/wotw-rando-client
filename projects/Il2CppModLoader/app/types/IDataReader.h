#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDataReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDataReader__Class** type_info;
        inline app::IDataReader__Class* get_class() {
            return il2cpp::get_class<app::IDataReader__Class>(type_info, "Moon.Network.Web", "IDataReader");
        }
    } // namespace IDataReader
} // namespace app::classes::types
