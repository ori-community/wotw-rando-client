#pragma once
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult.h>
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotifyMatchmakerPlayerLeftResult {
        inline app::NotifyMatchmakerPlayerLeftResult__Class** type_info() {
            static app::NotifyMatchmakerPlayerLeftResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotifyMatchmakerPlayerLeftResult__Class**)(modloader::win::memory::resolve_rva(0x04798998));
            }
            return cache;
        }
        inline app::NotifyMatchmakerPlayerLeftResult__Class* get_class() {
            return il2cpp::get_class<app::NotifyMatchmakerPlayerLeftResult__Class>(type_info(), "PlayFab.ServerModels", "NotifyMatchmakerPlayerLeftResult");
        }
        inline app::NotifyMatchmakerPlayerLeftResult* create() {
            return il2cpp::create_object<app::NotifyMatchmakerPlayerLeftResult>(get_class());
        }
    } // namespace NotifyMatchmakerPlayerLeftResult
} // namespace app::classes::types
