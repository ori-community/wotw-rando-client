#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsMetaProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsMetaProperty__Class** type_info;
        inline app::fsMetaProperty__Class* get_class() {
            return il2cpp::get_class<app::fsMetaProperty__Class>(type_info, "FullSerializer.Internal", "fsMetaProperty");
        }
        inline app::fsMetaProperty* create() {
            return il2cpp::create_object<app::fsMetaProperty>(get_class());
        }
        inline app::fsMetaProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::fsMetaProperty__Array>(get_class(), size);
        }
        inline app::fsMetaProperty__Array* create_array(const std::vector<app::fsMetaProperty*>& items) {
            return il2cpp::array_new<app::fsMetaProperty__Array>(get_class(), items);
        }
    } // namespace fsMetaProperty
} // namespace app::classes::types
