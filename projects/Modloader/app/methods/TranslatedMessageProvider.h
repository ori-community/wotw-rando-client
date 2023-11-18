#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/TranslatedMessageProvider.h>

namespace app::classes::TranslatedMessageProvider {
    IL2CPP_REGISTER_METHOD(0x00B0A900, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::TranslatedMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPlaying, ())
    IL2CPP_REGISTER_METHOD(0x00B0AA90, void, ctor, (app::TranslatedMessageProvider * this_ptr))
} // namespace app::classes::TranslatedMessageProvider
