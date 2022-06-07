#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VectorSerializer {
    IL2CPP_REGISTER_METHOD(0x013BB290, app::List_1_UnityEngine_Vector2_ *, Ser2ToVector2List, (app::List_1_Vector2Ser_ * ser_list))
    IL2CPP_REGISTER_METHOD(0x013BB590, app::List_1_Vector2Ser_ *, Vector2ToSer2List, (app::List_1_UnityEngine_Vector2_ * vec_list))
    IL2CPP_REGISTER_METHOD(0x013BB890, app::List_1_UnityEngine_Vector3_ *, Ser3ToVector3List, (app::List_1_Vector3Ser_ * ser_list))
    IL2CPP_REGISTER_METHOD(0x013BBBB0, app::Vector3__Array *, Ser3ToVector3Array, (app::List_1_Vector3Ser_ * ser_list))
    IL2CPP_REGISTER_METHOD(0x013BBCF0, app::List_1_Vector3Ser_ *, Vector3ToSer3List_1, (app::List_1_UnityEngine_Vector3_ * vec_list))
    IL2CPP_REGISTER_METHOD(0x013BBFF0, app::List_1_Vector3Ser_ *, Vector3ToSer3List_2, (app::Vector3__Array * vec_list))
    IL2CPP_REGISTER_METHOD(0x013BC2F0, app::List_1_UnityEngine_Vector4_ *, Ser4ToVector4List, (app::List_1_Vector4Ser_ * ser_list))
    IL2CPP_REGISTER_METHOD(0x013BC5E0, app::List_1_Vector4Ser_ *, Vector4ToSer4List, (app::List_1_UnityEngine_Vector4_ * vec_list))
    IL2CPP_REGISTER_METHOD(0x013BC8C0, app::List_1_UnityEngine_Quaternion_ *, Ser4ToQuartenionList, (app::List_1_Vector4Ser_ * ser_list))
    IL2CPP_REGISTER_METHOD(0x013BCBB0, app::List_1_Vector4Ser_ *, QuartenionToSer4List, (app::List_1_UnityEngine_Quaternion_ * vec_list))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VectorSerializer * this_ptr))
}
