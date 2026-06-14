#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RespawnPlaceholdersInHierarchyAction.h>

namespace app::classes::RespawnPlaceholdersInHierarchyAction {
    IL2CPP_REGISTER_METHOD(0x00907A50, void, Perform, app::RespawnPlaceholdersInHierarchyAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::RespawnPlaceholdersInHierarchyAction* this_ptr)
} // namespace app::classes::RespawnPlaceholdersInHierarchyAction
