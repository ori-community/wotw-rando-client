#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionDispatchInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionDispatchInfo__Array__Class** type_info;
        inline app::ExceptionDispatchInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionDispatchInfo__Array__Class>(type_info, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo[]");
        }
        inline app::ExceptionDispatchInfo__Array* create() {
            return il2cpp::create_object<app::ExceptionDispatchInfo__Array>(get_class());
        }
    } // namespace ExceptionDispatchInfo__Array
} // namespace app::classes::types
