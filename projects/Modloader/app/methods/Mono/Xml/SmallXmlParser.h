#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SmallXmlParser.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SmallXmlParser_AttrListImpl.h>
#include <Modloader/app/structs/SmallXmlParser_IContentHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextReader.h>

namespace app::classes::Mono::Xml::SmallXmlParser {
    IL2CPP_REGISTER_METHOD(0x02287290, void, ctor, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02287650, app::Exception*, Error, (app::SmallXmlParser * this_ptr, app::String* msg))
    IL2CPP_REGISTER_METHOD(0x022878A0, app::Exception*, UnexpectedEndError, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022879F0, bool, IsNameChar, (app::SmallXmlParser * this_ptr, char16_t c, bool start))
    IL2CPP_REGISTER_METHOD(0x02287B50, bool, IsWhitespace, (app::SmallXmlParser * this_ptr, int32_t c))
    IL2CPP_REGISTER_METHOD(0x02287B70, void, SkipWhitespaces_1, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02287B80, void, HandleWhitespaces, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02287E00, void, SkipWhitespaces_2, (app::SmallXmlParser * this_ptr, bool expected))
    IL2CPP_REGISTER_METHOD(0x02287F30, int32_t, Peek, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02287F60, int32_t, Read, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02287FC0, void, Expect, (app::SmallXmlParser * this_ptr, int32_t c))
    IL2CPP_REGISTER_METHOD(0x02288110, app::String*, ReadUntil, (app::SmallXmlParser * this_ptr, char16_t until, bool handle_references))
    IL2CPP_REGISTER_METHOD(0x02288410, app::String*, ReadName, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02288660, void, Parse, (app::SmallXmlParser * this_ptr, app::TextReader* input, app::SmallXmlParser_IContentHandler* handler))
    IL2CPP_REGISTER_METHOD(0x02288880, void, Cleanup, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02288920, void, ReadContent, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022890B0, void, HandleBufferedContent, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022891E0, void, ReadCharacters, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02289450, void, ReadReference, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02289720, int32_t, ReadCharacterReference, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022898B0, void, ReadAttribute, (app::SmallXmlParser * this_ptr, app::SmallXmlParser_AttrListImpl* a))
    IL2CPP_REGISTER_METHOD(0x02289B10, void, ReadCDATASection, (app::SmallXmlParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228A080, void, ReadComment, (app::SmallXmlParser * this_ptr))
} // namespace app::classes::Mono::Xml::SmallXmlParser
