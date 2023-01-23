#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadDebugMenuPage_c__Class.h>
#include <Modloader/app/structs/LoadDebugMenuPage_c.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_c {
        inline app::LoadDebugMenuPage_c__Class** type_info = (app::LoadDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x04784580));
        inline app::LoadDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadDebugMenuPage_c__Class>(type_info, "", "LoadDebugMenuPage", "<>c");
        }
        inline app::LoadDebugMenuPage_c* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_c>(get_class());
        }
    } // namespace LoadDebugMenuPage_c
} // namespace app::classes::types
