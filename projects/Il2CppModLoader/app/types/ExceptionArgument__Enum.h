#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionArgument__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionArgument__Enum__Class** type_info;
        inline app::ExceptionArgument__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExceptionArgument__Enum__Class>(type_info, "System", "ExceptionArgument");
        }
        inline app::ExceptionArgument__Enum* create() {
            return il2cpp::create_object<app::ExceptionArgument__Enum>(get_class());
        }
    } // namespace ExceptionArgument__Enum
} // namespace app::classes::types
