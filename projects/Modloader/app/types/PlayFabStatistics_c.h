#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabStatistics_c__Class.h>
#include <Modloader/app/structs/PlayFabStatistics_c.h>

namespace app::classes::types {
    namespace PlayFabStatistics_c {
        inline app::PlayFabStatistics_c__Class** type_info = (app::PlayFabStatistics_c__Class**)(modloader::win::memory::resolve_rva(0x04741C98));
        inline app::PlayFabStatistics_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabStatistics_c__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics", "<>c");
        }
        inline app::PlayFabStatistics_c* create() {
            return il2cpp::create_object<app::PlayFabStatistics_c>(get_class());
        }
    } // namespace PlayFabStatistics_c
} // namespace app::classes::types
