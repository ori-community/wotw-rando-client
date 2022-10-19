#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IResourceReader {
        inline app::IResourceReader__Class** type_info = (app::IResourceReader__Class**)(modloader::win::memory::resolve_rva(0x04794D98));
        inline app::IResourceReader__Class* get_class() {
            return il2cpp::get_class<app::IResourceReader__Class>(type_info, "System.Resources", "IResourceReader");
        }
    } // namespace IResourceReader
} // namespace app::classes::types
