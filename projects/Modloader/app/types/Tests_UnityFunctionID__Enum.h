#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tests_UnityFunctionID__Enum__Class.h>
#include <Modloader/app/structs/Tests_UnityFunctionID__Enum.h>

namespace app::classes::types {
    namespace Tests_UnityFunctionID__Enum {
        namespace {
            inline app::Tests_UnityFunctionID__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Tests_UnityFunctionID__Enum__Class** type_info = &type_info_ref;
        inline app::Tests_UnityFunctionID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_UnityFunctionID__Enum__Class>(type_info, "HierarchyPerfTest", "Tests", "UnityFunctionID");
        }
        inline app::Tests_UnityFunctionID__Enum* create() {
            return il2cpp::create_object<app::Tests_UnityFunctionID__Enum>(get_class());
        }
    } // namespace Tests_UnityFunctionID__Enum
} // namespace app::classes::types
