#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Edge.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/CageStructureTool_Vertex.h>
#include <Modloader/app/structs/CageStructureTool_c.h>

namespace app::classes::CageStructureTool___c {
    IL2CPP_REGISTER_METHOD(0x0167F470, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CageStructureTool_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167F5B0, int32_t, _AddFaceFromEdgePath_b__108_0, app::CageStructureTool_c* this_ptr, int32_t f)
    IL2CPP_REGISTER_METHOD(0x0167F5B0, int32_t, _AddFaceFromEdgePath_b__108_2, app::CageStructureTool_c* this_ptr, int32_t v)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_0, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Vertex* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_1, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Vertex* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_2, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Edge* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_3, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Edge* _p0_)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__150_4,
        app::CageStructureTool_c* this_ptr,
        app::CageStructureTool_Edge* _p0_,
        app::CageStructureTool_Edge* _p1_,
        app::CageStructureTool_Edge* _p2_
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__150_5,
        app::CageStructureTool_c* this_ptr,
        app::CageStructureTool_Edge* _p0_,
        app::CageStructureTool_Edge* _p1_,
        app::CageStructureTool_Edge* _p2_
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_6, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Face* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_7, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Face* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_8, app::CageStructureTool_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_9, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Face* _p0_, bool _p1_, bool _p2_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_10, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Edge* _p0_, bool _p1_, bool _p2_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__150_11, app::CageStructureTool_c* this_ptr, app::CageStructureTool_Vertex* _p0_, bool _p1_, bool _p2_)
} // namespace app::classes::CageStructureTool___c
