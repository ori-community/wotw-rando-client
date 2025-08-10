#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Edge.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_TriangleNet_Geometry_Edge_.h>
#include <Modloader/app/structs/Mesh_get_Edges_d_39.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::TriangleNet::Mesh__get_Edges_d__39 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::Mesh_get_Edges_d_39* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::Mesh_get_Edges_d_39* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02630AF0, bool, MoveNext, app::Mesh_get_Edges_d_39* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Edge*, IEnumerator_Edge__get_Current, app::Mesh_get_Edges_d_39* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02630D60, void, IEnumerator_Reset, app::Mesh_get_Edges_d_39* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::Mesh_get_Edges_d_39* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02630DB0, app::IEnumerator_1_TriangleNet_Geometry_Edge_*, IEnumerable_Edge__GetEnumerator, app::Mesh_get_Edges_d_39* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02630FA0, app::IEnumerator*, IEnumerable_GetEnumerator, app::Mesh_get_Edges_d_39* this_ptr)
} // namespace app::classes::TriangleNet::Mesh__get_Edges_d__39
