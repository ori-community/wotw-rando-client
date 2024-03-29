#pragma once
#include <Modloader/app/structs/MonoEventInfo.h>
#include <Modloader/app/structs/MonoEventInfo__Boxed.h>
#include <Modloader/app/structs/MonoEventInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoEventInfo {
        inline app::MonoEventInfo__Class** type_info() {
            static app::MonoEventInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoEventInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoEventInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoEventInfo__Class>(type_info(), "System.Reflection", "MonoEventInfo");
        }
        inline app::MonoEventInfo* create() {
            return il2cpp::create_object<app::MonoEventInfo>(get_class());
        }
        inline app::MonoEventInfo__Boxed* box(app::MonoEventInfo value) {
            return il2cpp::box_value<app::MonoEventInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoEventInfo
} // namespace app::classes::types
