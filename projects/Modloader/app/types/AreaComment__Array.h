#pragma once
#include <Modloader/app/structs/AreaComment__Array.h>
#include <Modloader/app/structs/AreaComment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaComment__Array {
        inline app::AreaComment__Array__Class** type_info() {
            static app::AreaComment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaComment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaComment__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaComment__Array__Class>(type_info(), "Moon.Telemetry.Performance", "AreaComment[]");
        }
        inline app::AreaComment__Array* create() {
            return il2cpp::create_object<app::AreaComment__Array>(get_class());
        }
    } // namespace AreaComment__Array
} // namespace app::classes::types
