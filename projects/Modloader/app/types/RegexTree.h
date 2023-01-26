#pragma once
#include <Modloader/app/structs/RegexTree.h>
#include <Modloader/app/structs/RegexTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexTree {
        inline app::RegexTree__Class** type_info() {
            static app::RegexTree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexTree__Class**)(modloader::win::memory::resolve_rva(0x047779F0));
            }
            return cache;
        }
        inline app::RegexTree__Class* get_class() {
            return il2cpp::get_class<app::RegexTree__Class>(type_info(), "System.Text.RegularExpressions", "RegexTree");
        }
        inline app::RegexTree* create() {
            return il2cpp::create_object<app::RegexTree>(get_class());
        }
    } // namespace RegexTree
} // namespace app::classes::types
