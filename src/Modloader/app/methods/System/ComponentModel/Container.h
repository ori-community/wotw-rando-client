#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComponentCollection.h>
#include <Modloader/app/structs/Container.h>
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/ISite.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::Container {
    IL2CPP_REGISTER_METHOD(0x024AB110, void, Finalize, app::Container* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0234BFD0, void, Add_1, app::Container* this_ptr, app::IComponent* component)
    IL2CPP_REGISTER_METHOD(0x024AB190, void, Add_2, app::Container* this_ptr, app::IComponent* component, app::String* name)
    IL2CPP_REGISTER_METHOD(0x024AB4B0, app::ISite*, CreateSite, app::Container* this_ptr, app::IComponent* component, app::String* name)
    IL2CPP_REGISTER_METHOD(0x024AB610, void, Dispose_1, app::Container* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AB6C0, void, Dispose_2, app::Container* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x024ABA60, app::Object*, GetService, app::Container* this_ptr, app::Type* service)
    IL2CPP_REGISTER_METHOD(0x024ABB30, app::ComponentCollection*, get_Components, app::Container* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024ABFF0, void, Remove_1, app::Container* this_ptr, app::IComponent* component)
    IL2CPP_REGISTER_METHOD(0x024AC000, void, Remove_2, app::Container* this_ptr, app::IComponent* component, bool preserve_site)
    IL2CPP_REGISTER_METHOD(0x024AC290, void, RemoveWithoutUnsiting, app::Container* this_ptr, app::IComponent* component)
    IL2CPP_REGISTER_METHOD(0x024AC2A0, void, ValidateName, app::Container* this_ptr, app::IComponent* component, app::String* name)
    IL2CPP_REGISTER_METHOD(0x024AC6C0, void, ctor, app::Container* this_ptr)
} // namespace app::classes::System::ComponentModel::Container
