#pragma once
#include <Modloader/app/structs/MaterialBasedHornBugEffectsMap.h>
#include <Modloader/app/structs/MaterialBasedHornBugEffectsMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugEffectsMap {
        inline app::MaterialBasedHornBugEffectsMap__Class** type_info() {
            static app::MaterialBasedHornBugEffectsMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedHornBugEffectsMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedHornBugEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugEffectsMap__Class>(type_info(), "", "MaterialBasedHornBugEffectsMap");
        }
        inline app::MaterialBasedHornBugEffectsMap* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugEffectsMap>(get_class());
        }
    } // namespace MaterialBasedHornBugEffectsMap
} // namespace app::classes::types
