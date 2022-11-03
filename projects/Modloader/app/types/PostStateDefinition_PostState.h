#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostStateDefinition_PostState {
        inline app::PostStateDefinition_PostState__Class** type_info = (app::PostStateDefinition_PostState__Class**)(modloader::win::memory::resolve_rva(0x0471E7B0));
        inline app::PostStateDefinition_PostState__Class* get_class() {
            return il2cpp::get_nested_class<app::PostStateDefinition_PostState__Class>(type_info, "", "PostStateDefinition", "PostState");
        }
        inline app::PostStateDefinition_PostState* create() {
            return il2cpp::create_object<app::PostStateDefinition_PostState>(get_class());
        }
        inline app::PostStateDefinition_PostState__Array* create_array(int size) {
            return il2cpp::array_new<app::PostStateDefinition_PostState__Array>(get_class(), size);
        }
        inline app::PostStateDefinition_PostState__Array* create_array(const std::vector<app::PostStateDefinition_PostState*>& items) {
            return il2cpp::array_new<app::PostStateDefinition_PostState__Array>(get_class(), items);
        }
    } // namespace PostStateDefinition_PostState
} // namespace app::classes::types
