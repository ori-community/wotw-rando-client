#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateBeaconCallback_t {
        namespace {
            inline app::CreateBeaconCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::CreateBeaconCallback_t__Class** type_info = &type_info_ref;
        inline app::CreateBeaconCallback_t__Class* get_class() {
            return il2cpp::get_class<app::CreateBeaconCallback_t__Class>(type_info, "Steamworks", "CreateBeaconCallback_t");
        }
        inline app::CreateBeaconCallback_t* create() {
            return il2cpp::create_object<app::CreateBeaconCallback_t>(get_class());
        }
        inline app::CreateBeaconCallback_t__Boxed* box(app::CreateBeaconCallback_t value) {
            return il2cpp::box_value<app::CreateBeaconCallback_t__Boxed>(get_class(), value);
        }
    } // namespace CreateBeaconCallback_t
} // namespace app::classes::types
