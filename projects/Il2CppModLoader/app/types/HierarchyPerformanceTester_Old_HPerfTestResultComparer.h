#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer {
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class** type_info = (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class**)(modloader::win::memory::resolve_rva(0x0472CCE8));
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyPerformanceTester_Old", "HPerfTestResultComparer");
        }
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer* create() {
            return il2cpp::create_object<app::HierarchyPerformanceTester_Old_HPerfTestResultComparer>(get_class());
        }
    } // namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer
} // namespace app::classes::types
