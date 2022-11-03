#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::CreateAssetMenuAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateAssetMenuAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_menuName, (app::CreateAssetMenuAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_fileName, (app::CreateAssetMenuAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_order, (app::CreateAssetMenuAttribute * this_ptr, int32_t value))
} // namespace app::classes::UnityEngine::CreateAssetMenuAttribute
