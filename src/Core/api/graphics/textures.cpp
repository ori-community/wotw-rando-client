#include <Core/api/graphics/textures.h>

#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/RenderTexture.h>
#include <Modloader/app/methods/UnityEngine/Texture.h>
#include <Modloader/app/methods/UnityEngine/Graphics.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/RenderTexture.h>
#include <Modloader/modloader.h>


using namespace modloader;
using namespace app::classes;

namespace core::api::graphics::textures {
    namespace {
        std::unordered_map<std::string, texture_source_load_fn> texture_sources;
    }

    void register_source(const std::string& protocol, const texture_source_load_fn& source_load_fn) {
        assert(!texture_sources.contains(protocol));  // Tried to register protocol twice
        texture_sources[protocol] = source_load_fn;
    }

    app::RenderTexture* create_placeholder_render_texture() {
        const auto texture = types::RenderTexture::create();
        UnityEngine::RenderTexture::ctor_5(texture, 1, 1, 32, app::RenderTextureFormat__Enum::ARGB32, app::RenderTextureReadWrite__Enum::sRGB);
        UnityEngine::Object::set_hideFlags(reinterpret_cast<app::Object_1*>(texture), app::HideFlags__Enum::DontUnloadUnusedAsset);
        return texture;
    }

    void copy_texture_into_render_texture(app::Texture2D* source, app::RenderTexture* target) {
        UnityEngine::RenderTexture::set_width(target, UnityEngine::Texture::get_width(reinterpret_cast<app::Texture*>(source)));
        UnityEngine::RenderTexture::set_height(target, UnityEngine::Texture::get_height(reinterpret_cast<app::Texture*>(source)));
        UnityEngine::Graphics::Blit_1(reinterpret_cast<app::Texture*>(source), target);
    }

    UberShaderProperties& UberShaderProperties::with_color(app::Color new_color) {
        color = new_color;
        return *this;
    }

    std::shared_ptr<Texture> TextureIdentifier::load(std::optional<UberShaderProperties> uber_shader_properties) const {
        return std::make_shared<Texture>(*this, uber_shader_properties);
    }

    TextureIdentifier TextureIdentifier::shard(app::SpiritShardType__Enum shard_type) {
        return {"Shard", std::to_string(static_cast<int>(shard_type))};
    }

    TextureIdentifier TextureIdentifier::file(const std::string& path) {
        return {"File", path};
    }

    Texture::Texture(std::string protocol, std::string id, std::optional<UberShaderProperties> uber_shader_properties):
        Texture(TextureIdentifier(std::move(protocol), std::move(id)), uber_shader_properties) {

    }

    Texture::Texture(TextureIdentifier identifier, std::optional<UberShaderProperties> uber_shader_properties) :
        m_identifier(std::move(identifier)),
        m_uber_shader_properties(uber_shader_properties) {

        const auto source_it = texture_sources.find(m_identifier.protocol);
        if (source_it == texture_sources.end()) {
            return;
        }

        const auto loaded_texture = source_it->second(m_identifier.id);
        m_texture = loaded_texture.transform([](auto& texture) { return il2cpp::GCRef(texture); });
    }

    app::Texture* Texture::get_texture() {
        return m_texture.transform([](auto& ref) { return *ref; }).value_or(nullptr);
    }

    void Texture::apply_to(app::Renderer* renderer) {
        apply_texture_to(renderer);
        apply_uber_shader_properties_to(renderer);
    }

    Texture::ptr_t Texture::with_uber_shader_properties(const std::optional<UberShaderProperties>& uber_shader_properties) const {
        auto copy = std::make_shared<Texture>();

        copy->m_texture = m_texture;
        copy->m_identifier = m_identifier;
        copy->m_uber_shader_properties = uber_shader_properties;

        return copy;
    }

    void Texture::apply_texture_to(app::Renderer* renderer) {
        if (!m_texture.has_value()) {
            return;
        }

        UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, **m_texture);
    }

    void Texture::apply_uber_shader_properties_to(app::Renderer* renderer) const {
        if (!m_uber_shader_properties.has_value()) {
            return;
        }

        if (m_uber_shader_properties->uv.has_value()) {
            UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, m_uber_shader_properties->uv.value());
            UberShaderAPI::SetTextureOffset(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, app::Vector2(0, 0));
            UberShaderAPI::SetTextureScale(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, app::Vector2(1, 1));
        }

        if (m_uber_shader_properties->scroll_rot.has_value()) {
            UberShaderAPI::SetTextureAtlasScrollRotData(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, m_uber_shader_properties->scroll_rot.value());
        }

        if (m_uber_shader_properties->color.has_value()) {
            UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, m_uber_shader_properties->color.value());
        }
    }
} // namespace core::textures
