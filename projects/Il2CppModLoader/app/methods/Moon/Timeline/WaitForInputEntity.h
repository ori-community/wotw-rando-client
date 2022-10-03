#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::WaitForInputEntity {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::WaitForInputEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1E4C0, void, OnStartPlayback, (app::WaitForInputEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1E4D0, void, OnUpdateEntity, (app::WaitForInputEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D1E510, void, OnStopPlayback, (app::WaitForInputEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1E520, bool, HasFinished, (app::WaitForInputEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00D1E540, void, ctor, (app::WaitForInputEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::WaitForInputEntity
