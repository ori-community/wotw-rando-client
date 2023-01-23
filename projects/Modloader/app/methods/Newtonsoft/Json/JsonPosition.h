#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JsonPosition__Boxed.h>
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/StringWriter.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/IJsonLineInfo.h>

namespace app::classes::Newtonsoft::Json::JsonPosition {
    IL2CPP_REGISTER_METHOD(0x00167100, void, ctor, (app::JsonPosition__Boxed * this_ptr, app::JsonContainerType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00167110, int32_t, CalculateLength, (app::JsonPosition__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F468, JsonPosition_CalculateLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00167120, void, WriteTo, (app::JsonPosition__Boxed * this_ptr, app::StringBuilder* sb, app::StringWriter** writer, app::Char__Array** buffer))
    IL2CPP_REGISTER_METHOD(0x01A65FC0, bool, TypeHasIndex, (app::JsonContainerType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01A65FD0, app::String*, BuildPath, (app::List_1_Newtonsoft_Json_JsonPosition_ * positions, app::Nullable_1_Newtonsoft_Json_JsonPosition_ current_position))
    IL2CPP_REGISTER_METHOD(0x01A66390, app::String*, FormatMessage, (app::IJsonLineInfo * line_info, app::String* path, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A666A0, void, cctor, ())
} // namespace app::classes::Newtonsoft::Json::JsonPosition
