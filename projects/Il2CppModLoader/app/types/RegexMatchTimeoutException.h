#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexMatchTimeoutException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexMatchTimeoutException__Class** type_info;
        inline app::RegexMatchTimeoutException__Class* get_class() {
            return il2cpp::get_class<app::RegexMatchTimeoutException__Class>(type_info, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
        }
        inline app::RegexMatchTimeoutException* create() {
            return il2cpp::create_object<app::RegexMatchTimeoutException>(get_class());
        }
    } // namespace RegexMatchTimeoutException
} // namespace app::classes::types
