#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LagoonContactSwitch__Array {
        inline app::LagoonContactSwitch__Array__Class** type_info = (app::LagoonContactSwitch__Array__Class**)(modloader::win::memory::resolve_rva(0x04702658));
        inline app::LagoonContactSwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitch__Array__Class>(type_info, "", "LagoonContactSwitch[]");
        }
        inline app::LagoonContactSwitch__Array* create() {
            return il2cpp::create_object<app::LagoonContactSwitch__Array>(get_class());
        }
    } // namespace LagoonContactSwitch__Array
} // namespace app::classes::types
