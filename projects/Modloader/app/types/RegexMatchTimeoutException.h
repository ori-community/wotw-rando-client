#pragma once
#include <Modloader/app/structs/RegexMatchTimeoutException.h>
#include <Modloader/app/structs/RegexMatchTimeoutException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexMatchTimeoutException {
        inline app::RegexMatchTimeoutException__Class** type_info() {
            static app::RegexMatchTimeoutException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexMatchTimeoutException__Class**)(modloader::win::memory::resolve_rva(0x0472F7F0));
            }
            return cache;
        }
        inline app::RegexMatchTimeoutException__Class* get_class() {
            return il2cpp::get_class<app::RegexMatchTimeoutException__Class>(type_info(), "System.Text.RegularExpressions", "RegexMatchTimeoutException");
        }
        inline app::RegexMatchTimeoutException* create() {
            return il2cpp::create_object<app::RegexMatchTimeoutException>(get_class());
        }
    } // namespace RegexMatchTimeoutException
} // namespace app::classes::types
