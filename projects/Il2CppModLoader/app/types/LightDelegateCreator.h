#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightDelegateCreator {
        inline app::LightDelegateCreator__Class** type_info = (app::LightDelegateCreator__Class**)(modloader::win::memory::resolve_rva(0x04735408));
        inline app::LightDelegateCreator__Class* get_class() {
            return il2cpp::get_class<app::LightDelegateCreator__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightDelegateCreator");
        }
        inline app::LightDelegateCreator* create() {
            return il2cpp::create_object<app::LightDelegateCreator>(get_class());
        }
    } // namespace LightDelegateCreator
} // namespace app::classes::types
