#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider.h>
#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>

namespace app::classes::ForceLanguageTranslatedMessageProvider {
    IL2CPP_REGISTER_METHOD(0x01280B50, app::IEnumerable_1_MessageDescriptor_*, GetMessages, app::ForceLanguageTranslatedMessageProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01280CE0, void, ctor, app::ForceLanguageTranslatedMessageProvider* this_ptr)
} // namespace app::classes::ForceLanguageTranslatedMessageProvider
