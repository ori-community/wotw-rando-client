#pragma once
#include <Modloader/app/structs/MonoIOStat.h>
#include <Modloader/app/structs/MonoIOStat__Boxed.h>
#include <Modloader/app/structs/MonoIOStat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoIOStat {
        inline app::MonoIOStat__Class** type_info() {
            static app::MonoIOStat__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoIOStat__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoIOStat__Class* get_class() {
            return il2cpp::get_class<app::MonoIOStat__Class>(type_info(), "System.IO", "MonoIOStat");
        }
        inline app::MonoIOStat* create() {
            return il2cpp::create_object<app::MonoIOStat>(get_class());
        }
        inline app::MonoIOStat__Boxed* box(app::MonoIOStat value) {
            return il2cpp::box_value<app::MonoIOStat__Boxed>(get_class(), value);
        }
    } // namespace MonoIOStat
} // namespace app::classes::types
