#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Queue_1_PlayFab_EventsModels_EventContents_ {
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_PlayFab_EventsModels_EventContents_ * this_ptr, app::EventContents* item))
    IL2CPP_REGISTER_METHODINFO(0x0473A4A0, Queue_1_PlayFab_EventsModels_EventContents__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::EventContents*, Dequeue, (app::Queue_1_PlayFab_EventsModels_EventContents_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776658, Queue_1_PlayFab_EventsModels_EventContents__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_PlayFab_EventsModels_EventContents_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777D50, Queue_1_PlayFab_EventsModels_EventContents__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_PlayFab_EventsModels_EventContents_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047537B0, Queue_1_PlayFab_EventsModels_EventContents___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_PlayFab_EventsModels_EventContents_
