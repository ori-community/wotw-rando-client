#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator_AggregationType__Enum {
        inline app::HierarchyTestResultAggregator_AggregationType__Enum__Class** type_info = (app::HierarchyTestResultAggregator_AggregationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790B90));
        inline app::HierarchyTestResultAggregator_AggregationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTestResultAggregator_AggregationType__Enum__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator", "AggregationType");
        }
        inline app::HierarchyTestResultAggregator_AggregationType__Enum* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator_AggregationType__Enum>(get_class());
        }
    } // namespace HierarchyTestResultAggregator_AggregationType__Enum
} // namespace app::classes::types
