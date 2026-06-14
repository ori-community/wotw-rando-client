#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/ResourceLocator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Resources_ResourceLocator_ {
    IL2CPP_REGISTER_METHOD(
        0x02BC76A0,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_System_Resources_ResourceLocator_* this_ptr,
        app::String* key,
        app::ResourceLocator* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor,
        app::Dictionary_2_System_String_System_Resources_ResourceLocator_* this_ptr,
        app::IEqualityComparer_1_System_String_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC57C0,
        void,
        set_Item,
        app::Dictionary_2_System_String_System_Resources_ResourceLocator_* this_ptr,
        app::String* key,
        app::ResourceLocator value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC5800,
        void,
        Add,
        app::Dictionary_2_System_String_System_Resources_ResourceLocator_* this_ptr,
        app::String* key,
        app::ResourceLocator value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Resources_ResourceLocator_
