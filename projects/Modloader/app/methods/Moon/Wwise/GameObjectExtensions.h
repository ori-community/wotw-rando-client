#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::Wwise::GameObjectExtensions {
    IL2CPP_REGISTER_METHOD(0x02709CD0, app::SoundHost*, DeduceSoundHostFromHierarchy, (app::Transform * target))
}
