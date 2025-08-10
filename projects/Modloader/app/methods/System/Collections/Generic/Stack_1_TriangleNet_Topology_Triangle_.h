#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_T_Enumerator_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Stack_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Triangle.h>

namespace app::classes::System::Collections::Generic::Stack_1_TriangleNet_Topology_Triangle_ {
    IL2CPP_REGISTER_METHOD(0x02CF78E0, void, ctor_1, app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::Triangle*, Pop, app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr, app::Triangle* item)
    IL2CPP_REGISTER_METHOD(
        0x02CF7E60,
        app::Stack_1_T_Enumerator_TriangleNet_Topology_Triangle_,
        GetEnumerator,
        app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_2, app::Stack_1_TriangleNet_Topology_Triangle_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_TriangleNet_Topology_Triangle_
