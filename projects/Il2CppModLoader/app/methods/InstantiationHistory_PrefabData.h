#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InstantiationHistory_PrefabData {
    IL2CPP_REGISTER_METHOD(0x00635BE0, void, ctor, (app::InstantiationHistory_PrefabData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00635C80, double, get_AveragePooledInstantiationMS, (app::InstantiationHistory_PrefabData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00635CA0, double, get_AverageNewObjectInstantiationMS, (app::InstantiationHistory_PrefabData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00635CC0, double, get_AverageUnpooledMS, (app::InstantiationHistory_PrefabData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00635CE0, app::String *, ToCSV, (app::InstantiationHistory_PrefabData * this_ptr))
}
