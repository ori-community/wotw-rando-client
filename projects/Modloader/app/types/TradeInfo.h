#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TradeInfo__Class.h>
#include <Modloader/app/structs/TradeInfo.h>
#include <Modloader/app/structs/TradeInfo__Array.h>

namespace app::classes::types {
    namespace TradeInfo {
        namespace {
            inline app::TradeInfo__Class* type_info_ref = nullptr;
        }
        inline app::TradeInfo__Class** type_info = &type_info_ref;
        inline app::TradeInfo__Class* get_class() {
            return il2cpp::get_class<app::TradeInfo__Class>(type_info, "PlayFab.ClientModels", "TradeInfo");
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
