#include <Randomizer/map/fragments.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>


namespace randomizer::map::fragments {
    using namespace app::classes;

    bool has_been_visited(const app::GameWorldAreaID__Enum area, const int index) {
        const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        if (!il2cpp::unity::is_valid(player_group)) {
            return false;
        }

        const auto area_map_info = player_group->fields.PlayerUberState->fields.m_state->fields.AreaMapInfo;
        return Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::GetAreaState(area_map_info, area, index) ==
            app::WorldMapAreaState__Enum::Visited;
    }
}
