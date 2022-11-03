#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::uberSerializationWisp::SavePedestalUberState_PedestalState {
    IL2CPP_REGISTER_METHOD(0x00F44BC0, void, ctor, (app::SavePedestalUberState_PedestalState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F44BD0, void, Save, (app::UberStateArchive * archive, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x00F44CD0, void, Load, (app::SavePedestalUberState_PedestalState * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00F44D20, app::Object*, Clone, (app::SavePedestalUberState_PedestalState * this_ptr))
} // namespace app::classes::Moon::uberSerializationWisp::SavePedestalUberState_PedestalState
