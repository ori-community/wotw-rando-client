#pragma once
#include <Modloader/app/structs/ModifyUserVirtualCurrencyResult_1.h>
#include <Modloader/app/structs/ModifyUserVirtualCurrencyResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifyUserVirtualCurrencyResult_1 {
        inline app::ModifyUserVirtualCurrencyResult_1__Class** type_info() {
            static app::ModifyUserVirtualCurrencyResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModifyUserVirtualCurrencyResult_1__Class**)(modloader::win::memory::resolve_rva(0x04729748));
            }
            return cache;
        }
        inline app::ModifyUserVirtualCurrencyResult_1__Class* get_class() {
            return il2cpp::get_class<app::ModifyUserVirtualCurrencyResult_1__Class>(type_info(), "PlayFab.ServerModels", "ModifyUserVirtualCurrencyResult");
        }
        inline app::ModifyUserVirtualCurrencyResult_1* create() {
            return il2cpp::create_object<app::ModifyUserVirtualCurrencyResult_1>(get_class());
        }
    } // namespace ModifyUserVirtualCurrencyResult_1
} // namespace app::classes::types
