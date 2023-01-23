#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode__Class.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptionNode {
        inline app::TypeDescriptor_TypeDescriptionNode__Class** type_info = (app::TypeDescriptor_TypeDescriptionNode__Class**)(modloader::win::memory::resolve_rva(0x04718398));
        inline app::TypeDescriptor_TypeDescriptionNode__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptionNode__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "TypeDescriptionNode");
        }
        inline app::TypeDescriptor_TypeDescriptionNode* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptionNode>(get_class());
        }
    } // namespace TypeDescriptor_TypeDescriptionNode
} // namespace app::classes::types
