#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::EditorTools::Persistency::PersistencyTools {
    IL2CPP_REGISTER_METHOD(0x01207E80, void, LinkPrefab, (app::GameObject * prefab, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x01207F50, void, Ignore, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x01208010, void, cctor, ())
} // namespace app::classes::Moon::EditorTools::Persistency::PersistencyTools
