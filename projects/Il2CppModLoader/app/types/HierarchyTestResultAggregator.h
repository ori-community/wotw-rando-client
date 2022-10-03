#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyTestResultAggregator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchyTestResultAggregator__Class** type_info;
        inline app::HierarchyTestResultAggregator__Class* get_class() {
            return il2cpp::get_class<app::HierarchyTestResultAggregator__Class>(type_info, "Moon.HierarchyPerformanceTest", "HierarchyTestResultAggregator");
        }
        inline app::HierarchyTestResultAggregator* create() {
            return il2cpp::create_object<app::HierarchyTestResultAggregator>(get_class());
        }
    } // namespace HierarchyTestResultAggregator
} // namespace app::classes::types
