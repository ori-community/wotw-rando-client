#pragma once
#include <Modloader/app/structs/HierarchyPerformanceTester_Old_HPerfTestResultComparer.h>
#include <Modloader/app/structs/HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer {
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class** type_info() {
            static app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class**)(modloader::win::memory::resolve_rva(0x0472CCE8));
            }
            return cache;
        }
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyPerformanceTester_Old", "HPerfTestResultComparer");
        }
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer* create() {
            return il2cpp::create_object<app::HierarchyPerformanceTester_Old_HPerfTestResultComparer>(get_class());
        }
    } // namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer
} // namespace app::classes::types
