#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HtmlTernaryTree {
        inline app::HtmlTernaryTree__Class** type_info = (app::HtmlTernaryTree__Class**)(modloader::win::memory::resolve_rva(0x04793600));
        inline app::HtmlTernaryTree__Class* get_class() {
            return il2cpp::get_class<app::HtmlTernaryTree__Class>(type_info, "System.Xml", "HtmlTernaryTree");
        }
        inline app::HtmlTernaryTree* create() {
            return il2cpp::create_object<app::HtmlTernaryTree>(get_class());
        }
    } // namespace HtmlTernaryTree
} // namespace app::classes::types
