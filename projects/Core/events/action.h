#pragma once

#include <Modloader/app/structs/Action.h>

#include <functional>
#include <span>

namespace core::events {
    template <typename T>
    struct CustomAction {
        int id;
        T* action;
    };

    // First parameter to the function is the id in CustomAction.
    CustomAction<app::Action> create_action(std::function<void(int)> function);

    void destroy(int id);
} // namespace core::events
