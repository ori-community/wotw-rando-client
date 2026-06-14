#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_P3D_Result_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/P3D_Node.h>
#include <Modloader/app/structs/P3D_Result.h>
#include <Modloader/app/structs/P3D_Tree.h>
#include <Modloader/app/structs/P3D_Triangle.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::P3D_Tree {
    IL2CPP_REGISTER_METHOD(0x03099100, app::P3D_Tree*, get_TempInstance, )
    IL2CPP_REGISTER_METHOD(0x030992F0, bool, get_IsReady, app::P3D_Tree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03099380, void, Clear, app::P3D_Tree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03099590, void, ClearResults, app::P3D_Tree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03099780, void, SetMesh_1, app::P3D_Tree* this_ptr, app::Mesh* new_mesh, int32_t new_sub_mesh_index, bool force_update)
    IL2CPP_REGISTER_METHOD(0x030999F0, void, SetMesh_2, app::P3D_Tree* this_ptr, app::GameObject* game_object, int32_t sub_mesh_index, bool force_update)
    IL2CPP_REGISTER_METHOD(0x03099B30, app::P3D_Result*, FindNearest, app::P3D_Tree* this_ptr, app::Vector3 point, float max_distance)
    IL2CPP_REGISTER_METHOD(0x03099DC0, app::P3D_Result*, FindBetweenNearest, app::P3D_Tree* this_ptr, app::Vector3 start_point, app::Vector3 end_point)
    IL2CPP_REGISTER_METHOD(0x0309A050, app::List_1_P3D_Result_*, FindBetweenAll, app::P3D_Tree* this_ptr, app::Vector3 start_point, app::Vector3 end_point)
    IL2CPP_REGISTER_METHOD(0x0309A2C0, app::P3D_Result*, FindPerpendicularNearest, app::P3D_Tree* this_ptr, app::Vector3 point, float max_distance)
    IL2CPP_REGISTER_METHOD(0x0309A560, app::List_1_P3D_Result_*, FindPerpendicularAll, app::P3D_Tree* this_ptr, app::Vector3 point, float max_distance)
    IL2CPP_REGISTER_METHOD(0x0309A810, void, BeginSearchDistance, app::P3D_Tree* this_ptr, app::Vector3 point, float max_distance_sqr)
    IL2CPP_REGISTER_METHOD(0x0309A8F0, void, SearchDistance, app::P3D_Tree* this_ptr, app::P3D_Node* node, app::Vector3 point, float max_distance_sqr)
    IL2CPP_REGISTER_METHOD(0x0309AAD0, void, BeginSearchBetween, app::P3D_Tree* this_ptr, app::Vector3 start_point, app::Vector3 end_point)
    IL2CPP_REGISTER_METHOD(0x0309ACF0, void, SearchBetween, app::P3D_Tree* this_ptr, app::P3D_Node* node, app::Ray ray, float max_distance)
    IL2CPP_REGISTER_METHOD(0x0309AF10, void, AddToPotentials, app::P3D_Tree* this_ptr, app::P3D_Node* node)
    IL2CPP_REGISTER_METHOD(0x0309B040, void, AddToResults, app::P3D_Tree* this_ptr, app::P3D_Triangle* triangle, app::Vector3 weights, float distance01)
    IL2CPP_REGISTER_METHOD(
        0x0309B170,
        app::P3D_Result*,
        GetResult,
        app::P3D_Tree* this_ptr,
        app::P3D_Triangle* triangle,
        app::Vector3 weights,
        float distance01
    )
    IL2CPP_REGISTER_METHOD(0x0309B2A0, void, ExtractTriangles, app::P3D_Tree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309B820, void, ConstructNodes, app::P3D_Tree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309B910, void, Pack, app::P3D_Tree* this_ptr, app::P3D_Node* node, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x0309BAD0, void, SortTriangles, app::P3D_Tree* this_ptr, int32_t min_index, int32_t max_index)
    IL2CPP_REGISTER_METHOD(
        0x0309C410,
        void,
        SortTriangle,
        app::P3D_Tree* this_ptr,
        app::P3D_Triangle* triangle,
        int32_t* min_index,
        int32_t* max_index,
        bool above_pivot
    )
    IL2CPP_REGISTER_METHOD(0x0309C560, void, ctor, app::P3D_Tree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309C780, void, cctor, )
} // namespace app::classes::P3D_Tree
