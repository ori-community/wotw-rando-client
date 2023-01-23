#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TokkInteractionSpotCondition__Class.h>
#include <Modloader/app/structs/TokkInteractionSpotCondition.h>

namespace app::classes::types {
    namespace TokkInteractionSpotCondition {
        namespace {
            inline app::TokkInteractionSpotCondition__Class* type_info_ref = nullptr;
        }
        inline app::TokkInteractionSpotCondition__Class** type_info = &type_info_ref;
        inline app::TokkInteractionSpotCondition__Class* get_class() {
            return il2cpp::get_class<app::TokkInteractionSpotCondition__Class>(type_info, "", "TokkInteractionSpotCondition");
        }
        inline app::TokkInteractionSpotCondition* create() {
            return il2cpp::create_object<app::TokkInteractionSpotCondition>(get_class());
        }
    } // namespace TokkInteractionSpotCondition
} // namespace app::classes::types
