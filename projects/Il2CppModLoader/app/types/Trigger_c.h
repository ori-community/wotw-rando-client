#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Trigger_c {
        inline app::Trigger_c__Class** type_info = (app::Trigger_c__Class**)(modloader::win::memory::resolve_rva(0x0471D760));
        inline app::Trigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Trigger_c__Class>(type_info, "", "Trigger", "<>c");
        }
        inline app::Trigger_c* create() {
            return il2cpp::create_object<app::Trigger_c>(get_class());
        }
    } // namespace Trigger_c
} // namespace app::classes::types
