#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HeaderInfo_HeaderTypeInfo_2_System_DateTimeOffset_System_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_DateTimeOffset_.h>
#include <Modloader/app/structs/HttpHeaderKind__Enum.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Http::Headers::HeaderInfo_HeaderTypeInfo_2_System_DateTimeOffset_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0254BEE0, void, ctor, (app::HeaderInfo_HeaderTypeInfo_2_System_DateTimeOffset_System_Object_ * this_ptr, app::String* name, app::TryParseDelegate_1_System_DateTimeOffset_* parser, app::HttpHeaderKind__Enum header_kind))
    IL2CPP_REGISTER_METHOD(0x0254BF00, app::List_1_System_String_*, ToStringCollection, (app::HeaderInfo_HeaderTypeInfo_2_System_DateTimeOffset_System_Object_ * this_ptr, app::Object* collection))
} // namespace app::classes::System::Net::Http::Headers::HeaderInfo_HeaderTypeInfo_2_System_DateTimeOffset_System_Object_
