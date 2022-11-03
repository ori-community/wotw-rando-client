#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionProbeSortOptions__Enum {
        namespace {
            inline app::ReflectionProbeSortOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ReflectionProbeSortOptions__Enum__Class** type_info = &type_info_ref;
        inline app::ReflectionProbeSortOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReflectionProbeSortOptions__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "ReflectionProbeSortOptions");
        }
        inline app::ReflectionProbeSortOptions__Enum* create() {
            return il2cpp::create_object<app::ReflectionProbeSortOptions__Enum>(get_class());
        }
    } // namespace ReflectionProbeSortOptions__Enum
} // namespace app::classes::types
