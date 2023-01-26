#pragma once
#include <Modloader/app/structs/UberAtlasPrefabAreaDictionary.h>
#include <Modloader/app/structs/UberAtlasPrefabAreaDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberAtlasPrefabAreaDictionary {
        inline app::UberAtlasPrefabAreaDictionary__Class** type_info() {
            static app::UberAtlasPrefabAreaDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberAtlasPrefabAreaDictionary__Class**)(modloader::win::memory::resolve_rva(0x04772948));
            }
            return cache;
        }
        inline app::UberAtlasPrefabAreaDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrefabAreaDictionary__Class>(type_info(), "", "UberAtlasPrefabAreaDictionary");
        }
        inline app::UberAtlasPrefabAreaDictionary* create() {
            return il2cpp::create_object<app::UberAtlasPrefabAreaDictionary>(get_class());
        }
    } // namespace UberAtlasPrefabAreaDictionary
} // namespace app::classes::types
