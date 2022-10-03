#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TradeStatus__Enum {
        namespace {
            app::TradeStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::TradeStatus__Enum__Class** type_info = &type_info_ref;
        inline app::TradeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TradeStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "TradeStatus");
        }
        inline app::TradeStatus__Enum* create() {
            return il2cpp::create_object<app::TradeStatus__Enum>(get_class());
        }
    } // namespace TradeStatus__Enum
} // namespace app::classes::types
