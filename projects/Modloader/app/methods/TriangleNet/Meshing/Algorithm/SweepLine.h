#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::Algorithm::SweepLine {
    IL2CPP_REGISTER_METHOD(0x02636B70, int32_t, randomnation, (int32_t choices))
    IL2CPP_REGISTER_METHOD(0x02636C60, app::IMesh*, Triangulate, (app::SweepLine * this_ptr, app::IList_1_TriangleNet_Geometry_Vertex_* points, app::Configuration_1* config))
    IL2CPP_REGISTER_METHODINFO(0x04782238, SweepLine_Triangulate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02638200, void, HeapInsert, (app::SweepLine * this_ptr, app::SweepLine_SweepEvent__Array* heap, int32_t heapsize, app::SweepLine_SweepEvent* newevent))
    IL2CPP_REGISTER_METHOD(0x026383A0, void, Heapify, (app::SweepLine * this_ptr, app::SweepLine_SweepEvent__Array* heap, int32_t heapsize, int32_t eventnum))
    IL2CPP_REGISTER_METHOD(0x02638630, void, HeapDelete, (app::SweepLine * this_ptr, app::SweepLine_SweepEvent__Array* heap, int32_t heapsize, int32_t eventnum))
    IL2CPP_REGISTER_METHOD(0x02638840, void, CreateHeap, (app::SweepLine * this_ptr, app::SweepLine_SweepEvent__Array** eventheap, int32_t size))
    IL2CPP_REGISTER_METHOD(0x02638B50, app::SweepLine_SplayNode*, Splay, (app::SweepLine * this_ptr, app::SweepLine_SplayNode* splaytree, app::Point* searchpoint, app::Otri* searchtri))
    IL2CPP_REGISTER_METHOD(0x02638EB0, app::SweepLine_SplayNode*, SplayInsert, (app::SweepLine * this_ptr, app::SweepLine_SplayNode* splayroot, app::Otri newkey, app::Point* searchpoint))
    IL2CPP_REGISTER_METHOD(0x026390A0, app::SweepLine_SplayNode*, FrontLocate, (app::SweepLine * this_ptr, app::SweepLine_SplayNode* splayroot, app::Otri bottommost, app::Vertex* searchvertex, app::Otri* searchtri, bool* farright))
    IL2CPP_REGISTER_METHOD(0x02639160, app::SweepLine_SplayNode*, CircleTopInsert, (app::SweepLine * this_ptr, app::SweepLine_SplayNode* splayroot, app::Otri newkey, app::Vertex* pa, app::Vertex* pb, app::Vertex* pc, double topy))
    IL2CPP_REGISTER_METHOD(0x02639400, bool, RightOfHyperbola, (app::SweepLine * this_ptr, app::Otri* fronttri, app::Point* newsite))
    IL2CPP_REGISTER_METHOD(0x026395F0, double, CircleTop, (app::SweepLine * this_ptr, app::Vertex* pa, app::Vertex* pb, app::Vertex* pc, double ccwabc))
    IL2CPP_REGISTER_METHOD(0x026397F0, void, Check4DeadEvent, (app::SweepLine * this_ptr, app::Otri* checktri, app::SweepLine_SweepEvent__Array* eventheap, int32_t* heapsize))
    IL2CPP_REGISTER_METHOD(0x02639910, int32_t, RemoveGhosts, (app::SweepLine * this_ptr, app::Otri* startghost))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SweepLine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02639D50, void, cctor, ())
} // namespace app::classes::TriangleNet::Meshing::Algorithm::SweepLine
