#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsMissingVersionConstructorException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsMissingVersionConstructorException__Class** type_info;
        inline app::fsMissingVersionConstructorException__Class* get_class() {
            return il2cpp::get_class<app::fsMissingVersionConstructorException__Class>(type_info, "FullSerializer", "fsMissingVersionConstructorException");
        }
        inline app::fsMissingVersionConstructorException* create() {
            return il2cpp::create_object<app::fsMissingVersionConstructorException>(get_class());
        }
    } // namespace fsMissingVersionConstructorException
} // namespace app::classes::types
