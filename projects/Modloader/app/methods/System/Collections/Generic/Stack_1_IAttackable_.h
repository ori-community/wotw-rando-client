#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Stack_1_IAttackable_ {
    IL2CPP_REGISTER_METHOD(0x02CF7B70, bool, Contains, (app::Stack_1_IAttackable_ * this_ptr, app::IAttackable* item))
    IL2CPP_REGISTER_METHODINFO(0x04758498, Stack_1_IAttackable__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_IAttackable_ * this_ptr, app::IAttackable* item))
    IL2CPP_REGISTER_METHODINFO(0x04746A88, Stack_1_IAttackable__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D758, Stack_1_IAttackable__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::IAttackable*, Pop, (app::Stack_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764240, Stack_1_IAttackable__Pop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (app::Stack_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735000, Stack_1_IAttackable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D680, Stack_1_IAttackable___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_IAttackable_
