#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Extensions::SortExtensions {
    IL2CPP_REGISTER_METHOD(0x0156C230, app::IEnumerable_1_System_Object_*, TopologicalSort_1, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_* dependencies, bool throw_on_cycle))
    IL2CPP_REGISTER_METHOD(0x0154FDE0, void, Visit, (app::Object * item, app::HashSet_1_System_Object_* visited, app::ICollection_1_System_Object_* sorted, app::Func_2_Object_System_Collections_Generic_IEnumerable_1_* dependencies, bool throw_on_cycle))
    IL2CPP_REGISTER_METHODINFO(0x0472DFE0, SortExtensions_Visit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0156C230, app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_*, TopologicalSort_2, (app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_ * source, app::Func_2_Moon_Timeline_TimelineEntityRecord_System_Collections_Generic_IEnumerable_1_* dependencies, bool throw_on_cycle))
    IL2CPP_REGISTER_METHODINFO(0x0471C210, SortExtensions_TopologicalSort_1__MethodInfo)
} // namespace app::classes::Moon::Extensions::SortExtensions
