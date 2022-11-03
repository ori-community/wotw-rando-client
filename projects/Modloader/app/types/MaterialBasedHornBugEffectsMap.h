#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugEffectsMap {
        namespace {
            inline app::MaterialBasedHornBugEffectsMap__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedHornBugEffectsMap__Class** type_info = &type_info_ref;
        inline app::MaterialBasedHornBugEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugEffectsMap__Class>(type_info, "", "MaterialBasedHornBugEffectsMap");
        }
        inline app::MaterialBasedHornBugEffectsMap* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugEffectsMap>(get_class());
        }
    } // namespace MaterialBasedHornBugEffectsMap
} // namespace app::classes::types
