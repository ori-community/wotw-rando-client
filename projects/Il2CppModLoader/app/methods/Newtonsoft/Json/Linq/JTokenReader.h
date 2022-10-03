#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Linq::JTokenReader {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::JToken*, get_CurrentToken, (app::JTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018570A0, void, ctor, (app::JTokenReader * this_ptr, app::JToken* token))
    IL2CPP_REGISTER_METHOD(0x01857150, bool, Read, (app::JTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018572D0, bool, ReadOver, (app::JTokenReader * this_ptr, app::JToken* t))
    IL2CPP_REGISTER_METHOD(0x018573D0, bool, ReadToEnd, (app::JTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857400, app::Nullable_1_Newtonsoft_Json_JsonToken_, GetEndToken, (app::JTokenReader * this_ptr, app::JContainer* c))
    IL2CPP_REGISTER_METHODINFO(0x04747240, JTokenReader_GetEndToken__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01857570, bool, ReadInto, (app::JTokenReader * this_ptr, app::JContainer* c))
    IL2CPP_REGISTER_METHOD(0x018575F0, bool, SetEnd, (app::JTokenReader * this_ptr, app::JContainer* c))
    IL2CPP_REGISTER_METHOD(0x018577E0, void, SetToken, (app::JTokenReader * this_ptr, app::JToken* token))
    IL2CPP_REGISTER_METHODINFO(0x04706B40, JTokenReader_SetToken__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01857E10, app::String*, SafeToString, (app::JTokenReader * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01857E30, bool, IJsonLineInfo_HasLineInfo, (app::JTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857ED0, int32_t, IJsonLineInfo_get_LineNumber, (app::JTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857F70, int32_t, IJsonLineInfo_get_LinePosition, (app::JTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01858010, app::String*, get_Path, (app::JTokenReader * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Linq::JTokenReader
