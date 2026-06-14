#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation_.h>
#include <Modloader/app/structs/SchemaNotation.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* this_ptr,
        app::String* key,
        app::SchemaNotation* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation_*,
        get_Values,
        app::Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_
