#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberStateData.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_UberStateVisualization_UberStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x0014DD20,
        void,
        ctor,
        app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr,
        app::List_1_Moon_UberStateVisualization_UberStateData_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DD60, bool, MoveNext, app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DE60, bool, MoveNextRare, app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014DEB0, app::UberStateData, get_Current, app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014DEE0,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014DFD0, void, IEnumerator_Reset, app::List_1_T_Enumerator_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_UberStateVisualization_UberStateData_
