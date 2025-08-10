#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArgumentException.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/RegexCharClass.h>
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/RegexOptions__Enum.h>
#include <Modloader/app/structs/RegexParser.h>
#include <Modloader/app/structs/RegexReplacement.h>
#include <Modloader/app/structs/RegexTree.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::RegularExpressions::RegexParser {
    IL2CPP_REGISTER_METHOD(0x02597B50, app::RegexTree*, Parse, app::String* re, app::RegexOptions__Enum op)
    IL2CPP_REGISTER_METHOD(
        0x02597F70,
        app::RegexReplacement*,
        ParseReplacement,
        app::String* rep,
        app::Hashtable* caps,
        int32_t capsize,
        app::Hashtable* capnames,
        app::RegexOptions__Enum op
    )
    IL2CPP_REGISTER_METHOD(0x02598260, app::String*, Escape, app::String* input)
    IL2CPP_REGISTER_METHOD(0x02598540, void, ctor, app::RegexParser* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x02598770, void, SetPattern, app::RegexParser* this_ptr, app::String* re)
    IL2CPP_REGISTER_METHOD(0x02598830, void, Reset, app::RegexParser* this_ptr, app::RegexOptions__Enum topopts)
    IL2CPP_REGISTER_METHOD(0x02598970, app::RegexNode*, ScanRegex, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02599350, app::RegexNode*, ScanReplacement, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02599590, app::RegexCharClass*, ScanCharClass_1, app::RegexParser* this_ptr, bool case_insensitive)
    IL2CPP_REGISTER_METHOD(0x025995A0, app::RegexCharClass*, ScanCharClass_2, app::RegexParser* this_ptr, bool case_insensitive, bool scan_only)
    IL2CPP_REGISTER_METHOD(0x0259A020, app::RegexNode*, ScanGroupOpen, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259B240, void, ScanBlank, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259B740, app::RegexNode*, ScanBackslash, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259C4C0, app::RegexNode*, ScanBasicBackslash, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259CEB0, app::RegexNode*, ScanDollar, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259D670, app::String*, ScanCapname, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259D780, char16_t, ScanOctal, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259D830, int32_t, ScanDecimal, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259D950, char16_t, ScanHex, app::RegexParser* this_ptr, int32_t c)
    IL2CPP_REGISTER_METHOD(0x0259DAB0, int32_t, HexDigit, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0259DAE0, char16_t, ScanControl, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259DC00, bool, IsOnlyTopOption, app::RegexParser* this_ptr, app::RegexOptions__Enum option)
    IL2CPP_REGISTER_METHOD(0x0259DC20, void, ScanOptions, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259DD70, char16_t, ScanCharEscape, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259E1F0, app::String*, ParseProperty, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259E420, int32_t, TypeFromCode, app::RegexParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0259E4A0, app::RegexOptions__Enum, OptionFromCode, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0259E540, void, CountCaptures, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259E970, void, NoteCaptureSlot, app::RegexParser* this_ptr, int32_t i, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x0259EAC0, void, NoteCaptureName, app::RegexParser* this_ptr, app::String* name, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x0259ED80, void, NoteCaptures, app::RegexParser* this_ptr, app::Hashtable* caps, int32_t capsize, app::Hashtable* capnames)
    IL2CPP_REGISTER_METHOD(0x0259ED90, void, AssignNameSlots, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259F880, int32_t, CaptureSlotFromName, app::RegexParser* this_ptr, app::String* capname)
    IL2CPP_REGISTER_METHOD(0x0259F950, bool, IsCaptureSlot, app::RegexParser* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0259FA40, bool, IsCaptureName, app::RegexParser* this_ptr, app::String* capname)
    IL2CPP_REGISTER_METHOD(0x0259FA60, bool, UseOptionN, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FA70, bool, UseOptionI, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FA80, bool, UseOptionM, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FA90, bool, UseOptionS, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FAA0, bool, UseOptionX, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FAB0, bool, UseOptionE, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FAC0, bool, IsSpecial, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0259FBA0, bool, IsStopperX, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0259FC80, bool, IsQuantifier, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0259FD60, bool, IsTrueQuantifier, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0259FF60, bool, IsSpace, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x025A0040, bool, IsMetachar, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x025A0120, void, AddConcatenate_1, app::RegexParser* this_ptr, int32_t pos, int32_t cch, bool is_replacement)
    IL2CPP_REGISTER_METHOD(0x025A0590, void, PushGroup, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A05F0, void, PopGroup, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0150AEB0, bool, EmptyStack, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A0720, void, StartGroup, app::RegexParser* this_ptr, app::RegexNode* open_group)
    IL2CPP_REGISTER_METHOD(0x025A0940, void, AddAlternate, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A0B30, void, AddConcatenate_2, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A0B70, void, AddConcatenate_3, app::RegexParser* this_ptr, bool lazy, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::RegexNode*, Unit, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A0BD0, void, AddUnitOne, app::RegexParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x025A0D70, void, AddUnitNotone, app::RegexParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x025A0F10, void, AddUnitSet, app::RegexParser* this_ptr, app::String* cc)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, AddUnitNode, app::RegexParser* this_ptr, app::RegexNode* node)
    IL2CPP_REGISTER_METHOD(0x025A1070, void, AddUnitType, app::RegexParser* this_ptr, int32_t type)
    IL2CPP_REGISTER_METHOD(0x025A11D0, void, AddGroup, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A13A0, void, PushOptions, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1440, void, PopOptions, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1500, bool, EmptyOptionsStack, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1590, void, PopKeepOptions, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1630, app::ArgumentException*, MakeException, app::RegexParser* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, Textpos, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, Textto, app::RegexParser* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x025A1860, char16_t, MoveRightGetChar, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1890, void, MoveRight_1, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A18A0, void, MoveRight_2, app::RegexParser* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x00F01BE0, void, MoveLeft, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A18B0, char16_t, CharAt, app::RegexParser* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x025A18D0, char16_t, RightChar_1, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1900, char16_t, RightChar_2, app::RegexParser* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x025A1930, int32_t, CharsRight, app::RegexParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025A1950, void, cctor, )
} // namespace app::classes::System::Text::RegularExpressions::RegexParser
