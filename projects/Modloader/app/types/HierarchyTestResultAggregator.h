#pragma once
#include <Modloader/app/structs/HierarchyTestResultAggregator.h>
#include <Modloader/app/structs/HierarchyTestResultAggregator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator {
        inline app::HierarchyTestResultAggregator__Class** type_info() {
            static app::HierarchyTestResultAggregator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyTestResultAggregator__Class**)(modloader::win::memory::resolve_rva(0x04755398));
            }
            return cache;
        }
        inline app::HierarchyTestResultAggregator__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestResultAggregator__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator");
        }
        inline app::HierarchyTestResultAggregator* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator>(get_class());
        }
    } // namespace HierarchyTestResultAggregator
} // namespace app::classes::types
