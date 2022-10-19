#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexMatchTimeoutException {
        inline app::RegexMatchTimeoutException__Class** type_info = (app::RegexMatchTimeoutException__Class**)(modloader::win::memory::resolve_rva(0x0472F7F0));
        inline app::RegexMatchTimeoutException__Class* get_class() {
            return il2cpp::get_class<app::RegexMatchTimeoutException__Class>(type_info, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
        }
        inline app::RegexMatchTimeoutException* create() {
            return il2cpp::create_object<app::RegexMatchTimeoutException>(get_class());
        }
    } // namespace RegexMatchTimeoutException
} // namespace app::classes::types
