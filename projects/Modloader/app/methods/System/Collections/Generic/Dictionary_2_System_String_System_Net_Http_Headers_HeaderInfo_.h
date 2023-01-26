#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_.h>
#include <Modloader/app/structs/HeaderInfo_1.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ {
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ * this_ptr, app::IEqualityComparer_1_System_String_* comparer))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ * this_ptr, app::String* key, app::HeaderInfo_1* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ * this_ptr, app::String* key, app::HeaderInfo_1** value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_
