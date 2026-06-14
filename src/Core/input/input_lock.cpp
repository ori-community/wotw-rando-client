#include <Core/api/uber_states/uber_state.h>
#include <Core/input/input_lock.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <unordered_set>

using namespace app::classes;

namespace core::input {
    namespace {
        uint32_t next_id = 0;
        std::unordered_set<uint32_t> locks;
        api::uber_states::UberState lock_state(UberStateGroup::Player, 1000);

        IL2CPP_INTERCEPT_WITH_ORDER(10, bool, GameController, get_InputLocked, app::GameController* this_ptr) {
            if (lock_state.get<bool>() || !locks.empty()) {
                return true;
            }

            return next::GameController::get_InputLocked(this_ptr);
        }
    }

    common::Droppable::ptr_t scoped_input_lock() {
        auto id = next_id++;
        locks.emplace(id);
        return std::make_unique<common::Droppable>([id]{ locks.erase(id); });
    }
} // namespace core::input
