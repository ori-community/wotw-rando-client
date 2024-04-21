#include <Core/api/graphics/sprite.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>

#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Material.h>
#include <Modloader/app/methods/UnityEngine/Mesh.h>
#include <Modloader/app/methods/UnityEngine/MeshFilter.h>
#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Renderer.h>
#include <Modloader/app/methods/UnityEngine/Shader.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/structs/MoonIconRenderer.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/Int32.h>
#include <Modloader/app/types/Material.h>
#include <Modloader/app/types/Mesh.h>
#include <Modloader/app/types/MeshFilter.h>
#include <Modloader/app/types/MeshRenderer.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/String.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/types/UberShaderRuntimeRenderOrder.h>
#include <Modloader/app/types/Vector2.h>
#include <Modloader/app/types/Vector3.h>
#include <Modloader/il2cpp_helpers.h>

using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::graphics {
    namespace {
        app::Vector2__Array* make_uvs(float x = 0, float y = 0, float w = 1, float h = 1) {
            return types::Vector2::create_array(
                std::vector<app::Vector2>{
                    { x, y },
                    { x + w, y },
                    { x, y + h },
                    { x + w, y + h } }
            );
        }

        constexpr bool USE_PREFAB = true;
        constexpr bool USE_CUSTOM_SHADER = false;

        app::GameObject* find_prefab() {
            static app::GameObject* icon = nullptr;
            if (il2cpp::unity::is_valid(icon)) {
                return icon;
            }

            app::Renderer* renderer = nullptr;

            if (USE_PREFAB) {
                const auto controller = types::UI::get_class()->static_fields->MessageController;
                const auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(controller->fields.HintSmallMessage, types::MessageBox::get_class());
                const auto icon_renderer = reinterpret_cast<app::MoonIconRenderer*>(
                    message_box->fields.TextBox->fields.styleCollection->fields.styles->vector[1]->fields.renderer
                );
                const auto icon_obj = icon_renderer->fields.Icons->fields.Icons->fields._items->vector[0]->fields.Icon;
                const auto prefab = il2cpp::unity::get_children(icon_obj)[0];
                icon = il2cpp::unity::instantiate_object(prefab);
                Object::set_name(reinterpret_cast<app::Object_1*>(icon), il2cpp::string_new("rando_sprite"));
                renderer = il2cpp::unity::get_component<app::Renderer>(icon, types::MeshRenderer::get_class());
            } else {
                icon = types::GameObject::create();
                GameObject::ctor_1(icon, il2cpp::string_new("rando_sprite"));
                renderer = il2cpp::unity::add_component<app::Renderer>(icon, types::MeshRenderer::get_class());
                const auto order = il2cpp::unity::add_component<app::UberShaderRuntimeRenderOrder>(icon, types::UberShaderRuntimeRenderOrder::get_class());
                order->fields.m_isInScene = true;
                Renderer::set_enabled(renderer, true);
            }

            il2cpp::unity::set_active(icon, false);
            game::add_to_container(game::RandoContainer::GameObjects, icon);

            if (USE_CUSTOM_SHADER) {
                const auto shader = Shader::Find(il2cpp::string_new("Hidden/UberShader/59F9A629AA8A0ABB2D0B3EAE1933B13F"));
                const auto mat = types::Material::create();
                Material::ctor_1(mat, shader);

                const auto keywords = types::String::create_array(std::vector<app::String*>{ il2cpp::string_new("DISABLE_ALPHA_CUTOFF") });
                Material::set_shaderKeywords(mat, keywords);

                shaders::set_float(mat, "_UberShaderAlphaMask", 9);
                shaders::set_float(mat, "_UberShaderCulling", 0);
                shaders::set_vector(mat, "_DepthFlipScreen", { 0.008251436, 0, 0, 0 });
                shaders::set_vector(mat, "_Screen", { 0, 0, 0, 1 });
                shaders::set_vector(mat, "_UberShaderParams", { 0, 0, 1, 1 });
                shaders::set_vector(mat, "_UberShaderParams2", { 1, 1, 0, 1 });

                Renderer::set_sharedMaterial(renderer, mat);
            }

            return icon;
        }

        std::vector<app::Vector3> generate_mesh_vertices(const Sprite::Anchor anchor) {
            switch (anchor) {
                default:
                case Sprite::Anchor::MiddleCenter:
                    return {
                        {-0.5f, -0.5f, 0},
                        {0.5f,  -0.5f, 0},
                        {-0.5f, 0.5f,  0},
                        {0.5f,  0.5f,  0}
                    };
                case Sprite::Anchor::TopLeft:
                    return {
                        {0, -1, 0},
                        {1, -1, 0},
                        {0, 0,  0},
                        {1, 0,  0}
                    };
                case Sprite::Anchor::TopCenter:
                    return {
                        {-0.5f, -1, 0},
                        {0.5f,  -1, 0},
                        {-0.5f, 0,  0},
                        {0.5f,  0,  0}
                    };
                case Sprite::Anchor::TopRight:
                    return {
                        {-1, -1, 0},
                        {0,  -1, 0},
                        {-1, 0,  0},
                        {0,  0,  0}
                    };
                case Sprite::Anchor::MiddleLeft:
                    return {
                        {0, -0.5f, 0},
                        {1,  -0.5f, 0},
                        {0, 0.5f,  0},
                        {1,  0.5f,  0}
                    };
                case Sprite::Anchor::MiddleRight:
                    return {
                        {-1, -0.5f, 0},
                        {0,  -0.5f, 0},
                        {-1, 0.5f,  0},
                        {0,  0.5f,  0}
                    };
                case Sprite::Anchor::BottomLeft:
                    return {
                        {0, 0, 0},
                        {1,  0, 0},
                        {0, 1,  0},
                        {1,  1,  0}
                    };
                case Sprite::Anchor::BottomCenter:
                    return {
                        {-0.5f, 0, 0},
                        {0.5f,  0, 0},
                        {-0.5f, 1,  0},
                        {0.5f,  1,  0}
                    };
                case Sprite::Anchor::BottomRight:
                    return {
                        {-1, 0, 0},
                        {0,  0, 0},
                        {-1, 1,  0},
                        {0,  1,  0}
                    };
            }
        }

        std::unordered_map<Sprite::Anchor, il2cpp::GCRef<app::Mesh>> mesh_for_anchor_cache;
        app::Mesh* get_mesh_for_anchor(const Sprite::Anchor anchor) {
            if (const auto mesh = mesh_for_anchor_cache.find(anchor); mesh != mesh_for_anchor_cache.end()) {
                return mesh->second.ref();
            }

            const auto mesh = types::Mesh::create();
            Mesh::ctor(mesh);

            const auto vertices = types::Vector3::create_array(generate_mesh_vertices(anchor));
            const auto triangles = types::Int32::create_array(std::vector<int>{ 0, 2, 1, 2, 3, 1 });
            const auto normals = types::Vector3::create_array(std::vector<app::Vector3>{ { 0, 0, 1 }, { 0, 0, 1 }, { 0, 0, 1 }, { 0, 0, 1 } });
            const auto uv = make_uvs();

            Mesh::set_vertices(mesh, vertices);
            Mesh::set_triangles(mesh, triangles);
            Mesh::set_normals(mesh, normals);
            Mesh::set_uv(mesh, uv);

            mesh_for_anchor_cache.emplace(anchor, mesh);

            return mesh;
        }
    } // namespace

    Sprite::Sprite() : Sprite(nullptr, Anchor::MiddleCenter) {}
    Sprite::Sprite(app::GameObject* parent) : Sprite(parent, Anchor::MiddleCenter) {}
    Sprite::Sprite(Anchor anchor) : Sprite(nullptr, anchor) {}

    Sprite::Sprite(app::GameObject* parent, Anchor anchor) {
        m_root = il2cpp::unity::instantiate_object(find_prefab());
        this->anchor(anchor);
        m_renderer = il2cpp::unity::get_component<app::Renderer>(m_root, types::Renderer::get_class());

        il2cpp::unity::set_active(m_root, false);
        if (parent == nullptr) {
            add_to_container(game::RandoContainer::GameObjects, m_root);
        } else {
            il2cpp::unity::set_parent(m_root, parent);
        }
    }

    Sprite::~Sprite() {
        if (il2cpp::unity::is_valid(m_root)) {
            il2cpp::unity::destroy_object(m_root);
            m_root = nullptr;
        }
    }

    void Sprite::anchor(Anchor anchor) const {
        const auto mesh_filter = il2cpp::unity::get_component<app::MeshFilter>(m_root, types::MeshFilter::get_class());
        MeshFilter::set_sharedMesh(mesh_filter, get_mesh_for_anchor(anchor));
    }

    void Sprite::layer(Layer l) const {
        GameObject::set_layer(m_root, static_cast<int>(l));
    }

    void Sprite::local_position(app::Vector3 p) const {
        Transform::set_localPosition(il2cpp::unity::get_transform(m_root), p);
    }

    void Sprite::local_scale(app::Vector3 s) const {
        Transform::set_localScale(il2cpp::unity::get_transform(m_root), s);
    }

    void Sprite::local_rotation(float r) const {
        const auto angle = r;
        const auto rotation = Quaternion::Euler_1(0, 0, angle);
        Transform::set_localRotation(il2cpp::unity::get_transform(m_root), rotation);
    }

    bool Sprite::enabled() const {
        return il2cpp::unity::get_active(m_root);
    }

    void Sprite::enabled(const bool value) const {
        il2cpp::unity::set_active(m_root, value);
    }

    void Sprite::texture(const std::shared_ptr<textures::TextureData>& texture_data, std::optional<textures::MaterialParams> params) {
        if (texture_data == nullptr) {
            return;
        }

        if (m_texture_data != texture_data) {
            texture_data->apply_texture(m_renderer);
            m_texture_data = texture_data;
        }

        if (!params.has_value()) {
            params = textures::MaterialParams{ .uvs = std::make_optional<app::Vector4>({ 0, 0, 1, 1 }) };
        }

        m_texture_params = params;
        texture_data->apply_params(m_renderer, &params.value());
    }

    void Sprite::set_parent(app::GameObject* parent) const { il2cpp::unity::set_parent(m_root, parent); }

    app::GameObject* Sprite::get_game_object() const {
        return m_root;
    }
} // namespace core
