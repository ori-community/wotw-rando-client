#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoEventInfo {
        namespace {
            inline app::MonoEventInfo__Class* type_info_ref = nullptr;
        }
        inline app::MonoEventInfo__Class** type_info = &type_info_ref;
        inline app::MonoEventInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoEventInfo__Class>(type_info, "System.Reflection", "MonoEventInfo");
        }
        inline app::MonoEventInfo* create() {
            return il2cpp::create_object<app::MonoEventInfo>(get_class());
        }
        inline app::MonoEventInfo__Boxed* box(app::MonoEventInfo value) {
            return il2cpp::box_value<app::MonoEventInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoEventInfo
} // namespace app::classes::types
