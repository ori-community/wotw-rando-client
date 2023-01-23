#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JointChains_Chain__Array__Class.h>
#include <Modloader/app/structs/JointChains_Chain__Array.h>

namespace app::classes::types {
    namespace JointChains_Chain__Array {
        namespace {
            inline app::JointChains_Chain__Array__Class* type_info_ref = nullptr;
        }
        inline app::JointChains_Chain__Array__Class** type_info = &type_info_ref;
        inline app::JointChains_Chain__Array__Class* get_class() {
            return il2cpp::get_class<app::JointChains_Chain__Array__Class>(type_info, "Moon", "JointChains+Chain[]");
        }
        inline app::JointChains_Chain__Array* create() {
            return il2cpp::create_object<app::JointChains_Chain__Array>(get_class());
        }
    } // namespace JointChains_Chain__Array
} // namespace app::classes::types
