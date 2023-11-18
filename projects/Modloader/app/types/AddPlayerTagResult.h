#pragma once
#include <Modloader/app/structs/AddPlayerTagResult.h>
#include <Modloader/app/structs/AddPlayerTagResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddPlayerTagResult {
        inline app::AddPlayerTagResult__Class** type_info() {
            static app::AddPlayerTagResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddPlayerTagResult__Class**)(modloader::win::memory::resolve_rva(0x04746AF8));
            }
            return cache;
        }
        inline app::AddPlayerTagResult__Class* get_class() {
            return il2cpp::get_class<app::AddPlayerTagResult__Class>(type_info(), "PlayFab.ServerModels", "AddPlayerTagResult");
        }
        inline app::AddPlayerTagResult* create() {
            return il2cpp::create_object<app::AddPlayerTagResult>(get_class());
        }
    } // namespace AddPlayerTagResult
} // namespace app::classes::types
