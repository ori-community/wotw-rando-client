#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HierarchyPerformanceTester_Old_HPerfTestResultComparer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyPerformanceTester_Old_HPerfTestResultComparer {
    IL2CPP_REGISTER_METHOD(0x0149F480, void, ctor, (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer * this_ptr, bool ascending, app::GameObject* root))
    IL2CPP_REGISTER_METHOD(0x0149F490, int32_t, Compare, (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer * this_ptr, app::HPerfTestResult* x, app::HPerfTestResult* y))
    IL2CPP_REGISTER_METHOD(0x0149F4F0, bool, IsParentOf, (app::HierarchyPerformanceTester_Old_HPerfTestResultComparer * this_ptr, app::Transform* target, app::Transform* potential_parent))
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyPerformanceTester_Old_HPerfTestResultComparer
