#pragma once
#include <Modloader/app/structs/PlayFabSimpleJson.h>
#include <Modloader/app/structs/PlayFabSimpleJson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSimpleJson {
        inline app::PlayFabSimpleJson__Class** type_info() {
            static app::PlayFabSimpleJson__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabSimpleJson__Class**)(modloader::win::memory::resolve_rva(0x04732E90));
            }
            return cache;
        }
        inline app::PlayFabSimpleJson__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSimpleJson__Class>(type_info(), "PlayFab.Json", "PlayFabSimpleJson");
        }
        inline app::PlayFabSimpleJson* create() {
            return il2cpp::create_object<app::PlayFabSimpleJson>(get_class());
        }
    } // namespace PlayFabSimpleJson
} // namespace app::classes::types
