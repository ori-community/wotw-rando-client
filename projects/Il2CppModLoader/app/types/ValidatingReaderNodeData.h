#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidatingReaderNodeData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidatingReaderNodeData__Class** type_info;
        inline app::ValidatingReaderNodeData__Class* get_class() {
            return il2cpp::get_class<app::ValidatingReaderNodeData__Class>(type_info, "System.Xml", "ValidatingReaderNodeData");
        }
        inline app::ValidatingReaderNodeData* create() {
            return il2cpp::create_object<app::ValidatingReaderNodeData>(get_class());
        }
        inline app::ValidatingReaderNodeData__Array* create_array(int size) {
            return il2cpp::array_new<app::ValidatingReaderNodeData__Array>(get_class(), size);
        }
        inline app::ValidatingReaderNodeData__Array* create_array(const std::vector<app::ValidatingReaderNodeData*>& items) {
            return il2cpp::array_new<app::ValidatingReaderNodeData__Array>(get_class(), items);
        }
    } // namespace ValidatingReaderNodeData
} // namespace app::classes::types
