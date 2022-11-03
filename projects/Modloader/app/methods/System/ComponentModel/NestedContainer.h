#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::NestedContainer {
    IL2CPP_REGISTER_METHOD(0x029900E0, void, ctor, (app::NestedContainer * this_ptr, app::IComponent* owner))
    IL2CPP_REGISTER_METHODINFO(0x0475DAA0, NestedContainer__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IComponent*, get_Owner, (app::NestedContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02990390, app::String*, get_OwnerName, (app::NestedContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029904B0, app::ISite*, CreateSite, (app::NestedContainer * this_ptr, app::IComponent* component, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04773CB8, NestedContainer_CreateSite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02990650, void, Dispose, (app::NestedContainer * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x029907F0, app::Object*, GetService, (app::NestedContainer * this_ptr, app::Type* service))
    IL2CPP_REGISTER_METHOD(0x024AB610, void, OnOwnerDisposed, (app::NestedContainer * this_ptr, app::Object* sender, app::EventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x047531F0, NestedContainer_OnOwnerDisposed__MethodInfo)
} // namespace app::classes::System::ComponentModel::NestedContainer
