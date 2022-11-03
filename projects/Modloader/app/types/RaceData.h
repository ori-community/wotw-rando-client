#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceData {
        inline app::RaceData__Class** type_info = (app::RaceData__Class**)(modloader::win::memory::resolve_rva(0x04779160));
        inline app::RaceData__Class* get_class() {
            return il2cpp::get_class<app::RaceData__Class>(type_info, "Moon.Race", "RaceData");
        }
        inline app::RaceData* create() {
            return il2cpp::create_object<app::RaceData>(get_class());
        }
    } // namespace RaceData
} // namespace app::classes::types
