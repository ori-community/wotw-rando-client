#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexTree {
        inline app::RegexTree__Class** type_info = (app::RegexTree__Class**)(modloader::win::memory::resolve_rva(0x047779F0));
        inline app::RegexTree__Class* get_class() {
            return il2cpp::get_class<app::RegexTree__Class>(type_info, "System.Text.RegularExpressions", "RegexTree");
        }
        inline app::RegexTree* create() {
            return il2cpp::create_object<app::RegexTree>(get_class());
        }
    } // namespace RegexTree
} // namespace app::classes::types
