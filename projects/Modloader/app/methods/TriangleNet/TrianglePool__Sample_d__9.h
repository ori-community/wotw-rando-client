#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TrianglePool_Sample_d_9.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Triangle.h>

namespace app::classes::TriangleNet::TrianglePool__Sample_d__9 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::TrianglePool_Sample_d_9 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::TrianglePool_Sample_d_9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7070, bool, MoveNext, (app::TrianglePool_Sample_d_9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Triangle*, IEnumerator_Triangle__get_Current, (app::TrianglePool_Sample_d_9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA71C0, void, IEnumerator_Reset, (app::TrianglePool_Sample_d_9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::TrianglePool_Sample_d_9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7210, app::IEnumerator_1_TriangleNet_Topology_Triangle_*, IEnumerable_Triangle__GetEnumerator, (app::TrianglePool_Sample_d_9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7410, app::IEnumerator*, IEnumerable_GetEnumerator, (app::TrianglePool_Sample_d_9 * this_ptr))
} // namespace app::classes::TriangleNet::TrianglePool__Sample_d__9
