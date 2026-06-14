#pragma once
#include <Modloader/app/structs/TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48.h>
#include <Modloader/app/structs/TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48 {
        inline app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class** type_info() {
            static app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class**)(modloader::win::memory::resolve_rva(0x047681B0));
            }
            return cache;
        }
        inline app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class* get_class() {
            return il2cpp::get_nested_class<app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48__Class>(type_info(), "", "TitleScreenManager", "<WaitToShowFirstTimeQualitySettings>d__48");
        }
        inline app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48* create() {
            return il2cpp::create_object<app::TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48>(get_class());
        }
    } // namespace TitleScreenManager_WaitToShowFirstTimeQualitySettings_d_48
} // namespace app::classes::types
