#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonShadingZoneTarget__Class.h>

namespace app::classes::types {
    namespace IMoonShadingZoneTarget {
        inline app::IMoonShadingZoneTarget__Class** type_info = (app::IMoonShadingZoneTarget__Class**)(modloader::win::memory::resolve_rva(0x0474B990));
        inline app::IMoonShadingZoneTarget__Class* get_class() {
            return il2cpp::get_class<app::IMoonShadingZoneTarget__Class>(type_info, "", "IMoonShadingZoneTarget");
        }
    } // namespace IMoonShadingZoneTarget
} // namespace app::classes::types
