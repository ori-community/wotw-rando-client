#pragma once
#include <Modloader/app/structs/AstNode.h>
#include <Modloader/app/structs/AstNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AstNode {
        inline app::AstNode__Class** type_info() {
            static app::AstNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AstNode__Class**)(modloader::win::memory::resolve_rva(0x0471DC48));
            }
            return cache;
        }
        inline app::AstNode__Class* get_class() {
            return il2cpp::get_class<app::AstNode__Class>(type_info(), "MS.Internal.Xml.XPath", "AstNode");
        }
        inline app::AstNode* create() {
            return il2cpp::create_object<app::AstNode>(get_class());
        }
    } // namespace AstNode
} // namespace app::classes::types
