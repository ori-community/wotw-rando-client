#include <Core/events/action.h>

#include <Modloader/app/methods/System/Action.h>
#include <Modloader/app/types/Action.h>
#include <Modloader/interception_macros.h>

#include <memory>
#include <unordered_map>
#include <utility>

namespace core::events {
    struct BaseActionStore {};

    struct Method {
        void* method = nullptr;
        void* runtime_invoker = nullptr; // We intercept before this is accessed.
    };

    template <typename T>
    struct ActionStore : public BaseActionStore {
        // class_ptr and monitor are required so we don't crash due to GC.
        void* class_ptr = reinterpret_cast<void*>(1);
        void* monitor = nullptr;
        int id = -1;
        Method info;
        std::function<T> function;
    };

    int next_id = 0;
    std::unordered_map<int, std::shared_ptr<BaseActionStore>> stored_functions;

    void custom_action_handler() {}
    IL2CPP_INTERCEPT(System::Action, void, Invoke, (app::Action * this_ptr)) {
        const auto custom_action_handler_ptr = &custom_action_handler;
        if (this_ptr->fields._._.method_ptr == custom_action_handler_ptr) {
            auto target = reinterpret_cast<ActionStore<void(int)>*>(this_ptr->fields._._.m_target);
            target->function(target->id);
        } else {
            next::System::Action::Invoke(this_ptr);
        }
    }

    CustomAction create_action(std::function<void(int)> function) {
        const auto id = next_id++;
        auto stored_function = std::make_shared<ActionStore<void(int)>>();
        stored_function->function = std::move(function);
        stored_function->id = id;
        stored_function->info.method = reinterpret_cast<void*>(&custom_action_handler);
        auto action = il2cpp::create_object<app::Action>(app::classes::types::Action::get_class());
        app::classes::System::Action::ctor(action, reinterpret_cast<app::Object*>(stored_function.get()), reinterpret_cast<void*>(&stored_function->info));
        stored_functions[id] = std::move(stored_function);
        return { id, il2cpp::GCRef(action) };
    }

    void destroy(int id) {
        stored_functions.erase(id);
    }
} // namespace core::events
