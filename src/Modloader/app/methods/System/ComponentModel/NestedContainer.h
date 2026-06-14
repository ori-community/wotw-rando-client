#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/ISite.h>
#include <Modloader/app/structs/NestedContainer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::NestedContainer {
    IL2CPP_REGISTER_METHOD(0x029900E0, void, ctor, app::NestedContainer* this_ptr, app::IComponent* owner)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IComponent*, get_Owner, app::NestedContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02990390, app::String*, get_OwnerName, app::NestedContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029904B0, app::ISite*, CreateSite, app::NestedContainer* this_ptr, app::IComponent* component, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02990650, void, Dispose, app::NestedContainer* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x029907F0, app::Object*, GetService, app::NestedContainer* this_ptr, app::Type* service)
    IL2CPP_REGISTER_METHOD(0x024AB610, void, OnOwnerDisposed, app::NestedContainer* this_ptr, app::Object* sender, app::EventArgs* e)
} // namespace app::classes::System::ComponentModel::NestedContainer
