#include <Core/api/scenes/polygon.h>
#include <Modloader/app/types/Polygon_1.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/MeshCollider.h>
#include <Modloader/app/types/MeshCollider.h>
#include <Modloader/app/methods/Polygon.h>

using namespace app::classes;

namespace core::api::scenes {
    app::GameObject* PolygonGeometry::get_game_object() {
        if (!m_game_object.has_value()) {
            m_game_object = il2cpp::GCRef(il2cpp::create_object<app::GameObject>(types::GameObject::get_class()));
            UnityEngine::GameObject::ctor_1(**m_game_object, il2cpp::string_new("polygon"));
            update_polygon();
        }

        return **m_game_object;
    }

    void PolygonGeometry::update_polygon() {
        // Make sure the game object exists
        get_game_object();

        auto is_new_polygon = false;
        if (!m_polygon.has_value()) {
            m_polygon = il2cpp::GCRef(il2cpp::unity::add_component<app::Polygon_1>(**m_game_object, types::Polygon_1::get_class()));
            Polygon::ctor(**m_polygon);
            is_new_polygon = true;
        }

        il2cpp::invoke((**m_polygon)->fields.Points, "Clear");
        for (auto& point : points) {
            il2cpp::invoke((**m_polygon)->fields.Points, "Add", &point);
        }

        (**m_polygon)->fields.PolygonCollider->fields.Enabled = enable_collider;

        if (is_new_polygon) {
            // Polygon::UpdateComponents will create a MeshCollider but will not update it
            // when it already exists. So only call this if we just created the Polygon
            Polygon::UpdateComponents(**m_polygon);
        } else {
            // If we're updating an existing Polygon, generate the mesh manually
            auto mesh_collider = il2cpp::unity::get_component<app::MeshCollider>(get_game_object(), types::MeshCollider::get_class());
            if (mesh_collider != nullptr) {
                auto mesh = UnityEngine::MeshCollider::get_sharedMesh(mesh_collider);

                auto collider_shape = (**m_polygon)->fields.PolygonCollider;
                Polygon::GenerateMesh(
                    **m_polygon,
                    collider_shape->fields.GenerateFront,
                    collider_shape->fields.GenerateBack,
                    collider_shape->fields.GenerateSides,
                    collider_shape->fields.Extrude,
                    collider_shape->fields.Elevation,
                    collider_shape->fields.Extrude > 0.f,
                    collider_shape->fields.Elevation > 0.f,
                    app::Vector2{ 1.f, 1.f},
                    app::Vector2{ 1.f, 1.f},
                    app::Vector2{ 1.f, 1.f},
                    (**m_polygon)->fields.ClosedShape,
                    mesh
                );

                UnityEngine::MeshCollider::set_sharedMesh(mesh_collider, mesh);
            } else {
                // Somehow our MeshCollider got lost... oriShrug
                il2cpp::unity::destroy_object(**m_polygon);
            }
        }
    }
}
