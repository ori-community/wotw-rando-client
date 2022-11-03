#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JobType__Enum {
        namespace {
            inline app::JobType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JobType__Enum__Class** type_info = &type_info_ref;
        inline app::JobType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JobType__Enum__Class>(type_info, "Unity.Jobs.LowLevel.Unsafe", "JobType");
        }
        inline app::JobType__Enum* create() {
            return il2cpp::create_object<app::JobType__Enum>(get_class());
        }
    } // namespace JobType__Enum
} // namespace app::classes::types
