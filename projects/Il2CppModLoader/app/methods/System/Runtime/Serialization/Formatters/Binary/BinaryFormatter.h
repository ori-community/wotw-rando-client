#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter {
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_AssemblyFormat, (app::BinaryFormatter * this_ptr, app::FormatterAssemblyStyle__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SurrogateSelector, (app::BinaryFormatter * this_ptr, app::ISurrogateSelector* value))
    IL2CPP_REGISTER_METHOD(0x01D8D4A0, void, ctor_1, (app::BinaryFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D8D4E0, void, ctor_2, (app::BinaryFormatter * this_ptr, app::ISurrogateSelector* selector, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01D8D500, app::Object*, Deserialize_1, (app::BinaryFormatter * this_ptr, app::Stream* serialization_stream))
    IL2CPP_REGISTER_METHOD(0x01D8D520, app::Object*, Deserialize_2, (app::BinaryFormatter * this_ptr, app::Stream* serialization_stream, app::HeaderHandler* handler, bool f_check))
    IL2CPP_REGISTER_METHODINFO(0x04748850, BinaryFormatter_Deserialize_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8D9A0, app::Object*, Deserialize_3, (app::BinaryFormatter * this_ptr, app::Stream* serialization_stream, app::HeaderHandler* handler))
    IL2CPP_REGISTER_METHOD(0x01D8D9C0, void, Serialize_1, (app::BinaryFormatter * this_ptr, app::Stream* serialization_stream, app::Object* graph))
    IL2CPP_REGISTER_METHOD(0x01D8D9E0, void, Serialize_2, (app::BinaryFormatter * this_ptr, app::Stream* serialization_stream, app::Object* graph, app::Header__Array* headers))
    IL2CPP_REGISTER_METHOD(0x01D8DA00, void, Serialize_3, (app::BinaryFormatter * this_ptr, app::Stream* serialization_stream, app::Object* graph, app::Header__Array* headers, bool f_check))
    IL2CPP_REGISTER_METHODINFO(0x04747CE0, BinaryFormatter_Serialize_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D8DF50, app::TypeInformation*, GetTypeInformation, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01D8E300, void, cctor, ())
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter
