#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_IO_Directory_SearchData_.h>
#include <Modloader/app/structs/Directory_SearchData.h>

namespace app::classes::System::Collections::Generic::List_1_System_IO_Directory_SearchData_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_IO_Directory_SearchData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_IO_Directory_SearchData_ * this_ptr, app::Directory_SearchData* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Directory_SearchData*, get_Item, (app::List_1_System_IO_Directory_SearchData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_System_IO_Directory_SearchData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_IO_Directory_SearchData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_System_IO_Directory_SearchData_ * this_ptr, int32_t index, app::Directory_SearchData* item))
} // namespace app::classes::System::Collections::Generic::List_1_System_IO_Directory_SearchData_
