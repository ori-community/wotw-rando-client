#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetInvocationException {
        inline app::TargetInvocationException__Class** type_info = (app::TargetInvocationException__Class**)(modloader::win::memory::resolve_rva(0x04735E28));
        inline app::TargetInvocationException__Class* get_class() {
            return il2cpp::get_class<app::TargetInvocationException__Class>(type_info, "System.Reflection", "TargetInvocationException");
        }
        inline app::TargetInvocationException* create() {
            return il2cpp::create_object<app::TargetInvocationException>(get_class());
        }
    } // namespace TargetInvocationException
} // namespace app::classes::types
