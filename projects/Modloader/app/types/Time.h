#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Time__Class.h>
#include <Modloader/app/structs/Time.h>

namespace app::classes::types {
    namespace Time {
        namespace {
            inline app::Time__Class* type_info_ref = nullptr;
        }
        inline app::Time__Class** type_info = &type_info_ref;
        inline app::Time__Class* get_class() {
            return il2cpp::get_class<app::Time__Class>(type_info, "UnityEngine", "Time");
        }
        inline app::Time* create() {
            return il2cpp::create_object<app::Time>(get_class());
        }
    } // namespace Time
} // namespace app::classes::types
