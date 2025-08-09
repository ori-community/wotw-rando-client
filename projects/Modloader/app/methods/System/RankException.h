#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RankException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::RankException {
    IL2CPP_REGISTER_METHOD(0x02280E50, void, ctor_1, app::RankException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280EE0, void, ctor_2, app::RankException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::RankException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::RankException
