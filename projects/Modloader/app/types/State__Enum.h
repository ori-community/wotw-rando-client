#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace State__Enum {
        namespace {
            inline app::State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::State__Enum__Class** type_info = &type_info_ref;
        inline app::State__Enum__Class* get_class() {
            return il2cpp::get_class<app::State__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "State");
        }
        inline app::State__Enum* create() {
            return il2cpp::create_object<app::State__Enum>(get_class());
        }
    } // namespace State__Enum
} // namespace app::classes::types
