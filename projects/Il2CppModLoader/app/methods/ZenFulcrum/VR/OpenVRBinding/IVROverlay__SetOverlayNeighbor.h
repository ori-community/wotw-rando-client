#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayNeighbor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7A6D0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::EOverlayDirection__Enum e_direction, uint64_t ul_from, uint64_t ul_to))
    IL2CPP_REGISTER_METHOD(0x02D80410, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::EOverlayDirection__Enum e_direction, uint64_t ul_from, uint64_t ul_to, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayNeighbor * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayNeighbor
