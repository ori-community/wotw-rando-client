#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator_Field__Enum {
        namespace {
            inline app::HierarchyTestResultAggregator_Field__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyTestResultAggregator_Field__Enum__Class** type_info = &type_info_ref;
        inline app::HierarchyTestResultAggregator_Field__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestResultAggregator_Field__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator", "Field");
        }
        inline app::HierarchyTestResultAggregator_Field__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator_Field__Enum>(get_class());
        }
    } // namespace HierarchyTestResultAggregator_Field__Enum
} // namespace app::classes::types
