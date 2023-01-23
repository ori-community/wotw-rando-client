#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class.h>
#include <Modloader/app/structs/ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum.h>

namespace app::classes::types {
    namespace ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum {
        namespace {
            inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class** type_info = &type_info_ref;
        inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum__Class>(type_info, "", "ObjectProfilingCaptureAgent", "ObjectProfilingHeader");
        }
        inline app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum* create() {
            return il2cpp::create_object<app::ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum>(get_class());
        }
    } // namespace ObjectProfilingCaptureAgent_ObjectProfilingHeader__Enum
} // namespace app::classes::types
