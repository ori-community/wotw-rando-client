#pragma once
#include <optional>
#include <vector>
#include <Modloader/app/types/Polygon_1.h>
#include <Modloader/app/types/Vector2.h>
#include <Core/macros.h>

namespace core::api::scenes {
    class CORE_DLLEXPORT PolygonGeometry {
    public:
        bool enable_collider = true;
        std::vector<app::Vector2> points;

        explicit PolygonGeometry(std::vector<app::Vector2> points): points(std::move(points)) {}

        app::GameObject* get_game_object();
        void update_polygon();

    private:
        std::optional<il2cpp::GCRef<app::GameObject>> m_game_object;
        std::optional<il2cpp::GCRef<app::Polygon_1>> m_polygon;
    };
}
