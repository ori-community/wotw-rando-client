#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FuncAction {
        inline app::FuncAction__Class** type_info = (app::FuncAction__Class**)(modloader::win::memory::resolve_rva(0x04772F00));
        inline app::FuncAction__Class* get_class() {
            return il2cpp::get_class<app::FuncAction__Class>(type_info, "", "FuncAction");
        }
        inline app::FuncAction* create() {
            return il2cpp::create_object<app::FuncAction>(get_class());
        }
    } // namespace FuncAction
} // namespace app::classes::types
