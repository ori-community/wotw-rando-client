#pragma once
#include <Modloader/app/structs/TradeStatus__Enum.h>
#include <Modloader/app/structs/TradeStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TradeStatus__Enum {
        inline app::TradeStatus__Enum__Class** type_info() {
            static app::TradeStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TradeStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TradeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TradeStatus__Enum__Class>(type_info(), "PlayFab.ClientModels", "TradeStatus");
        }
        inline app::TradeStatus__Enum* create() {
            return il2cpp::create_object<app::TradeStatus__Enum>(get_class());
        }
    } // namespace TradeStatus__Enum
} // namespace app::classes::types
