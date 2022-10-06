#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionHandler__Class** type_info;
        inline app::ExceptionHandler__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandler__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExceptionHandler");
        }
        inline app::ExceptionHandler* create() {
            return il2cpp::create_object<app::ExceptionHandler>(get_class());
        }
        inline app::ExceptionHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::ExceptionHandler__Array>(get_class(), size);
        }
        inline app::ExceptionHandler__Array* create_array(const std::vector<app::ExceptionHandler*>& items) {
            return il2cpp::array_new<app::ExceptionHandler__Array>(get_class(), items);
        }
    } // namespace ExceptionHandler
} // namespace app::classes::types
