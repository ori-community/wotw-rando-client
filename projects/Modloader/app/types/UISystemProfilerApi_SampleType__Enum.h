#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UISystemProfilerApi_SampleType__Enum {
        namespace {
            inline app::UISystemProfilerApi_SampleType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UISystemProfilerApi_SampleType__Enum__Class** type_info = &type_info_ref;
        inline app::UISystemProfilerApi_SampleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UISystemProfilerApi_SampleType__Enum__Class>(type_info, "UnityEngine", "UISystemProfilerApi", "SampleType");
        }
        inline app::UISystemProfilerApi_SampleType__Enum* create() {
            return il2cpp::create_object<app::UISystemProfilerApi_SampleType__Enum>(get_class());
        }
    } // namespace UISystemProfilerApi_SampleType__Enum
} // namespace app::classes::types
