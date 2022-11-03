#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameServerChangeRequested_t {
        namespace {
            inline app::GameServerChangeRequested_t__Class* type_info_ref = nullptr;
        }
        inline app::GameServerChangeRequested_t__Class** type_info = &type_info_ref;
        inline app::GameServerChangeRequested_t__Class* get_class() {
            return il2cpp::get_class<app::GameServerChangeRequested_t__Class>(type_info, "Steamworks", "GameServerChangeRequested_t");
        }
        inline app::GameServerChangeRequested_t* create() {
            return il2cpp::create_object<app::GameServerChangeRequested_t>(get_class());
        }
        inline app::GameServerChangeRequested_t__Boxed* box(app::GameServerChangeRequested_t value) {
            return il2cpp::box_value<app::GameServerChangeRequested_t__Boxed>(get_class(), value);
        }
    } // namespace GameServerChangeRequested_t
} // namespace app::classes::types
