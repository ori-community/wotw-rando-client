#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LargeArrayBuilder_1_System_Object___Boxed.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Generic::LargeArrayBuilder_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00152230, void, ctor_1, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr, bool initialize))
    IL2CPP_REGISTER_METHOD(0x001522F0, void, ctor_2, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr, int32_t max_capacity))
    IL2CPP_REGISTER_METHOD(0x001523A0, void, AddRange, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr, app::IEnumerable_1_System_Object_* items))
    IL2CPP_REGISTER_METHOD(0x001523B0, void, CopyTo, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr, app::Object__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x001523C0, app::Object__Array*, GetBuffer, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00152470, app::Object__Array*, ToArray, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00152550, bool, TryMove, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr, app::Object__Array** array))
    IL2CPP_REGISTER_METHOD(0x00152580, void, AllocateBuffer, (app::LargeArrayBuilder_1_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::LargeArrayBuilder_1_System_Object_
