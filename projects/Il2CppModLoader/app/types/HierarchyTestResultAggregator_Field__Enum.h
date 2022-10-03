#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator_Field__Enum {
        namespace {
            app::HierarchyTestResultAggregator_Field__Enum__Class* type_info_ref = nullptr;
        }
        app::HierarchyTestResultAggregator_Field__Enum__Class** type_info = &type_info_ref;
        inline app::HierarchyTestResultAggregator_Field__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestResultAggregator_Field__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator", "Field");
        }
        inline app::HierarchyTestResultAggregator_Field__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator_Field__Enum>(get_class());
        }
    } // namespace HierarchyTestResultAggregator_Field__Enum
} // namespace app::classes::types
