#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator {
        inline app::HierarchyTestResultAggregator__Class** type_info = (app::HierarchyTestResultAggregator__Class**)(modloader::win::memory::resolve_rva(0x04755398));
        inline app::HierarchyTestResultAggregator__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestResultAggregator__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator");
        }
        inline app::HierarchyTestResultAggregator* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator>(get_class());
        }
    } // namespace HierarchyTestResultAggregator
} // namespace app::classes::types
