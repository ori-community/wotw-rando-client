#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabDataGatherer__Class.h>
#include <Modloader/app/structs/PlayFabDataGatherer.h>

namespace app::classes::types {
    namespace PlayFabDataGatherer {
        inline app::PlayFabDataGatherer__Class** type_info = (app::PlayFabDataGatherer__Class**)(modloader::win::memory::resolve_rva(0x0478C308));
        inline app::PlayFabDataGatherer__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataGatherer__Class>(type_info, "PlayFab", "PlayFabDataGatherer");
        }
        inline app::PlayFabDataGatherer* create() {
            return il2cpp::create_object<app::PlayFabDataGatherer>(get_class());
        }
    } // namespace PlayFabDataGatherer
} // namespace app::classes::types
