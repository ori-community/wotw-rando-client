#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::JSONParser {
    IL2CPP_REGISTER_METHOD(0x01DE3CA0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01DE3F50, app::JSONNode *, Parse, (app::String * json))
    IL2CPP_REGISTER_METHODINFO(0x047398B8, JSONParser_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DE40D0, bool, TryDeserializeObject, (app::String * json, app::JSONNode * * obj))
    IL2CPP_REGISTER_METHOD(0x01DE41C0, app::String *, EscapeToJavascriptString, (app::String * json_string))
    IL2CPP_REGISTER_METHOD(0x01DE44B0, app::JSONNode *, ParseObject, (app::Char__Array * json, int32_t * index, bool * success))
    IL2CPP_REGISTER_METHOD(0x01DE47C0, app::JSONNode *, ParseArray, (app::Char__Array * json, int32_t * index, bool * success))
    IL2CPP_REGISTER_METHOD(0x01DE4A10, app::JSONNode *, ParseValue, (app::Char__Array * json, int32_t * index, bool * success))
    IL2CPP_REGISTER_METHOD(0x01DE4D40, app::JSONNode *, ParseString, (app::Char__Array * json, int32_t * index, bool * success))
    IL2CPP_REGISTER_METHOD(0x01DE5380, app::String *, ConvertFromUtf32, (int32_t utf32))
    IL2CPP_REGISTER_METHODINFO(0x0474AAB0, JSONParser_ConvertFromUtf32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DE5540, app::JSONNode *, ParseNumber, (app::Char__Array * json, int32_t * index, bool * success))
    IL2CPP_REGISTER_METHOD(0x01DE59F0, int32_t, GetLastIndexOfNumber, (app::Char__Array * json, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01DE5AE0, void, EatWhitespace, (app::Char__Array * json, int32_t * index))
    IL2CPP_REGISTER_METHOD(0x01DE5BD0, int32_t, LookAhead, (app::Char__Array * json, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01DE5C80, int32_t, NextToken, (app::Char__Array * json, int32_t * index))
    IL2CPP_REGISTER_METHOD(0x01DE6090, app::String *, Serialize, (app::JSONNode * node))
    IL2CPP_REGISTER_METHODINFO(0x04778EF8, JSONParser_Serialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DE6260, bool, SerializeValue, (app::JSONNode * value, app::StringBuilder * builder))
    IL2CPP_REGISTER_METHODINFO(0x047608A8, JSONParser_SerializeValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DE66D0, bool, SerializeObject, (app::IEnumerable_1_System_String_ * keys, app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * values, app::StringBuilder * builder))
    IL2CPP_REGISTER_METHOD(0x01DE6920, bool, SerializeArray, (app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * an_array, app::StringBuilder * builder))
    IL2CPP_REGISTER_METHOD(0x01DE6B70, bool, SerializeString, (app::String * a_string, app::StringBuilder * builder))
    IL2CPP_REGISTER_METHOD(0x01DE6EA0, bool, SerializeNumber, (double number, app::StringBuilder * builder))
}
