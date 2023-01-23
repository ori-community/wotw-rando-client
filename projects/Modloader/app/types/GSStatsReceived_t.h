#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GSStatsReceived_t__Class.h>
#include <Modloader/app/structs/GSStatsReceived_t.h>
#include <Modloader/app/structs/GSStatsReceived_t__Boxed.h>

namespace app::classes::types {
    namespace GSStatsReceived_t {
        namespace {
            inline app::GSStatsReceived_t__Class* type_info_ref = nullptr;
        }
        inline app::GSStatsReceived_t__Class** type_info = &type_info_ref;
        inline app::GSStatsReceived_t__Class* get_class() {
            return il2cpp::get_class<app::GSStatsReceived_t__Class>(type_info, "Steamworks", "GSStatsReceived_t");
        }
        inline app::GSStatsReceived_t* create() {
            return il2cpp::create_object<app::GSStatsReceived_t>(get_class());
        }
        inline app::GSStatsReceived_t__Boxed* box(app::GSStatsReceived_t value) {
            return il2cpp::box_value<app::GSStatsReceived_t__Boxed>(get_class(), value);
        }
    } // namespace GSStatsReceived_t
} // namespace app::classes::types
