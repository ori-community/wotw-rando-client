#pragma once
#include <Modloader/app/structs/RaceData.h>
#include <Modloader/app/structs/RaceData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceData {
        inline app::RaceData__Class** type_info() {
            static app::RaceData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceData__Class**)(modloader::win::memory::resolve_rva(0x04779160));
            }
            return cache;
        }
        inline app::RaceData__Class* get_class() {
            return il2cpp::get_class<app::RaceData__Class>(type_info(), "Moon.Race", "RaceData");
        }
        inline app::RaceData* create() {
            return il2cpp::create_object<app::RaceData>(get_class());
        }
    } // namespace RaceData
} // namespace app::classes::types
