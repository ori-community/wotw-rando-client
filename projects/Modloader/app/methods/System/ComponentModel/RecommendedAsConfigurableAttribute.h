#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::RecommendedAsConfigurableAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::RecommendedAsConfigurableAttribute * this_ptr, bool recommended_as_configurable))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_RecommendedAsConfigurable, (app::RecommendedAsConfigurableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998F50, bool, Equals, (app::RecommendedAsConfigurableAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::RecommendedAsConfigurableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02999050, bool, IsDefaultAttribute, (app::RecommendedAsConfigurableAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02999060, void, cctor, ())
} // namespace app::classes::System::ComponentModel::RecommendedAsConfigurableAttribute
