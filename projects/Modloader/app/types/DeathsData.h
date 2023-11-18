#pragma once
#include <Modloader/app/structs/DeathsData.h>
#include <Modloader/app/structs/DeathsData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathsData {
        inline app::DeathsData__Class** type_info() {
            static app::DeathsData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeathsData__Class**)(modloader::win::memory::resolve_rva(0x04761638));
            }
            return cache;
        }
        inline app::DeathsData__Class* get_class() {
            return il2cpp::get_class<app::DeathsData__Class>(type_info(), "", "DeathsData");
        }
        inline app::DeathsData* create() {
            return il2cpp::create_object<app::DeathsData>(get_class());
        }
    } // namespace DeathsData
} // namespace app::classes::types
