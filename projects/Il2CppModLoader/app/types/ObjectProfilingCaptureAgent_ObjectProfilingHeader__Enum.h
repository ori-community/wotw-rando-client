#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
