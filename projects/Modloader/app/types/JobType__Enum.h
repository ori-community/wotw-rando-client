#pragma once
#include <Modloader/app/structs/JobType__Enum.h>
#include <Modloader/app/structs/JobType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobType__Enum {
        inline app::JobType__Enum__Class** type_info() {
            static app::JobType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JobType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JobType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JobType__Enum__Class>(type_info(), "Unity.Jobs.LowLevel.Unsafe", "JobType");
        }
        inline app::JobType__Enum* create() {
            return il2cpp::create_object<app::JobType__Enum>(get_class());
        }
    } // namespace JobType__Enum
} // namespace app::classes::types
