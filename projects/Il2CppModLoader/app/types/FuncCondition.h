#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FuncCondition {
        inline app::FuncCondition__Class** type_info = (app::FuncCondition__Class**)(modloader::win::memory::resolve_rva(0x0476E630));
        inline app::FuncCondition__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition__Class>(type_info, "Moon.InteractionGraph", "FuncCondition");
        }
        inline app::FuncCondition* create() {
            return il2cpp::create_object<app::FuncCondition>(get_class());
        }
        inline app::FuncCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::FuncCondition__Array>(get_class(), size);
        }
        inline app::FuncCondition__Array* create_array(const std::vector<app::FuncCondition*>& items) {
            return il2cpp::array_new<app::FuncCondition__Array>(get_class(), items);
        }
    } // namespace FuncCondition
} // namespace app::classes::types
