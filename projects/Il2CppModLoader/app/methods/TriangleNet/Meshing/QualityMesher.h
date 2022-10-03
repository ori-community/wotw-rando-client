#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::QualityMesher {
    IL2CPP_REGISTER_METHOD(0x02B13200, void, ctor, (app::QualityMesher * this_ptr, app::Mesh_1* mesh, app::Configuration_1* config))
    IL2CPP_REGISTER_METHOD(0x02B13840, void, Apply, (app::QualityMesher * this_ptr, app::QualityOptions* quality, bool delaunay))
    IL2CPP_REGISTER_METHOD(0x02B13A80, void, AddBadSubseg, (app::QualityMesher * this_ptr, app::BadSubseg* badseg))
    IL2CPP_REGISTER_METHOD(0x02B13B20, int32_t, CheckSeg4Encroach, (app::QualityMesher * this_ptr, app::Osub* testsubseg))
    IL2CPP_REGISTER_METHOD(0x02B140F0, void, TestTriangle, (app::QualityMesher * this_ptr, app::Otri* testtri))
    IL2CPP_REGISTER_METHOD(0x02B14A50, void, TallyEncs, (app::QualityMesher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B14BE0, void, SplitEncSegs, (app::QualityMesher * this_ptr, bool triflaws))
    IL2CPP_REGISTER_METHODINFO(0x0470E150, QualityMesher_SplitEncSegs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B15AD0, void, TallyFaces, (app::QualityMesher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B15CA0, void, SplitTriangle, (app::QualityMesher * this_ptr, app::BadTriangle* badtri))
    IL2CPP_REGISTER_METHODINFO(0x047303C0, QualityMesher_SplitTriangle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B16450, void, EnforceQuality, (app::QualityMesher * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::QualityMesher
