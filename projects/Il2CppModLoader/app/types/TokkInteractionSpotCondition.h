#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokkInteractionSpotCondition {
        namespace {
            app::TokkInteractionSpotCondition__Class* type_info_ref = nullptr;
        }
        app::TokkInteractionSpotCondition__Class** type_info = &type_info_ref;
        inline app::TokkInteractionSpotCondition__Class* get_class() {
            return il2cpp::get_class<app::TokkInteractionSpotCondition__Class>(type_info, "", "TokkInteractionSpotCondition");
        }
        inline app::TokkInteractionSpotCondition* create() {
            return il2cpp::create_object<app::TokkInteractionSpotCondition>(get_class());
        }
    } // namespace TokkInteractionSpotCondition
} // namespace app::classes::types
