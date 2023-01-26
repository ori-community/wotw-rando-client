#pragma once
#include <Modloader/app/structs/ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum.h>
#include <Modloader/app/structs/ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum {
        inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class** type_info() {
            static app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class>(type_info(), "", "ObjectProfilingCaptureAgent", "ObjectProfilingHeader");
        }
        inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum* create() {
            return il2cpp::create_object<app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum>(get_class());
        }
    } // namespace ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum
} // namespace app::classes::types
