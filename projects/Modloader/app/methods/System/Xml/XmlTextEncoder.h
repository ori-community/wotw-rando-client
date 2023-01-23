#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlTextEncoder.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::XmlTextEncoder {
    IL2CPP_REGISTER_METHOD(0x01714D10, void, ctor, (app::XmlTextEncoder * this_ptr, app::TextWriter* text_writer))
    IL2CPP_REGISTER_METHOD(0x01714D40, void, set_QuoteChar, (app::XmlTextEncoder * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01714D50, void, StartAttribute, (app::XmlTextEncoder * this_ptr, bool cache_attr_value))
    IL2CPP_REGISTER_METHOD(0x01714ED0, void, EndAttribute, (app::XmlTextEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714F10, app::String*, get_AttributeValue, (app::XmlTextEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01714FC0, void, WriteSurrogateChar, (app::XmlTextEncoder * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHODINFO(0x04754AD0, XmlTextEncoder_WriteSurrogateChar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017150F0, void, Write_1, (app::XmlTextEncoder * this_ptr, app::Char__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04794478, XmlTextEncoder_Write__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017155B0, void, WriteSurrogateCharEntity, (app::XmlTextEncoder * this_ptr, uint16_t low_char, uint16_t high_char))
    IL2CPP_REGISTER_METHODINFO(0x04790170, XmlTextEncoder_WriteSurrogateCharEntity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017157B0, void, Write_2, (app::XmlTextEncoder * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHODINFO(0x0478A598, XmlTextEncoder_Write_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01715DA0, void, WriteRawWithSurrogateChecking, (app::XmlTextEncoder * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHODINFO(0x0471EFA8, XmlTextEncoder_WriteRawWithSurrogateChecking__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01716010, void, WriteRaw, (app::XmlTextEncoder * this_ptr, app::Char__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04708C78, XmlTextEncoder_WriteRaw__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017161F0, void, WriteCharEntity, (app::XmlTextEncoder * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHODINFO(0x0473E918, XmlTextEncoder_WriteCharEntity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01716360, void, WriteEntityRef, (app::XmlTextEncoder * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x017163E0, void, WriteStringFragment, (app::XmlTextEncoder * this_ptr, app::String* str, int32_t offset, int32_t count, app::Char__Array* helper_buffer))
    IL2CPP_REGISTER_METHOD(0x017164A0, void, WriteCharEntityImpl_1, (app::XmlTextEncoder * this_ptr, uint16_t ch))
    IL2CPP_REGISTER_METHOD(0x01716560, void, WriteCharEntityImpl_2, (app::XmlTextEncoder * this_ptr, app::String* str_val))
    IL2CPP_REGISTER_METHOD(0x01716650, void, WriteEntityRefImpl, (app::XmlTextEncoder * this_ptr, app::String* name))
} // namespace app::classes::System::Xml::XmlTextEncoder
