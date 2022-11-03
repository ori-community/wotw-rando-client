#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieTokenizer_RecognizedAttribute__Array {
        inline app::CookieTokenizer_RecognizedAttribute__Array__Class** type_info = (app::CookieTokenizer_RecognizedAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D278));
        inline app::CookieTokenizer_RecognizedAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::CookieTokenizer_RecognizedAttribute__Array__Class>(type_info, "System.Net", "CookieTokenizer+RecognizedAttribute[]");
        }
        inline app::CookieTokenizer_RecognizedAttribute__Array* create() {
            return il2cpp::create_object<app::CookieTokenizer_RecognizedAttribute__Array>(get_class());
        }
    } // namespace CookieTokenizer_RecognizedAttribute__Array
} // namespace app::classes::types
