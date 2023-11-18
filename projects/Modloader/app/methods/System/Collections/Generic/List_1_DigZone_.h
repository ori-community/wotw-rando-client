#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_DigZone_.h>
#include <Modloader/app/structs/Converter_2_DigZone_UnityEngine_MonoBehaviour_.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/List_1_DigZone_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MonoBehaviour_.h>

namespace app::classes::System::Collections::Generic::List_1_DigZone_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_DigZone_, GetEnumerator, (app::List_1_DigZone_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DigZone_ * this_ptr, app::DigZone* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_DigZone_ * this_ptr, app::DigZone* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DigZone*, get_Item, (app::List_1_DigZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DigZone_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_DigZone_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DigZone_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB9F00, app::List_1_UnityEngine_MonoBehaviour_*, ConvertAll, (app::List_1_DigZone_ * this_ptr, app::Converter_2_DigZone_UnityEngine_MonoBehaviour_* converter))
} // namespace app::classes::System::Collections::Generic::List_1_DigZone_
