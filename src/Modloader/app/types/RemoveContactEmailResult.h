#pragma once
#include <Modloader/app/structs/RemoveContactEmailResult.h>
#include <Modloader/app/structs/RemoveContactEmailResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveContactEmailResult {
        inline app::RemoveContactEmailResult__Class** type_info() {
            static app::RemoveContactEmailResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveContactEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04726800));
            }
            return cache;
        }
        inline app::RemoveContactEmailResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveContactEmailResult__Class>(type_info(), "PlayFab.ClientModels", "RemoveContactEmailResult");
        }
        inline app::RemoveContactEmailResult* create() {
            return il2cpp::create_object<app::RemoveContactEmailResult>(get_class());
        }
    } // namespace RemoveContactEmailResult
} // namespace app::classes::types
