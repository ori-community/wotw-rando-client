#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokkInteractionSpot__Enum {
        namespace {
            app::TokkInteractionSpot__Enum__Class* type_info_ref = nullptr;
        }
        app::TokkInteractionSpot__Enum__Class** type_info = &type_info_ref;
        inline app::TokkInteractionSpot__Enum__Class* get_class() {
            return il2cpp::get_class<app::TokkInteractionSpot__Enum__Class>(type_info, "", "TokkInteractionSpot");
        }
        inline app::TokkInteractionSpot__Enum* create() {
            return il2cpp::create_object<app::TokkInteractionSpot__Enum>(get_class());
        }
    } // namespace TokkInteractionSpot__Enum
} // namespace app::classes::types
