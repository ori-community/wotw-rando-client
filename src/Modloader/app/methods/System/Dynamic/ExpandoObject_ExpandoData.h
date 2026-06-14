#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoClass.h>
#include <Modloader/app/structs/ExpandoObject_ExpandoData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Dynamic::ExpandoObject_ExpandoData {
    IL2CPP_REGISTER_METHOD(0x01A92420, app::Object*, get_Item, app::ExpandoObject_ExpandoData* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F8F6D0, void, set_Item, app::ExpandoObject_ExpandoData* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Version, app::ExpandoObject_ExpandoData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_Length, app::ExpandoObject_ExpandoData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F8F750, void, ctor_1, app::ExpandoObject_ExpandoData* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E332C0,
        void,
        ctor_2,
        app::ExpandoObject_ExpandoData* this_ptr,
        app::ExpandoClass* klass,
        app::Object__Array* data,
        int32_t version
    )
    IL2CPP_REGISTER_METHOD(0x01F8F810, app::ExpandoObject_ExpandoData*, UpdateClass, app::ExpandoObject_ExpandoData* this_ptr, app::ExpandoClass* new_class)
    IL2CPP_REGISTER_METHOD(0x01F8FBB0, int32_t, GetAlignedSize, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01F8FBC0, void, cctor, )
} // namespace app::classes::System::Dynamic::ExpandoObject_ExpandoData
