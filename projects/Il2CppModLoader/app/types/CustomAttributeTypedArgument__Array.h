#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomAttributeTypedArgument__Array {
        inline app::CustomAttributeTypedArgument__Array__Class** type_info = (app::CustomAttributeTypedArgument__Array__Class**)(modloader::win::memory::resolve_rva(0x0478FCB8));
        inline app::CustomAttributeTypedArgument__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeTypedArgument__Array__Class>(type_info, "System.Reflection", "CustomAttributeTypedArgument[]");
        }
        inline app::CustomAttributeTypedArgument__Array* create() {
            return il2cpp::create_object<app::CustomAttributeTypedArgument__Array>(get_class());
        }
    } // namespace CustomAttributeTypedArgument__Array
} // namespace app::classes::types
