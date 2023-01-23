#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IdRefNode__Class.h>
#include <Modloader/app/structs/IdRefNode.h>

namespace app::classes::types {
    namespace IdRefNode {
        inline app::IdRefNode__Class** type_info = (app::IdRefNode__Class**)(modloader::win::memory::resolve_rva(0x04760530));
        inline app::IdRefNode__Class* get_class() {
            return il2cpp::get_class<app::IdRefNode__Class>(type_info, "System.Xml.Schema", "IdRefNode");
        }
        inline app::IdRefNode* create() {
            return il2cpp::create_object<app::IdRefNode>(get_class());
        }
    } // namespace IdRefNode
} // namespace app::classes::types
