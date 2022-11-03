#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceStateDefinition_TurbulenceState {
        inline app::TurbulenceStateDefinition_TurbulenceState__Class** type_info = (app::TurbulenceStateDefinition_TurbulenceState__Class**)(modloader::win::memory::resolve_rva(0x04786348));
        inline app::TurbulenceStateDefinition_TurbulenceState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceStateDefinition_TurbulenceState__Class>(type_info, "", "TurbulenceStateDefinition", "TurbulenceState");
        }
        inline app::TurbulenceStateDefinition_TurbulenceState* create() {
            return il2cpp::create_object<app::TurbulenceStateDefinition_TurbulenceState>(get_class());
        }
        inline app::TurbulenceStateDefinition_TurbulenceState__Array* create_array(int size) {
            return il2cpp::array_new<app::TurbulenceStateDefinition_TurbulenceState__Array>(get_class(), size);
        }
        inline app::TurbulenceStateDefinition_TurbulenceState__Array* create_array(const std::vector<app::TurbulenceStateDefinition_TurbulenceState*>& items) {
            return il2cpp::array_new<app::TurbulenceStateDefinition_TurbulenceState__Array>(get_class(), items);
        }
    } // namespace TurbulenceStateDefinition_TurbulenceState
} // namespace app::classes::types
