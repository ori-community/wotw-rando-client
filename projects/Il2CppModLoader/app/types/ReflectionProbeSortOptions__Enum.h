#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionProbeSortOptions__Enum {
        namespace {
            app::ReflectionProbeSortOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::ReflectionProbeSortOptions__Enum__Class** type_info = &type_info_ref;
        inline app::ReflectionProbeSortOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReflectionProbeSortOptions__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "ReflectionProbeSortOptions");
        }
        inline app::ReflectionProbeSortOptions__Enum* create() {
            return il2cpp::create_object<app::ReflectionProbeSortOptions__Enum>(get_class());
        }
    } // namespace ReflectionProbeSortOptions__Enum
} // namespace app::classes::types
