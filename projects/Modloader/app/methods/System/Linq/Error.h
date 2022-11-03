#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Error {
    IL2CPP_REGISTER_METHOD(0x01F9B720, app::Exception*, ArgumentNull, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x01F9B870, app::Exception*, ArgumentOutOfRange, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x01F9B9D0, app::Exception*, MoreThanOneElement, ())
    IL2CPP_REGISTER_METHOD(0x01F9BB20, app::Exception*, MoreThanOneMatch, ())
    IL2CPP_REGISTER_METHOD(0x01F9BC70, app::Exception*, NoElements, ())
    IL2CPP_REGISTER_METHOD(0x01F9BDC0, app::Exception*, NoMatch, ())
    IL2CPP_REGISTER_METHOD(0x01F9BF10, app::Exception*, NotSupported, ())
} // namespace app::classes::System::Linq::Error
