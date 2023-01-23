#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RagdollUtilityDemo__Class.h>
#include <Modloader/app/structs/RagdollUtilityDemo.h>

namespace app::classes::types {
    namespace RagdollUtilityDemo {
        namespace {
            inline app::RagdollUtilityDemo__Class* type_info_ref = nullptr;
        }
        inline app::RagdollUtilityDemo__Class** type_info = &type_info_ref;
        inline app::RagdollUtilityDemo__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtilityDemo__Class>(type_info, "RootMotion.Demos", "RagdollUtilityDemo");
        }
        inline app::RagdollUtilityDemo* create() {
            return il2cpp::create_object<app::RagdollUtilityDemo>(get_class());
        }
    } // namespace RagdollUtilityDemo
} // namespace app::classes::types
