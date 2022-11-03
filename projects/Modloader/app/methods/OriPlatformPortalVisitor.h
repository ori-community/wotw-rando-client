#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OriPlatformPortalVisitor {
    IL2CPP_REGISTER_METHOD(0x0043E980, void, OnGoThroughPortal, (app::OriPlatformPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043EAD0, void, ctor, (app::OriPlatformPortalVisitor * this_ptr))
} // namespace app::classes::OriPlatformPortalVisitor
