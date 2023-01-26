#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_.h>
#include <Modloader/app/structs/ExceptionEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ * this_ptr, int32_t key, app::ExceptionEntry** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ * this_ptr, int32_t key, app::ExceptionEntry* value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_
