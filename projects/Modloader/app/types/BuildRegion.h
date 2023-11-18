#pragma once
#include <Modloader/app/structs/BuildRegion.h>
#include <Modloader/app/structs/BuildRegion__Array.h>
#include <Modloader/app/structs/BuildRegion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildRegion {
        inline app::BuildRegion__Class** type_info() {
            static app::BuildRegion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildRegion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildRegion__Class* get_class() {
            return il2cpp::get_class<app::BuildRegion__Class>(type_info(), "PlayFab.MultiplayerModels", "BuildRegion");
        }
        inline app::BuildRegion* create() {
            return il2cpp::create_object<app::BuildRegion>(get_class());
        }
        inline app::BuildRegion__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildRegion__Array>(get_class(), size);
        }
        inline app::BuildRegion__Array* create_array(const std::vector<app::BuildRegion*>& items) {
            return il2cpp::array_new<app::BuildRegion__Array>(get_class(), items);
        }
    } // namespace BuildRegion
} // namespace app::classes::types
