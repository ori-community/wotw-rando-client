#include <Core/enums/actions.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/text_processors/action.h>
#include <Randomizer/text_processors/helpers.h>
#include <magic_enum.hpp>

namespace randomizer::text_processors {
    void ActionProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        for (auto i = static_cast<int>(Action::RANDO_ACTIONS_START) + 1; i < static_cast<int>(Action::TOTAL); ++i) {
            auto action = static_cast<Action>(i);
            search_and_replace_full(base_processor, std::format("[{}]", magic_enum::enum_name(action)), [action](auto const&, auto content) {
                return input::action_to_string(action);
            }, text);
        }
    }
} // namespace randomizer::text_processors
