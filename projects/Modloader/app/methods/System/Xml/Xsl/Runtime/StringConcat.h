#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StringConcat__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Xsl::Runtime::StringConcat {
    IL2CPP_REGISTER_METHOD(0x00246B70, void, Clear, (app::StringConcat__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00116280, int32_t, get_Count, (app::StringConcat__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246B80, app::String*, GetResult, (app::StringConcat__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246B90, void, ConcatNoDelimiter, (app::StringConcat__Boxed * this_ptr, app::String* s))
} // namespace app::classes::System::Xml::Xsl::Runtime::StringConcat
