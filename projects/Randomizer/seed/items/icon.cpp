#include <Randomizer/seed/items/icon.h>

#include <unordered_map>

namespace randomizer::seed::items {
    namespace {
        std::unordered_map<int, std::shared_ptr<game::map::Icon>> icons;
    }

    void CreateIcon::grant() {
        auto icon = game::map::add_icon(flags);
        icon->icon(type);
        icon->position(position);
        icon->can_teleport(can_teleport);
        icons[id] = icon;
    }

    void DestroyIcon::grant() {
        game::map::remove_icon(icons[id]);
        icons.erase(id);
    }
} // namespace randomizer::seed::items
