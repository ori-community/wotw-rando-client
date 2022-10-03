#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieTokenizer_RecognizedAttribute__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieTokenizer_RecognizedAttribute__Array__Class** type_info;
        inline app::CookieTokenizer_RecognizedAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::CookieTokenizer_RecognizedAttribute__Array__Class>(type_info, "System.Net", "CookieTokenizer+RecognizedAttribute[]");
        }
        inline app::CookieTokenizer_RecognizedAttribute__Array* create() {
            return il2cpp::create_object<app::CookieTokenizer_RecognizedAttribute__Array>(get_class());
        }
    } // namespace CookieTokenizer_RecognizedAttribute__Array
} // namespace app::classes::types
