#include <Randomizer/macros.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinChakramSpell.h>

using namespace app::classes;

namespace {
    uber_states::UberState extra_shurikens(UberStateGroup::RandoUpgrade, 38);

    bool initialized = false;
    int default_max_chakrams = 1;

    IL2CPP_INTERCEPT(SeinChakramSpell, void, EnterMove, (app::SeinChakramSpell* this_ptr)) {
        if (!initialized) {
            default_max_chakrams = this_ptr->fields.MaxChakrams;
            initialized = true;
        }

        this_ptr->fields.MaxChakrams = default_max_chakrams + extra_shurikens.get<int>();

        return next::SeinChakramSpell::EnterMove(this_ptr);
    }
} // namespace
