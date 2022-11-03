#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationSetupGroup_TargetSetupEntry__Array {
        namespace {
            inline app::SerializationSetupGroup_TargetSetupEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::SerializationSetupGroup_TargetSetupEntry__Array__Class** type_info = &type_info_ref;
        inline app::SerializationSetupGroup_TargetSetupEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializationSetupGroup_TargetSetupEntry__Array__Class>(type_info, "", "SerializationSetupGroup+TargetSetupEntry[]");
        }
        inline app::SerializationSetupGroup_TargetSetupEntry__Array* create() {
            return il2cpp::create_object<app::SerializationSetupGroup_TargetSetupEntry__Array>(get_class());
        }
    } // namespace SerializationSetupGroup_TargetSetupEntry__Array
} // namespace app::classes::types
