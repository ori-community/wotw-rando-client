#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Lexer {
        inline app::Lexer__Class** type_info = (app::Lexer__Class**)(modloader::win::memory::resolve_rva(0x04786AF8));
        inline app::Lexer__Class* get_class() {
            return il2cpp::get_class<app::Lexer__Class>(type_info, "System.Net.Http.Headers", "Lexer");
        }
        inline app::Lexer* create() {
            return il2cpp::create_object<app::Lexer>(get_class());
        }
    } // namespace Lexer
} // namespace app::classes::types
