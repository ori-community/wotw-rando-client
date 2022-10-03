#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementElementsPropertyDescriptor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementElementsPropertyDescriptor_c__Class** type_info;
        inline app::XElementElementsPropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementElementsPropertyDescriptor_c__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementElementsPropertyDescriptor", "<>c");
        }
        inline app::XElementElementsPropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementElementsPropertyDescriptor_c>(get_class());
        }
    } // namespace XElementElementsPropertyDescriptor_c
} // namespace app::classes::types
