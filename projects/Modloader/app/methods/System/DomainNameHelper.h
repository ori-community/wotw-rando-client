#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::DomainNameHelper {
    IL2CPP_REGISTER_METHOD(0x020056B0, app::String*, ParseCanonicalName, (app::String * str, int32_t start, int32_t end, bool* loopback))
    IL2CPP_REGISTER_METHOD(0x020058A0, bool, IsValid, (char16_t* name, uint16_t pos, int32_t* returned_end, bool* not_canonical, bool not_implicit_file))
    IL2CPP_REGISTER_METHOD(0x020059F0, bool, IsValidByIri, (char16_t* name, uint16_t pos, int32_t* returned_end, bool* not_canonical, bool not_implicit_file))
    IL2CPP_REGISTER_METHOD(0x02005BD0, app::String*, IdnEquivalent_1, (char16_t* hostname, int32_t start, int32_t end, bool* all_ascii, bool* at_least_one_valid_idn))
    IL2CPP_REGISTER_METHOD(0x02005F00, app::String*, IdnEquivalent_2, (char16_t* hostname, int32_t start, int32_t end, bool* all_ascii, app::String** bidi_stripped_host))
    IL2CPP_REGISTER_METHOD(0x02006160, bool, IsIdnAce_1, (app::String * input, int32_t index))
    IL2CPP_REGISTER_METHOD(0x020061E0, bool, IsIdnAce_2, (char16_t* input, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02006210, app::String*, UnicodeEquivalent_1, (app::String * idn_host, char16_t* hostname, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x020063C0, app::String*, UnicodeEquivalent_2, (char16_t* hostname, int32_t start, int32_t end, bool* all_ascii, bool* at_least_one_valid_idn))
    IL2CPP_REGISTER_METHOD(0x02006890, bool, IsASCIILetterOrDigit, (char16_t character, bool* not_canonical))
    IL2CPP_REGISTER_METHOD(0x020068C0, bool, IsValidDomainLabelCharacter, (char16_t character, bool* not_canonical))
} // namespace app::classes::System::DomainNameHelper
