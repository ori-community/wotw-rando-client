#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EditorWebResources.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::EditorWebResources {
    IL2CPP_REGISTER_METHOD(0x01DD9580, void, ctor, app::EditorWebResources* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD9770, void, HandleRequest, app::EditorWebResources* this_ptr, int32_t id, app::String* url)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::EditorWebResources
