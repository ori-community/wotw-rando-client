#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnemyPlaceholderMarker.h>

namespace app::classes::EnemyPlaceholderMarker {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnemyPlaceholderMarker * this_ptr))
}
