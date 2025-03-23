#include <Core/actors/components/collider.h>
#include <Core/api/game/player.h>
#include <Modloader/il2cpp_math.h>

namespace core::actors::components {
    namespace {
        constexpr float PLAYER_RADIUS = 0.5f;
    }

    size_t Collider::static_component_id() {
        static size_t id = next_component_id();
        return id;
    }

    size_t Collider::component_id() { return static_component_id(); }

    void Collider::on_registered(Actor* actor) { m_actor = actor; }

    void Collider::on_deregistered() { m_actor = nullptr; }

    bool Collider::is_colliding() const {
        if ((m_mask & CollisionMask::LocalPlayer) != CollisionMask::None) {
            const auto player_pos = api::game::player::get_position();
            if (is_colliding(modloader::math::to_vec2(player_pos), PLAYER_RADIUS)) {
                return true;
            }
        }

        // TODO: Add handling for other collision mask values.

        return false;
    }

    bool Collider::is_colliding(const app::Vector2 pos, const float radius) const {
        const auto actor_position = modloader::math::to_vec2(il2cpp::unity::get_position(m_actor->root()));
        for (const auto& collider: m_colliders) {
            switch (collider.index()) {
                case 0: {
                    auto const& circle = std::get<0>(collider);
                    const auto distance2 = modloader::math::distance2(pos, actor_position + circle.position);
                    const auto summed_radius = radius + circle.radius;
                    if (distance2 <= summed_radius * summed_radius) {
                        return true;
                    }

                    break;
                }
                case 1: {
                    auto const& rect = std::get<1>(collider);
                    const auto bottom_left = app::Vector2(rect.m_XMin, rect.m_YMin) + actor_position;
                    const auto top_left = app::Vector2(rect.m_XMin, rect.m_YMin + rect.m_Height) + actor_position;
                    const auto top_right = app::Vector2(rect.m_XMin + rect.m_Width, rect.m_YMin + rect.m_Height) + actor_position;
                    const auto bottom_right = app::Vector2(rect.m_XMin + rect.m_Width, rect.m_YMin) + actor_position;
                    if (modloader::math::in_rect(pos, rect) || modloader::math::line_intersects_circle(bottom_left, top_left, pos, radius) ||
                        modloader::math::line_intersects_circle(top_left, top_right, pos, radius) ||
                        modloader::math::line_intersects_circle(top_right, bottom_right, pos, radius) ||
                        modloader::math::line_intersects_circle(bottom_right, bottom_left, pos, radius)) {
                        return true;
                    }
                }
                default:
                    break;
            }
        }

        return false;
    }

    void Collider::add_circle(const app::Vector2 position, const float radius) {
        m_colliders.emplace_back(Circle{position, radius});
    }

    void Collider::add_rectangle(const app::Rect rectangle) {
        m_colliders.emplace_back(rectangle);
    }

    void Collider::clear_colliders() {
        m_colliders.clear();
    }
} // namespace core::actors::components
