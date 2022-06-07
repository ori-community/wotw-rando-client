#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AllContainer_1_ISenseInteractable_ {
    IL2CPP_REGISTER_METHOD(0x019D79F0, bool, Contains, (app::AllContainer_1_ISenseInteractable_ * this_ptr, app::ISenseInteractable * item))
    IL2CPP_REGISTER_METHODINFO(0x04760C58, AllContainer_1_ISenseInteractable__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_ISenseInteractable_ * this_ptr, app::ISenseInteractable * item))
    IL2CPP_REGISTER_METHODINFO(0x047299F8, AllContainer_1_ISenseInteractable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_ISenseInteractable_ * this_ptr, app::ISenseInteractable * item))
    IL2CPP_REGISTER_METHODINFO(0x04710B48, AllContainer_1_ISenseInteractable__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_ISenseInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794560, AllContainer_1_ISenseInteractable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::ISenseInteractable *, get_Item, (app::AllContainer_1_ISenseInteractable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471B498, AllContainer_1_ISenseInteractable__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_ISenseInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473ABE8, AllContainer_1_ISenseInteractable__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_ISenseInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047927B0, AllContainer_1_ISenseInteractable___ctor__MethodInfo)
}
