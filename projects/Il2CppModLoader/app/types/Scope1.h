#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Scope1 {
        inline app::Scope1__Class** type_info = (app::Scope1__Class**)(modloader::win::memory::resolve_rva(0x04746348));
        inline app::Scope1__Class* get_class() {
            return il2cpp::get_class<app::Scope1__Class>(type_info, "System.Linq.Expressions", "Scope1");
        }
        inline app::Scope1* create() {
            return il2cpp::create_object<app::Scope1>(get_class());
        }
    } // namespace Scope1
} // namespace app::classes::types
