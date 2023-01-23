#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker.h>

namespace app::classes::ShrineCombat_WaveProgressMarker {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ShrineCombat_WaveProgressMarker * this_ptr))
}
