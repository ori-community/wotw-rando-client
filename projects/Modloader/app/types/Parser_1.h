#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Parser_1 {
        inline app::Parser_1__Class** type_info = (app::Parser_1__Class**)(modloader::win::memory::resolve_rva(0x0474CC40));
        inline app::Parser_1__Class* get_class() {
            return il2cpp::get_class<app::Parser_1__Class>(type_info, "System.Xml.Schema", "Parser");
        }
        inline app::Parser_1* create() {
            return il2cpp::create_object<app::Parser_1>(get_class());
        }
    } // namespace Parser_1
} // namespace app::classes::types
