#pragma once

#include <Modloader/app/structs/Action.h>

#include <functional>
#include <Core/macros.h>
#include <Modloader/il2cpp_helpers.h>

namespace core::events {
    struct CustomAction {
        int id;
        il2cpp::GCRef<app::Action> action;
    };

    // First parameter to the function is the id in CustomAction.
    CORE_DLLEXPORT CustomAction create_action(std::function<void(int)> function);

    CORE_DLLEXPORT void destroy(int id);
} // namespace core::events
