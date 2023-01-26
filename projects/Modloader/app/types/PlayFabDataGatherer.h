#pragma once
#include <Modloader/app/structs/PlayFabDataGatherer.h>
#include <Modloader/app/structs/PlayFabDataGatherer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabDataGatherer {
        inline app::PlayFabDataGatherer__Class** type_info() {
            static app::PlayFabDataGatherer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabDataGatherer__Class**)(modloader::win::memory::resolve_rva(0x0478C308));
            }
            return cache;
        }
        inline app::PlayFabDataGatherer__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataGatherer__Class>(type_info(), "PlayFab", "PlayFabDataGatherer");
        }
        inline app::PlayFabDataGatherer* create() {
            return il2cpp::create_object<app::PlayFabDataGatherer>(get_class());
        }
    } // namespace PlayFabDataGatherer
} // namespace app::classes::types
