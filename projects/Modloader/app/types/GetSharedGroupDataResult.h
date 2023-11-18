#pragma once
#include <Modloader/app/structs/GetSharedGroupDataResult.h>
#include <Modloader/app/structs/GetSharedGroupDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetSharedGroupDataResult {
        inline app::GetSharedGroupDataResult__Class** type_info() {
            static app::GetSharedGroupDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetSharedGroupDataResult__Class**)(modloader::win::memory::resolve_rva(0x04753780));
            }
            return cache;
        }
        inline app::GetSharedGroupDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataResult__Class>(type_info(), "PlayFab.ClientModels", "GetSharedGroupDataResult");
        }
        inline app::GetSharedGroupDataResult* create() {
            return il2cpp::create_object<app::GetSharedGroupDataResult>(get_class());
        }
    } // namespace GetSharedGroupDataResult
} // namespace app::classes::types
