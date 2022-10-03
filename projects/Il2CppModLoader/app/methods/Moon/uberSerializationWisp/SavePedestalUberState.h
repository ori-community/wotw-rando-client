#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::uberSerializationWisp::SavePedestalUberState {
    IL2CPP_REGISTER_METHOD(0x00F442B0, bool, get_HasGameBeenSaved, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F442D0, void, set_HasGameBeenSaved, (app::SavePedestalUberState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F44310, bool, get_IsTeleporterActive, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F44330, void, set_IsTeleporterActive, (app::SavePedestalUberState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F44370, void, SetIsDirty, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F44420, app::SavePedestalUberState_PedestalState*, ReadStateFromStore, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_StateID, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int64_t, get_Size, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F44500, void, Save, (app::SavePedestalUberState * this_ptr, app::UberStateArchive* archive, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x00F445F0, app::Object*, Load, (app::SavePedestalUberState * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::UberStateHeader_UberStateType__Enum, get_Type, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F44760, app::Object*, CreateDefaultUberState, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IUberStateGroup*, get_UberStateGroup, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F448C0, app::UberID*, get_GroupID, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, (app::SavePedestalUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F449B0, void, ctor, (app::SavePedestalUberState * this_ptr))
} // namespace app::classes::Moon::uberSerializationWisp::SavePedestalUberState
