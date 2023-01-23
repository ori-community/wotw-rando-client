#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JointChain__Class.h>
#include <Modloader/app/structs/JointChain.h>

namespace app::classes::types {
    namespace JointChain {
        namespace {
            inline app::JointChain__Class* type_info_ref = nullptr;
        }
        inline app::JointChain__Class** type_info = &type_info_ref;
        inline app::JointChain__Class* get_class() {
            return il2cpp::get_class<app::JointChain__Class>(type_info, "Moon", "JointChain");
        }
        inline app::JointChain* create() {
            return il2cpp::create_object<app::JointChain>(get_class());
        }
    } // namespace JointChain
} // namespace app::classes::types
