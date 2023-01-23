#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserStatsStored_t__Class.h>
#include <Modloader/app/structs/UserStatsStored_t.h>
#include <Modloader/app/structs/UserStatsStored_t__Boxed.h>

namespace app::classes::types {
    namespace UserStatsStored_t {
        inline app::UserStatsStored_t__Class** type_info = (app::UserStatsStored_t__Class**)(modloader::win::memory::resolve_rva(0x04782D78));
        inline app::UserStatsStored_t__Class* get_class() {
            return il2cpp::get_class<app::UserStatsStored_t__Class>(type_info, "Steamworks", "UserStatsStored_t");
        }
        inline app::UserStatsStored_t* create() {
            return il2cpp::create_object<app::UserStatsStored_t>(get_class());
        }
        inline app::UserStatsStored_t__Boxed* box(app::UserStatsStored_t value) {
            return il2cpp::box_value<app::UserStatsStored_t__Boxed>(get_class(), value);
        }
    } // namespace UserStatsStored_t
} // namespace app::classes::types
