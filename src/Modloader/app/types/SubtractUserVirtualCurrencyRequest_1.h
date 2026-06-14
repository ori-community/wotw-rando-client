#pragma once
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest_1.h>
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubtractUserVirtualCurrencyRequest_1 {
        inline app::SubtractUserVirtualCurrencyRequest_1__Class** type_info() {
            static app::SubtractUserVirtualCurrencyRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubtractUserVirtualCurrencyRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047732F0));
            }
            return cache;
        }
        inline app::SubtractUserVirtualCurrencyRequest_1__Class* get_class() {
            return il2cpp::get_class<app::SubtractUserVirtualCurrencyRequest_1__Class>(type_info(), "PlayFab.ServerModels", "SubtractUserVirtualCurrencyRequest");
        }
        inline app::SubtractUserVirtualCurrencyRequest_1* create() {
            return il2cpp::create_object<app::SubtractUserVirtualCurrencyRequest_1>(get_class());
        }
    } // namespace SubtractUserVirtualCurrencyRequest_1
} // namespace app::classes::types
