#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ManifestBuilder_c_DisplayClass22_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::Tracing::ManifestBuilder___c__DisplayClass22_1 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ManifestBuilder_c_DisplayClass22_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01A06CA0,
        void,
        _TranslateToManifestConvention_b__0,
        app::ManifestBuilder_c_DisplayClass22_1* this_ptr,
        char16_t ch,
        app::String* escape
    )
} // namespace app::classes::System::Diagnostics::Tracing::ManifestBuilder___c__DisplayClass22_1
