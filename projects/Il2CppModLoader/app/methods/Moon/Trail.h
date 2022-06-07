#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Trail {
    IL2CPP_REGISTER_METHOD(0x02567670, float, GetLenght, (app::Trail * this_ptr, app::List_1_Moon_Trail_Point_ * input))
    IL2CPP_REGISTER_METHOD(0x025677F0, void, Clear, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025678D0, void, Awake, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02567960, void, OnValidate, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02567A20, void, OnEnable, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02567A30, void, OnDisable, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02567AD0, void, LateUpdate, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02568090, void, CreateMesh, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02568210, void, Simulate, (app::Trail * this_ptr, float delta_time, bool external_simulation))
    IL2CPP_REGISTER_METHOD(0x025692D0, void, EmitPoint, (app::Trail * this_ptr, app::Trail_Point point))
    IL2CPP_REGISTER_METHOD(0x025693A0, void, UpdatePointsLifecycle, (app::Trail * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02569880, void, UpdateRenderablePointsLifecycle, (app::Trail * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02569B30, void, ClearMeshData, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02569D70, void, CommitMeshData, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02569F10, app::List_1_Moon_Trail_Point_ *, UpdatedRenderablePoints, (app::Trail * this_ptr, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x0256AA20, app::List_1_Moon_Trail_Point_ *, GetRenderablePoints, (app::Trail * this_ptr, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x0256B340, void, UpdateTrailMesh, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0256B650, app::Trail_CurveFrame, InitializeCurveFrame, (app::Trail * this_ptr, app::Vector3 point, app::Vector3 next_point))
    IL2CPP_REGISTER_METHOD(0x0256BAF0, void, UpdateSegmentMesh, (app::Trail * this_ptr, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x0256CD00, void, OnDrawGizmos, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0256D3E0, void, ctor, (app::Trail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0256E450, void, cctor, ())
}
