#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidatingReaderNodeData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidatingReaderNodeData__Array__Class** type_info;
        inline app::ValidatingReaderNodeData__Array__Class* get_class() {
            return il2cpp::get_class<app::ValidatingReaderNodeData__Array__Class>(type_info, "System.Xml", "ValidatingReaderNodeData[]");
        }
        inline app::ValidatingReaderNodeData__Array* create() {
            return il2cpp::create_object<app::ValidatingReaderNodeData__Array>(get_class());
        }
    } // namespace ValidatingReaderNodeData__Array
} // namespace app::classes::types
