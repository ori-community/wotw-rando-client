#pragma once
#include <Modloader/app/structs/SettingsSectionInternal.h>
#include <Modloader/app/structs/SettingsSectionInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsSectionInternal {
        inline app::SettingsSectionInternal__Class** type_info() {
            static app::SettingsSectionInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SettingsSectionInternal__Class**)(modloader::win::memory::resolve_rva(0x04721D70));
            }
            return cache;
        }
        inline app::SettingsSectionInternal__Class* get_class() {
            return il2cpp::get_class<app::SettingsSectionInternal__Class>(type_info(), "System.Net.Configuration", "SettingsSectionInternal");
        }
        inline app::SettingsSectionInternal* create() {
            return il2cpp::create_object<app::SettingsSectionInternal>(get_class());
        }
    } // namespace SettingsSectionInternal
} // namespace app::classes::types
