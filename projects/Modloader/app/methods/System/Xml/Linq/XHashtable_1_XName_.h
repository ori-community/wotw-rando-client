#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XHashtable_1_XName_.h>
#include <Modloader/app/structs/XHashtable_1_TValue_ExtractKeyDelegate_XName_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XName.h>

namespace app::classes::System::Xml::Linq::XHashtable_1_XName_ {
    IL2CPP_REGISTER_METHOD(0x0225AE80, void, ctor, (app::XHashtable_1_XName_ * this_ptr, app::XHashtable_1_TValue_ExtractKeyDelegate_XName_* extract_key, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04717970, XHashtable_1_XName___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225AFC0, bool, TryGetValue, (app::XHashtable_1_XName_ * this_ptr, app::String* key, int32_t index, int32_t count, app::XName** value))
    IL2CPP_REGISTER_METHODINFO(0x0472ED00, XHashtable_1_XName__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225B000, app::XName*, Add, (app::XHashtable_1_XName_ * this_ptr, app::XName* value))
    IL2CPP_REGISTER_METHODINFO(0x0470EDA8, XHashtable_1_XName__Add__MethodInfo)
} // namespace app::classes::System::Xml::Linq::XHashtable_1_XName_
