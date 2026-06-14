#pragma once
#include <Modloader/app/structs/TokkInteractionSpot__Enum.h>
#include <Modloader/app/structs/TokkInteractionSpot__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TokkInteractionSpot__Enum {
        inline app::TokkInteractionSpot__Enum__Class** type_info() {
            static app::TokkInteractionSpot__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TokkInteractionSpot__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TokkInteractionSpot__Enum__Class* get_class() {
            return il2cpp::get_class<app::TokkInteractionSpot__Enum__Class>(type_info(), "", "TokkInteractionSpot");
        }
        inline app::TokkInteractionSpot__Enum* create() {
            return il2cpp::create_object<app::TokkInteractionSpot__Enum>(get_class());
        }
    } // namespace TokkInteractionSpot__Enum
} // namespace app::classes::types
