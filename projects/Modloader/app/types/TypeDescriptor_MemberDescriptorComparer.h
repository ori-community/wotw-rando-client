#pragma once
#include <Modloader/app/structs/TypeDescriptor_MemberDescriptorComparer.h>
#include <Modloader/app/structs/TypeDescriptor_MemberDescriptorComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_MemberDescriptorComparer {
        inline app::TypeDescriptor_MemberDescriptorComparer__Class** type_info() {
            static app::TypeDescriptor_MemberDescriptorComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_MemberDescriptorComparer__Class**)(modloader::win::memory::resolve_rva(0x047359E0));
            }
            return cache;
        }
        inline app::TypeDescriptor_MemberDescriptorComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_MemberDescriptorComparer__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "MemberDescriptorComparer");
        }
        inline app::TypeDescriptor_MemberDescriptorComparer* create() {
            return il2cpp::create_object<app::TypeDescriptor_MemberDescriptorComparer>(get_class());
        }
    } // namespace TypeDescriptor_MemberDescriptorComparer
} // namespace app::classes::types
