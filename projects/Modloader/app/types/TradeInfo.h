#pragma once
#include <Modloader/app/structs/TradeInfo.h>
#include <Modloader/app/structs/TradeInfo__Array.h>
#include <Modloader/app/structs/TradeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TradeInfo {
        inline app::TradeInfo__Class** type_info() {
            static app::TradeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TradeInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TradeInfo__Class* get_class() {
            return il2cpp::get_class<app::TradeInfo__Class>(type_info(), "PlayFab.ClientModels", "TradeInfo");
        }
        inline app::TradeInfo* create() {
            return il2cpp::create_object<app::TradeInfo>(get_class());
        }
        inline app::TradeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TradeInfo__Array>(get_class(), size);
        }
        inline app::TradeInfo__Array* create_array(const std::vector<app::TradeInfo*>& items) {
            return il2cpp::array_new<app::TradeInfo__Array>(get_class(), items);
        }
    } // namespace TradeInfo
} // namespace app::classes::types
