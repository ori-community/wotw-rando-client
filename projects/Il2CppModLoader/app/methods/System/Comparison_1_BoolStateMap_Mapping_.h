#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_BoolStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_BoolStateMap_Mapping_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B85030, int32_t, Invoke, (app::Comparison_1_BoolStateMap_Mapping_ * this_ptr, app::BoolStateMap_Mapping x, app::BoolStateMap_Mapping y))
    IL2CPP_REGISTER_METHOD(0x02B853A0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_BoolStateMap_Mapping_ * this_ptr, app::BoolStateMap_Mapping x, app::BoolStateMap_Mapping y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_BoolStateMap_Mapping_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_BoolStateMap_Mapping_
