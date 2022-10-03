#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class** type_info;
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyPerformanceTester_Old", "HPerfTestResultComparer");
        }
        inline app::HierarchyPerformanceTester_Old_HPerfTestResultComparer* create() {
            return il2cpp::create_object<app::HierarchyPerformanceTester_Old_HPerfTestResultComparer>(get_class());
        }
    } // namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer
} // namespace app::classes::types
