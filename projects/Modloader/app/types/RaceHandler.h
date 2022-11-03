#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceHandler {
        inline app::RaceHandler__Class** type_info = (app::RaceHandler__Class**)(modloader::win::memory::resolve_rva(0x0475B168));
        inline app::RaceHandler__Class* get_class() {
            return il2cpp::get_class<app::RaceHandler__Class>(type_info, "", "RaceHandler");
        }
        inline app::RaceHandler* create() {
            return il2cpp::create_object<app::RaceHandler>(get_class());
        }
    } // namespace RaceHandler
} // namespace app::classes::types
