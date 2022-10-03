#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EvaluateException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EvaluateException__Class** type_info;
        inline app::EvaluateException__Class* get_class() {
            return il2cpp::get_class<app::EvaluateException__Class>(type_info, "System.Data", "EvaluateException");
        }
        inline app::EvaluateException* create() {
            return il2cpp::create_object<app::EvaluateException>(get_class());
        }
    } // namespace EvaluateException
} // namespace app::classes::types
