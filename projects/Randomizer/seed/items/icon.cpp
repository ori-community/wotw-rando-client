#include <Randomizer/seed/items/icon.h>

#include <unordered_map>

namespace randomizer::seed::items {
    namespace {
        // TODO: Move this to some sort of structure that gets passed through grant requests.
        std::unordered_map<int, std::shared_ptr<game::map::Icon>> icons;
    }

    void CreateIcon::grant() {
        const auto icon = add_icon(flags);
        icon->name(std::format("custom_icon: {}", seed_definition));
        icon->label(label);
        icon->icon(type);
        icon->position(position);
        icon->can_teleport(can_teleport);
        icon->visible(true);
        icons[id] = icon;
    }

    std::string CreateIcon::to_string() const {
        return std::format("create icon {} of type {} at ({}, {})", id, static_cast<int>(type), position.x, position.y);
    }

    void DestroyIcon::grant() {
        remove_icon(icons[id]);
        icons.erase(id);
    }

    std::string DestroyIcon::to_string() const {
        return std::format("destroy icon {}", id);
    }

    void destroy_all_seed_icons() {
        for (auto& icon: icons | std::views::values) {
            remove_icon(icon);
        }

        icons.clear();
    }
} // namespace randomizer::seed::items
