#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewUrlLaunchParameters_t__Class.h>
#include <Modloader/app/structs/NewUrlLaunchParameters_t.h>
#include <Modloader/app/structs/NewUrlLaunchParameters_t__Boxed.h>

namespace app::classes::types {
    namespace NewUrlLaunchParameters_t {
        namespace {
            inline app::NewUrlLaunchParameters_t__Class* type_info_ref = nullptr;
        }
        inline app::NewUrlLaunchParameters_t__Class** type_info = &type_info_ref;
        inline app::NewUrlLaunchParameters_t__Class* get_class() {
            return il2cpp::get_class<app::NewUrlLaunchParameters_t__Class>(type_info, "Steamworks", "NewUrlLaunchParameters_t");
        }
        inline app::NewUrlLaunchParameters_t* create() {
            return il2cpp::create_object<app::NewUrlLaunchParameters_t>(get_class());
        }
        inline app::NewUrlLaunchParameters_t__Boxed* box(app::NewUrlLaunchParameters_t value) {
            return il2cpp::box_value<app::NewUrlLaunchParameters_t__Boxed>(get_class(), value);
        }
    } // namespace NewUrlLaunchParameters_t
} // namespace app::classes::types
