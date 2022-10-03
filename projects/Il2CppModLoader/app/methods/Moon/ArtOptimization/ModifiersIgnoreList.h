#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::ModifiersIgnoreList {
    IL2CPP_REGISTER_METHOD(0x0134D750, app::List_1_Moon_ArtOptimization_ModifierDataModel_*, get_ModifiersToggles, (app::ModifiersIgnoreList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134D8B0, app::ModifierDataModel*, GetDataModel, (app::ModifiersIgnoreList * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0134DA20, void, OnAfterDeserialize, (app::ModifiersIgnoreList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::ModifiersIgnoreList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ModifiersIgnoreList * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::ModifiersIgnoreList
