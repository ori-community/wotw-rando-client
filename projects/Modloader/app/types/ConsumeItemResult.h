#pragma once
#include <Modloader/app/structs/ConsumeItemResult.h>
#include <Modloader/app/structs/ConsumeItemResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsumeItemResult {
        inline app::ConsumeItemResult__Class** type_info() {
            static app::ConsumeItemResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsumeItemResult__Class**)(modloader::win::memory::resolve_rva(0x0472AF78));
            }
            return cache;
        }
        inline app::ConsumeItemResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemResult__Class>(type_info(), "PlayFab.ClientModels", "ConsumeItemResult");
        }
        inline app::ConsumeItemResult* create() {
            return il2cpp::create_object<app::ConsumeItemResult>(get_class());
        }
    } // namespace ConsumeItemResult
} // namespace app::classes::types
