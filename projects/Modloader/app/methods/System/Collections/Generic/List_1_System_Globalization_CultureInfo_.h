#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Globalization_CultureInfo_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Globalization_CultureInfo_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Globalization_CultureInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Globalization_CultureInfo_ * this_ptr, app::CultureInfo* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Globalization_CultureInfo_, GetEnumerator, (app::List_1_System_Globalization_CultureInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Globalization_CultureInfo_ * this_ptr, app::CultureInfo* item))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_System_Globalization_CultureInfo_ * this_ptr, int32_t index, app::CultureInfo* item))
} // namespace app::classes::System::Collections::Generic::List_1_System_Globalization_CultureInfo_
