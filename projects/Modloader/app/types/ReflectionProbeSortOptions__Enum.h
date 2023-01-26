#pragma once
#include <Modloader/app/structs/ReflectionProbeSortOptions__Enum.h>
#include <Modloader/app/structs/ReflectionProbeSortOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionProbeSortOptions__Enum {
        inline app::ReflectionProbeSortOptions__Enum__Class** type_info() {
            static app::ReflectionProbeSortOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReflectionProbeSortOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReflectionProbeSortOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReflectionProbeSortOptions__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "ReflectionProbeSortOptions");
        }
        inline app::ReflectionProbeSortOptions__Enum* create() {
            return il2cpp::create_object<app::ReflectionProbeSortOptions__Enum>(get_class());
        }
    } // namespace ReflectionProbeSortOptions__Enum
} // namespace app::classes::types
