#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Tools::CuthillMcKee {
    IL2CPP_REGISTER_METHOD(0x02A95410, app::Int32__Array *, Renumber_1, (app::CuthillMcKee * this_ptr, app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02A95590, app::Int32__Array *, Renumber_2, (app::CuthillMcKee * this_ptr, app::AdjacencyMatrix * matrix))
    IL2CPP_REGISTER_METHOD(0x02A958F0, app::Int32__Array *, GenerateRcm, (app::CuthillMcKee * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A95AE0, void, Rcm, (app::CuthillMcKee * this_ptr, int32_t root, app::Int32__Array * mask, app::Int32__Array * perm, int32_t offset, int32_t * iccsze))
    IL2CPP_REGISTER_METHOD(0x02A95FC0, void, FindRoot, (app::CuthillMcKee * this_ptr, int32_t * root, app::Int32__Array * mask, int32_t * level_num, app::Int32__Array * level_row, app::Int32__Array * level, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02A962A0, void, GetLevelSet, (app::CuthillMcKee * this_ptr, int32_t * root, app::Int32__Array * mask, int32_t * level_num, app::Int32__Array * level_row, app::Int32__Array * level, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02A965C0, void, Degree, (app::CuthillMcKee * this_ptr, int32_t root, app::Int32__Array * mask, app::Int32__Array * deg, int32_t * iccsze, app::Int32__Array * ls, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x02A969A0, int32_t, PermBandwidth, (app::CuthillMcKee * this_ptr, app::Int32__Array * perm, app::Int32__Array * perm_inv))
    IL2CPP_REGISTER_METHOD(0x02A96C00, app::Int32__Array *, PermInverse, (app::CuthillMcKee * this_ptr, app::Int32__Array * perm))
    IL2CPP_REGISTER_METHOD(0x02A96D10, void, ReverseVector, (app::CuthillMcKee * this_ptr, app::Int32__Array * a, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x02A96DC0, void, Shift, (app::CuthillMcKee * this_ptr, app::Int32__Array * a, bool up))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CuthillMcKee * this_ptr))
}
