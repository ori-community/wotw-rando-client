#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SyntaxErrorException {
        inline app::SyntaxErrorException__Class** type_info = (app::SyntaxErrorException__Class**)(modloader::win::memory::resolve_rva(0x04766408));
        inline app::SyntaxErrorException__Class* get_class() {
            return il2cpp::get_class<app::SyntaxErrorException__Class>(type_info, "System.Data", "SyntaxErrorException");
        }
        inline app::SyntaxErrorException* create() {
            return il2cpp::create_object<app::SyntaxErrorException>(get_class());
        }
    } // namespace SyntaxErrorException
} // namespace app::classes::types
