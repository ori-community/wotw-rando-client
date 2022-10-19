#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberAtlasPrefabAreaDictionary {
        inline app::UberAtlasPrefabAreaDictionary__Class** type_info = (app::UberAtlasPrefabAreaDictionary__Class**)(modloader::win::memory::resolve_rva(0x04772948));
        inline app::UberAtlasPrefabAreaDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrefabAreaDictionary__Class>(type_info, "", "UberAtlasPrefabAreaDictionary");
        }
        inline app::UberAtlasPrefabAreaDictionary* create() {
            return il2cpp::create_object<app::UberAtlasPrefabAreaDictionary>(get_class());
        }
    } // namespace UberAtlasPrefabAreaDictionary
} // namespace app::classes::types
