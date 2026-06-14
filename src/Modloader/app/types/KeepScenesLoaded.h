#pragma once
#include <Modloader/app/structs/KeepScenesLoaded.h>
#include <Modloader/app/structs/KeepScenesLoaded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeepScenesLoaded {
        inline app::KeepScenesLoaded__Class** type_info() {
            static app::KeepScenesLoaded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeepScenesLoaded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeepScenesLoaded__Class* get_class() {
            return il2cpp::get_class<app::KeepScenesLoaded__Class>(type_info(), "Moon.Timeline", "KeepScenesLoaded");
        }
        inline app::KeepScenesLoaded* create() {
            return il2cpp::create_object<app::KeepScenesLoaded>(get_class());
        }
    } // namespace KeepScenesLoaded
} // namespace app::classes::types
