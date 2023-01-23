#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExcludeFromDocsAttribute.h>

namespace app::classes::UnityEngine::Internal::ExcludeFromDocsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExcludeFromDocsAttribute * this_ptr))
}
