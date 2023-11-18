#pragma once
#include <Modloader/app/structs/BootConfigData.h>
#include <Modloader/app/structs/BootConfigData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BootConfigData {
        inline app::BootConfigData__Class** type_info() {
            static app::BootConfigData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BootConfigData__Class**)(modloader::win::memory::resolve_rva(0x04746358));
            }
            return cache;
        }
        inline app::BootConfigData__Class* get_class() {
            return il2cpp::get_class<app::BootConfigData__Class>(type_info(), "UnityEngine", "BootConfigData");
        }
        inline app::BootConfigData* create() {
            return il2cpp::create_object<app::BootConfigData>(get_class());
        }
    } // namespace BootConfigData
} // namespace app::classes::types
