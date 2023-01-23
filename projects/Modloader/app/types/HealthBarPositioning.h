#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HealthBarPositioning__Class.h>
#include <Modloader/app/structs/HealthBarPositioning.h>

namespace app::classes::types {
    namespace HealthBarPositioning {
        namespace {
            inline app::HealthBarPositioning__Class* type_info_ref = nullptr;
        }
        inline app::HealthBarPositioning__Class** type_info = &type_info_ref;
        inline app::HealthBarPositioning__Class* get_class() {
            return il2cpp::get_class<app::HealthBarPositioning__Class>(type_info, "", "HealthBarPositioning");
        }
        inline app::HealthBarPositioning* create() {
            return il2cpp::create_object<app::HealthBarPositioning>(get_class());
        }
    } // namespace HealthBarPositioning
} // namespace app::classes::types
