#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JointChains__Class.h>
#include <Modloader/app/structs/JointChains.h>

namespace app::classes::types {
    namespace JointChains {
        namespace {
            inline app::JointChains__Class* type_info_ref = nullptr;
        }
        inline app::JointChains__Class** type_info = &type_info_ref;
        inline app::JointChains__Class* get_class() {
            return il2cpp::get_class<app::JointChains__Class>(type_info, "Moon", "JointChains");
        }
        inline app::JointChains* create() {
            return il2cpp::create_object<app::JointChains>(get_class());
        }
    } // namespace JointChains
} // namespace app::classes::types
