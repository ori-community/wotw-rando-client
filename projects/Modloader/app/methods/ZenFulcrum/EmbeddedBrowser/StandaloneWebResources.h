#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::StandaloneWebResources {
    IL2CPP_REGISTER_METHOD(0x0166CDC0, void, ctor, (app::StandaloneWebResources * this_ptr, app::String* data_file))
    IL2CPP_REGISTER_METHOD(0x0166CF60, void, LoadIndex, (app::StandaloneWebResources * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047843A0, StandaloneWebResources_LoadIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0166D2B0, void, HandleRequest, (app::StandaloneWebResources * this_ptr, int32_t id, app::String* url))
    IL2CPP_REGISTER_METHOD(0x0166D770, void, WriteData, (app::StandaloneWebResources * this_ptr, app::Dictionary_2_System_String_System_Byte_* files))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::StandaloneWebResources
