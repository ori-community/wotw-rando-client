#pragma once
#include <Modloader/app/structs/TradeInfo__Array.h>
#include <Modloader/app/structs/TradeInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TradeInfo__Array {
        inline app::TradeInfo__Array__Class** type_info() {
            static app::TradeInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TradeInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TradeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TradeInfo__Array__Class>(type_info(), "PlayFab.ClientModels", "TradeInfo[]");
        }
        inline app::TradeInfo__Array* create() {
            return il2cpp::create_object<app::TradeInfo__Array>(get_class());
        }
    } // namespace TradeInfo__Array
} // namespace app::classes::types
