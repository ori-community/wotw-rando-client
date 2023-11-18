#pragma once
#include <Modloader/app/structs/BuildRegionParams__Array.h>
#include <Modloader/app/structs/BuildRegionParams__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildRegionParams__Array {
        inline app::BuildRegionParams__Array__Class** type_info() {
            static app::BuildRegionParams__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildRegionParams__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildRegionParams__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildRegionParams__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "BuildRegionParams[]");
        }
        inline app::BuildRegionParams__Array* create() {
            return il2cpp::create_object<app::BuildRegionParams__Array>(get_class());
        }
    } // namespace BuildRegionParams__Array
} // namespace app::classes::types
