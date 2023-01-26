#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SparselyPopulatedArrayFragment_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SparselyPopulatedArrayAddInfo_1_System_Object_.h>
#include <Modloader/app/structs/SparselyPopulatedArray_1_System_Object_.h>

namespace app::classes::System::Threading::SparselyPopulatedArray_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02775660, app::SparselyPopulatedArrayFragment_1_System_Object_*, get_Tail, (app::SparselyPopulatedArray_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02775520, void, ctor, (app::SparselyPopulatedArray_1_System_Object_ * this_ptr, int32_t initial_size))
    IL2CPP_REGISTER_METHOD(0x02775670, app::SparselyPopulatedArrayAddInfo_1_System_Object_, Add, (app::SparselyPopulatedArray_1_System_Object_ * this_ptr, app::Object* element))
} // namespace app::classes::System::Threading::SparselyPopulatedArray_1_System_Object_
