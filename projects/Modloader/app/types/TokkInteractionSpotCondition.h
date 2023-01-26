#pragma once
#include <Modloader/app/structs/TokkInteractionSpotCondition.h>
#include <Modloader/app/structs/TokkInteractionSpotCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TokkInteractionSpotCondition {
        inline app::TokkInteractionSpotCondition__Class** type_info() {
            static app::TokkInteractionSpotCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TokkInteractionSpotCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TokkInteractionSpotCondition__Class* get_class() {
            return il2cpp::get_class<app::TokkInteractionSpotCondition__Class>(type_info(), "", "TokkInteractionSpotCondition");
        }
        inline app::TokkInteractionSpotCondition* create() {
            return il2cpp::create_object<app::TokkInteractionSpotCondition>(get_class());
        }
    } // namespace TokkInteractionSpotCondition
} // namespace app::classes::types
