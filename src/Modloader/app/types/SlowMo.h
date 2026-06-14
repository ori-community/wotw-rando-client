#pragma once
#include <Modloader/app/structs/SlowMo.h>
#include <Modloader/app/structs/SlowMo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlowMo {
        inline app::SlowMo__Class** type_info() {
            static app::SlowMo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlowMo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlowMo__Class* get_class() {
            return il2cpp::get_class<app::SlowMo__Class>(type_info(), "RootMotion.Demos", "SlowMo");
        }
        inline app::SlowMo* create() {
            return il2cpp::create_object<app::SlowMo>(get_class());
        }
    } // namespace SlowMo
} // namespace app::classes::types
