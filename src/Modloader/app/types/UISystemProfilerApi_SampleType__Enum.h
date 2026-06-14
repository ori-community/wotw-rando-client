#pragma once
#include <Modloader/app/structs/UISystemProfilerApi_SampleType__Enum.h>
#include <Modloader/app/structs/UISystemProfilerApi_SampleType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UISystemProfilerApi_SampleType__Enum {
        inline app::UISystemProfilerApi_SampleType__Enum__Class** type_info() {
            static app::UISystemProfilerApi_SampleType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UISystemProfilerApi_SampleType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UISystemProfilerApi_SampleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UISystemProfilerApi_SampleType__Enum__Class>(type_info(), "UnityEngine", "UISystemProfilerApi", "SampleType");
        }
        inline app::UISystemProfilerApi_SampleType__Enum* create() {
            return il2cpp::create_object<app::UISystemProfilerApi_SampleType__Enum>(get_class());
        }
    } // namespace UISystemProfilerApi_SampleType__Enum
} // namespace app::classes::types
