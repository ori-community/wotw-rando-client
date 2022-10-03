#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator_AggregationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTestResultAggregator_AggregationType__Enum__Class** type_info;
        inline app::HierarchyTestResultAggregator_AggregationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestResultAggregator_AggregationType__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator", "AggregationType");
        }
        inline app::HierarchyTestResultAggregator_AggregationType__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator_AggregationType__Enum>(get_class());
        }
    } // namespace HierarchyTestResultAggregator_AggregationType__Enum
} // namespace app::classes::types
