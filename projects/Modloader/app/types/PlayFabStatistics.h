#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabStatistics__Class.h>
#include <Modloader/app/structs/PlayFabStatistics.h>

namespace app::classes::types {
    namespace PlayFabStatistics {
        inline app::PlayFabStatistics__Class** type_info = (app::PlayFabStatistics__Class**)(modloader::win::memory::resolve_rva(0x0476A318));
        inline app::PlayFabStatistics__Class* get_class() {
            return il2cpp::get_class<app::PlayFabStatistics__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics");
        }
        inline app::PlayFabStatistics* create() {
            return il2cpp::create_object<app::PlayFabStatistics>(get_class());
        }
    } // namespace PlayFabStatistics
} // namespace app::classes::types
