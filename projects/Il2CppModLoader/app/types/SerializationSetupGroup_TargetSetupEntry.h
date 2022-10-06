#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupGroup_TargetSetupEntry {
        namespace {
            app::SerializationSetupGroup_TargetSetupEntry__Class* type_info_ref = nullptr;
        }
        app::SerializationSetupGroup_TargetSetupEntry__Class** type_info = &type_info_ref;
        inline app::SerializationSetupGroup_TargetSetupEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SerializationSetupGroup_TargetSetupEntry__Class>(type_info, "", "SerializationSetupGroup", "TargetSetupEntry");
        }
        inline app::SerializationSetupGroup_TargetSetupEntry* create() {
            return il2cpp::create_object<app::SerializationSetupGroup_TargetSetupEntry>(get_class());
        }
        inline app::SerializationSetupGroup_TargetSetupEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializationSetupGroup_TargetSetupEntry__Array>(get_class(), size);
        }
        inline app::SerializationSetupGroup_TargetSetupEntry__Array* create_array(const std::vector<app::SerializationSetupGroup_TargetSetupEntry*>& items) {
            return il2cpp::array_new<app::SerializationSetupGroup_TargetSetupEntry__Array>(get_class(), items);
        }
    } // namespace SerializationSetupGroup_TargetSetupEntry
} // namespace app::classes::types
