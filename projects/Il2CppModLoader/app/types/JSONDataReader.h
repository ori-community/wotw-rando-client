#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JSONDataReader {
        inline app::JSONDataReader__Class** type_info = (app::JSONDataReader__Class**)(modloader::win::memory::resolve_rva(0x0474FE50));
        inline app::JSONDataReader__Class* get_class() {
            return il2cpp::get_class<app::JSONDataReader__Class>(type_info, "Moon.Network.Web", "JSONDataReader");
        }
        inline app::JSONDataReader* create() {
            return il2cpp::create_object<app::JSONDataReader>(get_class());
        }
    } // namespace JSONDataReader
} // namespace app::classes::types
