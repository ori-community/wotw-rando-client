#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FuncCondition_1__Array {
        inline app::FuncCondition_1__Array__Class** type_info = (app::FuncCondition_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04719E68));
        inline app::FuncCondition_1__Array__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition_1__Array__Class>(type_info, "fsm", "FuncCondition[]");
        }
        inline app::FuncCondition_1__Array* create() {
            return il2cpp::create_object<app::FuncCondition_1__Array>(get_class());
        }
    } // namespace FuncCondition_1__Array
} // namespace app::classes::types
