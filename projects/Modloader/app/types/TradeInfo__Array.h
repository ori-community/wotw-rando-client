#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TradeInfo__Array__Class.h>
#include <Modloader/app/structs/TradeInfo__Array.h>

namespace app::classes::types {
    namespace TradeInfo__Array {
        namespace {
            inline app::TradeInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::TradeInfo__Array__Class** type_info = &type_info_ref;
        inline app::TradeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TradeInfo__Array__Class>(type_info, "PlayFab.ClientModels", "TradeInfo[]");
        }
        inline app::TradeInfo__Array* create() {
            return il2cpp::create_object<app::TradeInfo__Array>(get_class());
        }
    } // namespace TradeInfo__Array
} // namespace app::classes::types
