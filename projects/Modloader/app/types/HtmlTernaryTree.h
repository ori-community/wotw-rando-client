#pragma once
#include <Modloader/app/structs/HtmlTernaryTree.h>
#include <Modloader/app/structs/HtmlTernaryTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HtmlTernaryTree {
        inline app::HtmlTernaryTree__Class** type_info() {
            static app::HtmlTernaryTree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HtmlTernaryTree__Class**)(modloader::win::memory::resolve_rva(0x04793600));
            }
            return cache;
        }
        inline app::HtmlTernaryTree__Class* get_class() {
            return il2cpp::get_class<app::HtmlTernaryTree__Class>(type_info(), "System.Xml", "HtmlTernaryTree");
        }
        inline app::HtmlTernaryTree* create() {
            return il2cpp::create_object<app::HtmlTernaryTree>(get_class());
        }
    } // namespace HtmlTernaryTree
} // namespace app::classes::types
