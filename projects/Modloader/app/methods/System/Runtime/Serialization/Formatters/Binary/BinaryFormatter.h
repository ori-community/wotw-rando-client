#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryFormatter.h>
#include <Modloader/app/structs/FormatterAssemblyStyle__Enum.h>
#include <Modloader/app/structs/HeaderHandler.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeInformation.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter {
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_AssemblyFormat, app::BinaryFormatter* this_ptr, app::FormatterAssemblyStyle__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SurrogateSelector, app::BinaryFormatter* this_ptr, app::ISurrogateSelector* value)
    IL2CPP_REGISTER_METHOD(0x01D8D4A0, void, ctor_1, app::BinaryFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D8D4E0, void, ctor_2, app::BinaryFormatter* this_ptr, app::ISurrogateSelector* selector, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01D8D500, app::Object*, Deserialize_1, app::BinaryFormatter* this_ptr, app::Stream* serialization_stream)
    IL2CPP_REGISTER_METHOD(
        0x01D8D520,
        app::Object*,
        Deserialize_2,
        app::BinaryFormatter* this_ptr,
        app::Stream* serialization_stream,
        app::HeaderHandler* handler,
        bool f_check
    )
    IL2CPP_REGISTER_METHOD(
        0x01D8D9A0,
        app::Object*,
        Deserialize_3,
        app::BinaryFormatter* this_ptr,
        app::Stream* serialization_stream,
        app::HeaderHandler* handler
    )
    IL2CPP_REGISTER_METHOD(0x01D8D9C0, void, Serialize_1, app::BinaryFormatter* this_ptr, app::Stream* serialization_stream, app::Object* graph)
    IL2CPP_REGISTER_METHOD(
        0x01D8D9E0,
        void,
        Serialize_2,
        app::BinaryFormatter* this_ptr,
        app::Stream* serialization_stream,
        app::Object* graph,
        app::Header__Array* headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01D8DA00,
        void,
        Serialize_3,
        app::BinaryFormatter* this_ptr,
        app::Stream* serialization_stream,
        app::Object* graph,
        app::Header__Array* headers,
        bool f_check
    )
    IL2CPP_REGISTER_METHOD(0x01D8DF50, app::TypeInformation*, GetTypeInformation, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01D8E300, void, cctor, )
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter
