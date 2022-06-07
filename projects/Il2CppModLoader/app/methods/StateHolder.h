#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StateHolder {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetSetupStates, (app::StateHolder * this_ptr, app::List_1_IIndexedItem_ * to_populate))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UseMapping, (app::StateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UseDesiredValues, (app::StateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UseUberState, (app::StateHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03146E90, void, ctor, (app::StateHolder * this_ptr))
}
