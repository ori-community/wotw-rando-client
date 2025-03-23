#pragma once

#include <Core/actors/actor.h>
#include <Core/property.h>

namespace core::actors::components {
    enum class CollisionMask {
        None = 0,
        LocalPlayer = 1 << 0,
        NetworkedPlayers = 1 << 1,

        Players = LocalPlayer | NetworkedPlayers,
    };

    inline CollisionMask operator | (CollisionMask lhs, CollisionMask rhs)
    {
        using T = std::underlying_type_t <CollisionMask>;
        return static_cast<CollisionMask>(static_cast<T>(lhs) | static_cast<T>(rhs));
    }

    inline CollisionMask& operator |= (CollisionMask& lhs, const CollisionMask rhs)
    {
        lhs = lhs | rhs;
        return lhs;
    }

    inline CollisionMask operator & (CollisionMask lhs, CollisionMask rhs)
    {
        using T = std::underlying_type_t <CollisionMask>;
        return static_cast<CollisionMask>(static_cast<T>(lhs) & static_cast<T>(rhs));
    }

    inline CollisionMask& operator &= (CollisionMask& lhs, const CollisionMask rhs)
    {
        lhs = lhs & rhs;
        return lhs;
    }

    class Collider final : public Component {
        public:
            static size_t static_component_id();
            size_t component_id() override;

            void on_registered(Actor* actor) override;
            void on_deregistered() override;

            void mask(const CollisionMask mask) { m_mask = mask; }
            CollisionMask mask() const { return m_mask; }

            bool is_colliding() const;

            std::size_t add_circle(app::Vector2 position, float radius);
            std::size_t add_rectangle(app::Rect rectangle);
            void clear_colliders();
        protected:
            bool is_colliding(app::Vector2 pos, float radius) const;

            struct Circle {
                app::Vector2 position;
                float radius;
            };

            using collider_t = std::variant<Circle, app::Rect>;
            Actor* m_actor = nullptr;
            CollisionMask m_mask = CollisionMask::LocalPlayer;
            std::vector<collider_t> m_colliders;
    };
}
