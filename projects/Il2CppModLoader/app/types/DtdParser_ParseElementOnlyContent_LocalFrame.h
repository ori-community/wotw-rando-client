#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DtdParser_ParseElementOnlyContent_LocalFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DtdParser_ParseElementOnlyContent_LocalFrame__Class** type_info;
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_ParseElementOnlyContent_LocalFrame__Class>(type_info, "System.Xml", "DtdParser", "ParseElementOnlyContent_LocalFrame");
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame* create() {
            return il2cpp::create_object<app::DtdParser_ParseElementOnlyContent_LocalFrame>(get_class());
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array>(get_class(), size);
        }
    } // namespace DtdParser_ParseElementOnlyContent_LocalFrame
} // namespace app::classes::types
