#pragma once
#include <Modloader/app/structs/LinkGameCenterAccountResult.h>
#include <Modloader/app/structs/LinkGameCenterAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkGameCenterAccountResult {
        inline app::LinkGameCenterAccountResult__Class** type_info() {
            static app::LinkGameCenterAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkGameCenterAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0478A518));
            }
            return cache;
        }
        inline app::LinkGameCenterAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkGameCenterAccountResult__Class>(type_info(), "PlayFab.ClientModels", "LinkGameCenterAccountResult");
        }
        inline app::LinkGameCenterAccountResult* create() {
            return il2cpp::create_object<app::LinkGameCenterAccountResult>(get_class());
        }
    } // namespace LinkGameCenterAccountResult
} // namespace app::classes::types
