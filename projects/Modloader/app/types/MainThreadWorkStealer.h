#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MainThreadWorkStealer {
        inline app::MainThreadWorkStealer__Class** type_info = (app::MainThreadWorkStealer__Class**)(modloader::win::memory::resolve_rva(0x047581D0));
        inline app::MainThreadWorkStealer__Class* get_class() {
            return il2cpp::get_class<app::MainThreadWorkStealer__Class>(type_info, "usedStandaloneScripts", "MainThreadWorkStealer");
        }
        inline app::MainThreadWorkStealer* create() {
            return il2cpp::create_object<app::MainThreadWorkStealer>(get_class());
        }
    } // namespace MainThreadWorkStealer
} // namespace app::classes::types
