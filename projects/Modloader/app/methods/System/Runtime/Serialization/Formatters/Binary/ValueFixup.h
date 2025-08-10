#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParseRecord.h>
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueFixup.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ValueFixup {
    IL2CPP_REGISTER_METHOD(0x01DA20E0, void, ctor_1, app::ValueFixup* this_ptr, app::Array* array_obj, app::Int32__Array* index_map)
    IL2CPP_REGISTER_METHOD(
        0x01DA20F0,
        void,
        ctor_2,
        app::ValueFixup* this_ptr,
        app::Object* member_object,
        app::String* member_name,
        app::ReadObjectInfo* object_info
    )
    IL2CPP_REGISTER_METHOD(0x01DA2110, void, Fixup, app::ValueFixup* this_ptr, app::ParseRecord* record, app::ParseRecord* parent)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ValueFixup
