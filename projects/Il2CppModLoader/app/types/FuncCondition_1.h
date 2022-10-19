#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FuncCondition_1 {
        inline app::FuncCondition_1__Class** type_info = (app::FuncCondition_1__Class**)(modloader::win::memory::resolve_rva(0x0474E778));
        inline app::FuncCondition_1__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition_1__Class>(type_info, "fsm", "FuncCondition");
        }
        inline app::FuncCondition_1* create() {
            return il2cpp::create_object<app::FuncCondition_1>(get_class());
        }
        inline app::FuncCondition_1__Array* create_array(int size) {
            return il2cpp::array_new<app::FuncCondition_1__Array>(get_class(), size);
        }
        inline app::FuncCondition_1__Array* create_array(const std::vector<app::FuncCondition_1*>& items) {
            return il2cpp::array_new<app::FuncCondition_1__Array>(get_class(), items);
        }
    } // namespace FuncCondition_1
} // namespace app::classes::types
