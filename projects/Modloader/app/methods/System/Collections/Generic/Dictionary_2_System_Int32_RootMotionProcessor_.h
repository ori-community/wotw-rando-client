#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_RootMotionProcessor_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_RootMotionProcessor_.h>
#include <Modloader/app/structs/RootMotionProcessor.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_RootMotionProcessor_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_RootMotionProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_RootMotionProcessor_ * this_ptr, int32_t key, app::RootMotionProcessor** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_RootMotionProcessor_ * this_ptr, int32_t key, app::RootMotionProcessor* value))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_RootMotionProcessor_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_RootMotionProcessor_, GetEnumerator, (app::Dictionary_2_System_Int32_RootMotionProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_RootMotionProcessor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_RootMotionProcessor_
