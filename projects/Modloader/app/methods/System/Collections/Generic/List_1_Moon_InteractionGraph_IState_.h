#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_InteractionGraph_IState_.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_IState_.h>
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/Predicate_1_Moon_InteractionGraph_IState_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_InteractionGraph_IState_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_InteractionGraph_IState_, GetEnumerator, (app::List_1_Moon_InteractionGraph_IState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B0C0, List_1_Moon_InteractionGraph_IState__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_InteractionGraph_IState_ * this_ptr, app::IState_1* item))
    IL2CPP_REGISTER_METHODINFO(0x0473B430, List_1_Moon_InteractionGraph_IState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_Moon_InteractionGraph_IState_ * this_ptr, app::Predicate_1_Moon_InteractionGraph_IState_* match))
    IL2CPP_REGISTER_METHODINFO(0x04767010, List_1_Moon_InteractionGraph_IState__FindIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IState_1*, get_Item, (app::List_1_Moon_InteractionGraph_IState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04782E80, List_1_Moon_InteractionGraph_IState__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_Moon_InteractionGraph_IState_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047324E8, List_1_Moon_InteractionGraph_IState___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_InteractionGraph_IState_
