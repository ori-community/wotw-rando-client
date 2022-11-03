#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Switch_1 {
        inline app::Switch_1__Class** type_info = (app::Switch_1__Class**)(modloader::win::memory::resolve_rva(0x0476E9F0));
        inline app::Switch_1__Class* get_class() {
            return il2cpp::get_class<app::Switch_1__Class>(type_info, "AK.Wwise", "Switch");
        }
        inline app::Switch_1* create() {
            return il2cpp::create_object<app::Switch_1>(get_class());
        }
    } // namespace Switch_1
} // namespace app::classes::types
