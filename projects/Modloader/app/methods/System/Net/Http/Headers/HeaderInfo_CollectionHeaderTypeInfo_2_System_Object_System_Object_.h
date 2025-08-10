#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/HttpHeaderKind__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TryParseListDelegate_1_System_Object_.h>

namespace app::classes::System::Net::Http::Headers::HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Separator, app::HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0254BE80,
        void,
        ctor,
        app::HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object_* this_ptr,
        app::String* name,
        app::TryParseListDelegate_1_System_Object_* parser,
        app::HttpHeaderKind__Enum header_kind,
        int32_t minimal_count,
        app::String* separator
    )
} // namespace app::classes::System::Net::Http::Headers::HeaderInfo_CollectionHeaderTypeInfo_2_System_Object_System_Object_
