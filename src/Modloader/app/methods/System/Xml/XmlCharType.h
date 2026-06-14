#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlCharType__Boxed.h>

namespace app::classes::System::Xml::XmlCharType {
    IL2CPP_REGISTER_METHOD(0x0195F1F0, app::Object*, get_StaticLock, )
    IL2CPP_REGISTER_METHOD(0x0195F360, void, InitInstance, )
    IL2CPP_REGISTER_METHOD(0x0195F6C0, void, SetProperties, app::String* ranges, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::XmlCharType__Boxed* this_ptr, app::Byte__Array* char_properties)
    IL2CPP_REGISTER_METHOD(0x0195F7E0, app::XmlCharType, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x00153570, bool, IsWhiteSpace, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x001535B0, bool, IsNCNameSingleChar, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x001535F0, bool, IsStartNCNameSingleChar, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x00153630, bool, IsNameSingleChar, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x00153680, bool, IsCharData, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x001536C0, bool, IsPubidChar, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x001536D0, bool, IsTextChar, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x00153710, bool, IsLetter, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x00153750, bool, IsNCNameCharXml4e, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x00153790, bool, IsStartNCNameCharXml4e, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x001537E0, bool, IsNameCharXml4e, app::XmlCharType__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0195FA30, bool, IsDigit, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0195FA40, bool, IsHighSurrogate, int32_t ch)
    IL2CPP_REGISTER_METHOD(0x0195FA50, bool, IsLowSurrogate, int32_t ch)
    IL2CPP_REGISTER_METHOD(0x0195FA60, bool, IsSurrogate, int32_t ch)
    IL2CPP_REGISTER_METHOD(0x0195FA70, int32_t, CombineSurrogateChar, int32_t low_char, int32_t high_char)
    IL2CPP_REGISTER_METHOD(0x0195FA90, void, SplitSurrogateChar, int32_t combined_char, char16_t* low_char, char16_t* high_char)
    IL2CPP_REGISTER_METHOD(0x00153830, bool, IsOnlyWhitespace, app::XmlCharType__Boxed* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x00153850, int32_t, IsOnlyWhitespaceWithPos, app::XmlCharType__Boxed* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x00153860, int32_t, IsOnlyCharData, app::XmlCharType__Boxed* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x0195FC30, bool, IsOnlyDigits, app::String* str, int32_t start_pos, int32_t len)
    IL2CPP_REGISTER_METHOD(0x00153870, int32_t, IsPublicId, app::XmlCharType__Boxed* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x0195FD00, bool, InRange, int32_t value, int32_t start, int32_t end)
} // namespace app::classes::System::Xml::XmlCharType
