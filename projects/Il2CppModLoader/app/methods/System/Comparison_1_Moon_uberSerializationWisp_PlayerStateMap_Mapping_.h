#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B87FA0, int32_t, Invoke, (app::Comparison_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::PlayerStateMap_Mapping x, app::PlayerStateMap_Mapping y))
    IL2CPP_REGISTER_METHOD(0x02C7B000, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::PlayerStateMap_Mapping x, app::PlayerStateMap_Mapping y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_
