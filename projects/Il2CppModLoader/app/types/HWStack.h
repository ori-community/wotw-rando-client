#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HWStack {
        inline app::HWStack__Class** type_info = (app::HWStack__Class**)(modloader::win::memory::resolve_rva(0x04785BD0));
        inline app::HWStack__Class* get_class() {
            return il2cpp::get_class<app::HWStack__Class>(type_info, "System.Xml", "HWStack");
        }
        inline app::HWStack* create() {
            return il2cpp::create_object<app::HWStack>(get_class());
        }
    } // namespace HWStack
} // namespace app::classes::types
