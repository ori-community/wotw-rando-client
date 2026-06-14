#include <Common/ext.h>
#include <Modloader/app/methods/MessageParserUtility.h>
#include <Modloader/interception_macros.h>

#include "input/rando_bindings.h"
#include "randomizer.h"


namespace randomizer::text_processing {
    using namespace app::classes;

    IL2CPP_INTERCEPT(app::String*, MessageParserUtility, ProcessString, app::String* input) {
        auto output = il2cpp::convert_csstring(next::MessageParserUtility::ProcessString(input));

        // World names
        for (int i = 0; i < multiplayer_universe().get_world_count(); ++i) {
            replace_all_lazy(output, std::format("<world>{}</>", i), [&] { return multiplayer_universe().get_world(i)->name(); });
        }

        // Randomizer actions
        for (auto i = static_cast<int>(Action::RANDO_ACTIONS_START) + 1; i < static_cast<int>(Action::TOTAL); ++i) {
            auto action = static_cast<Action>(i);
            replace_all_lazy(output, std::format("[{}]", magic_enum::enum_name(action)), [&] { return input::action_to_string(action); });
        }

        return il2cpp::string_new(output);
    }
}
