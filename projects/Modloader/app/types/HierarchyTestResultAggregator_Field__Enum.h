#pragma once
#include <Modloader/app/structs/HierarchyTestResultAggregator_Field__Enum.h>
#include <Modloader/app/structs/HierarchyTestResultAggregator_Field__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator_Field__Enum {
        inline app::HierarchyTestResultAggregator_Field__Enum__Class** type_info() {
            static app::HierarchyTestResultAggregator_Field__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyTestResultAggregator_Field__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyTestResultAggregator_Field__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestResultAggregator_Field__Enum__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator", "Field");
        }
        inline app::HierarchyTestResultAggregator_Field__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator_Field__Enum>(get_class());
        }
    } // namespace HierarchyTestResultAggregator_Field__Enum
} // namespace app::classes::types
