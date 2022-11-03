#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MiscDebugMenuPage_c {
        inline app::MiscDebugMenuPage_c__Class** type_info = (app::MiscDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x04795678));
        inline app::MiscDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MiscDebugMenuPage_c__Class>(type_info, "", "MiscDebugMenuPage", "<>c");
        }
        inline app::MiscDebugMenuPage_c* create() {
            return il2cpp::create_object<app::MiscDebugMenuPage_c>(get_class());
        }
    } // namespace MiscDebugMenuPage_c
} // namespace app::classes::types
