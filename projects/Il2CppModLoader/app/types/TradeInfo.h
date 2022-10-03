#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TradeInfo {
        namespace {
            app::TradeInfo__Class* type_info_ref = nullptr;
        }
        app::TradeInfo__Class** type_info = &type_info_ref;
        inline app::TradeInfo__Class* get_class() {
            return il2cpp::get_class<app::TradeInfo__Class>(type_info, "PlayFab.ClientModels", "TradeInfo");
        }
        inline app::TradeInfo* create() {
            return il2cpp::create_object<app::TradeInfo>(get_class());
        }
        inline app::TradeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TradeInfo__Array>(get_class(), size);
        }
    } // namespace TradeInfo
} // namespace app::classes::types
