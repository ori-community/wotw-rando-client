#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils {
    IL2CPP_REGISTER_METHOD(0x030197B0, bool, TryBuildImmutableForArrayContract, (app::Type * underlying_type, app::Type * collection_item_type, app::Type * * created_type, app::ObjectConstructor_1_System_Object_ * * parameterized_creator))
    IL2CPP_REGISTER_METHOD(0x03019E40, bool, TryBuildImmutableForDictionaryContract, (app::Type * underlying_type, app::Type * key_item_type, app::Type * value_item_type, app::Type * * created_type, app::ObjectConstructor_1_System_Object_ * * parameterized_creator))
    IL2CPP_REGISTER_METHOD(0x0301A530, void, cctor, ())
}
