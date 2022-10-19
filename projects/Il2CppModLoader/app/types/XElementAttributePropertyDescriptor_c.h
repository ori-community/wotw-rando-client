#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor_c {
        inline app::XElementAttributePropertyDescriptor_c__Class** type_info = (app::XElementAttributePropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x047096C8));
        inline app::XElementAttributePropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementAttributePropertyDescriptor_c__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor", "<>c");
        }
        inline app::XElementAttributePropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementAttributePropertyDescriptor_c>(get_class());
        }
    } // namespace XElementAttributePropertyDescriptor_c
} // namespace app::classes::types
