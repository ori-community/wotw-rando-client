#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChainPolicyType__Enum__Class.h>
#include <Modloader/app/structs/ChainPolicyType__Enum.h>

namespace app::classes::types {
    namespace ChainPolicyType__Enum {
        namespace {
            inline app::ChainPolicyType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ChainPolicyType__Enum__Class** type_info = &type_info_ref;
        inline app::ChainPolicyType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChainPolicyType__Enum__Class>(type_info, "System.Net", "ChainPolicyType");
        }
        inline app::ChainPolicyType__Enum* create() {
            return il2cpp::create_object<app::ChainPolicyType__Enum>(get_class());
        }
    } // namespace ChainPolicyType__Enum
} // namespace app::classes::types
