#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateController_c {
        inline app::UberStateController_c__Class** type_info = (app::UberStateController_c__Class**)(modloader::win::memory::resolve_rva(0x0478E478));
        inline app::UberStateController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateController_c__Class>(type_info, "Moon", "UberStateController", "<>c");
        }
        inline app::UberStateController_c* create() {
            return il2cpp::create_object<app::UberStateController_c>(get_class());
        }
    } // namespace UberStateController_c
} // namespace app::classes::types
