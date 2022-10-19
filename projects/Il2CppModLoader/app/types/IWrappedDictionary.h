#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWrappedDictionary {
        inline app::IWrappedDictionary__Class** type_info = (app::IWrappedDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475BD90));
        inline app::IWrappedDictionary__Class* get_class() {
            return il2cpp::get_class<app::IWrappedDictionary__Class>(type_info, "Newtonsoft.Json.Utilities", "IWrappedDictionary");
        }
    } // namespace IWrappedDictionary
} // namespace app::classes::types
