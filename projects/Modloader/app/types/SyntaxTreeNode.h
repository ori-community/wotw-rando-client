#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SyntaxTreeNode__Class.h>
#include <Modloader/app/structs/SyntaxTreeNode.h>

namespace app::classes::types {
    namespace SyntaxTreeNode {
        inline app::SyntaxTreeNode__Class** type_info = (app::SyntaxTreeNode__Class**)(modloader::win::memory::resolve_rva(0x047058F0));
        inline app::SyntaxTreeNode__Class* get_class() {
            return il2cpp::get_class<app::SyntaxTreeNode__Class>(type_info, "System.Xml.Schema", "SyntaxTreeNode");
        }
        inline app::SyntaxTreeNode* create() {
            return il2cpp::create_object<app::SyntaxTreeNode>(get_class());
        }
    } // namespace SyntaxTreeNode
} // namespace app::classes::types
