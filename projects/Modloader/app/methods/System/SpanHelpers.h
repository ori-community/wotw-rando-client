#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::SpanHelpers {
    IL2CPP_REGISTER_METHOD(0x01E267B0, bool, IsReferenceOrContainsReferencesCore, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0156A1C0, bool, IsReferenceOrContainsReferences_1, ())
    IL2CPP_REGISTER_METHOD(0x0156A1C0, bool, IsReferenceOrContainsReferences_2, ())
    IL2CPP_REGISTER_METHOD(0x0156A1C0, bool, IsReferenceOrContainsReferences_3, ())
} // namespace app::classes::System::SpanHelpers
