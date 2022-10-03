#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::GameObjectExtensions {
    IL2CPP_REGISTER_METHOD(0x02709CD0, app::SoundHost*, DeduceSoundHostFromHierarchy, (app::Transform * target))
}
