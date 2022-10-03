#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Hierarchy {
    IL2CPP_REGISTER_METHOD(0x02A29070, bool, HierarchyIsValid, (app::Transform__Array * bones))
    IL2CPP_REGISTER_METHOD(0x02A29110, app::Object_1*, ContainsDuplicate, (app::Object_1__Array * objects))
    IL2CPP_REGISTER_METHOD(0x02A29280, bool, IsAncestor, (app::Transform * transform, app::Transform* ancestor))
    IL2CPP_REGISTER_METHOD(0x02A29470, bool, ContainsChild, (app::Transform * transform, app::Transform* child))
    IL2CPP_REGISTER_METHOD(0x02A295D0, void, AddAncestors, (app::Transform * transform, app::Transform* blocker, app::Transform__Array** array))
    IL2CPP_REGISTER_METHOD(0x02A29AC0, app::Transform*, GetAncestor, (app::Transform * transform, int32_t min_child_count))
    IL2CPP_REGISTER_METHOD(0x02A29CE0, app::Transform*, GetFirstCommonAncestor_1, (app::Transform * t1, app::Transform* t2))
    IL2CPP_REGISTER_METHOD(0x02A29F00, app::Transform*, GetFirstCommonAncestor_2, (app::Transform__Array * transforms))
    IL2CPP_REGISTER_METHOD(0x02A2A0D0, app::Transform*, GetFirstCommonAncestorRecursive, (app::Transform * transform, app::Transform__Array* transforms))
    IL2CPP_REGISTER_METHOD(0x02A2A2C0, bool, IsCommonAncestor, (app::Transform * transform, app::Transform__Array* transforms))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Hierarchy * this_ptr))
} // namespace app::classes::RootMotion::Hierarchy
