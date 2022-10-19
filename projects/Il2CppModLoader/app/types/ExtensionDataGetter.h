#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtensionDataGetter {
        inline app::ExtensionDataGetter__Class** type_info = (app::ExtensionDataGetter__Class**)(modloader::win::memory::resolve_rva(0x0475DC78));
        inline app::ExtensionDataGetter__Class* get_class() {
            return il2cpp::get_class<app::ExtensionDataGetter__Class>(type_info, "Newtonsoft.Json.Serialization", "ExtensionDataGetter");
        }
        inline app::ExtensionDataGetter* create() {
            return il2cpp::create_object<app::ExtensionDataGetter>(get_class());
        }
    } // namespace ExtensionDataGetter
} // namespace app::classes::types
