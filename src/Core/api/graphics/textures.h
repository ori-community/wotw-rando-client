#pragma once

#include <Core/api/graphics/shaders.h>
#include <Core/macros.h>

#include <functional>
#include <memory>
#include <optional>
#include <nlohmann/json.hpp>
#include <utility>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>


namespace core::api::graphics::textures {
    struct CORE_DLLEXPORT UberShaderProperties {
        std::optional<app::Vector4> uv = app::Vector4{0, 0, 1, 1};
        std::optional<app::Vector4> scroll_rot = app::Vector4{0, 0, 1, 1};
        std::optional<app::Color> color = std::nullopt;

        UberShaderProperties& with_color(app::Color new_color);
    };

    class CORE_DLLEXPORT Texture;

    struct CORE_DLLEXPORT TextureIdentifier {
        /** Texture protocol, e.g. "Opher" or "Bundle" */
        std::string protocol;
        /** Texture identifier, handled by the registered source */
        std::string id;

        TextureIdentifier() = default;
        TextureIdentifier(std::string protocol, std::string id) :
            protocol(std::move(protocol)),
            id(std::move(id)) {}

        [[nodiscard]]
        std::shared_ptr<Texture> load(std::optional<UberShaderProperties> uber_shader_properties = UberShaderProperties()) const;

        static TextureIdentifier shard(app::SpiritShardType__Enum shard_type);
        static TextureIdentifier file(const std::string& path);

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            TextureIdentifier,
            protocol,
            id
        )
    };

    struct CORE_DLLEXPORT ConstTextureIdentifier {
        frozen::string protocol;
        frozen::string id;

        constexpr ConstTextureIdentifier(const frozen::string protocol, const frozen::string id) :
            protocol(protocol),
            id(id) {}

        operator TextureIdentifier() const {
            return {
                std::string(protocol.begin(), protocol.end()),
                std::string(id.begin(), id.end())
            };
        }
    };

    class CORE_DLLEXPORT Texture : std::enable_shared_from_this<Texture> {
    public:
        using ptr_t = std::shared_ptr<Texture>;

        Texture() = default;
        explicit Texture(std::string protocol, std::string id, std::optional<UberShaderProperties> uber_shader_properties = UberShaderProperties());
        explicit Texture(TextureIdentifier identifier, std::optional<UberShaderProperties> uber_shader_properties = UberShaderProperties());

        app::Texture* get_texture();

        void apply_to(app::Renderer* renderer);

        ptr_t with_uber_shader_properties(const std::optional<UberShaderProperties>& uber_shader_properties) const;

    private:
        TextureIdentifier m_identifier;
        std::optional<il2cpp::GCRef<app::Texture>> m_texture = std::nullopt;
        std::optional<UberShaderProperties> m_uber_shader_properties = std::nullopt;

        static const std::optional<il2cpp::GCRef<app::Texture>>& get_placeholder_texture();
        void apply_texture_to(app::Renderer* renderer);
        void apply_uber_shader_properties_to(app::Renderer* renderer) const;
    };

    using texture_source_load_fn = std::function<std::optional<app::Texture*>(const std::string& id)>;

    CORE_DLLEXPORT void register_source(const std::string& protocol, const texture_source_load_fn& source_load_fn);

    CORE_DLLEXPORT const std::shared_ptr<Texture>& get_empty_texture();
    CORE_DLLEXPORT app::RenderTexture* create_placeholder_render_texture();
    CORE_DLLEXPORT void copy_texture_into_render_texture(app::Texture2D* source, app::RenderTexture* target);

    template <typename T>
    class CORE_DLLEXPORT RenderTextureCache {
    public:
        void clear() {
            m_textures.clear();
        }

        app::RenderTexture* get_render_texture(const T& key) {
            auto it = m_textures.find(key);
            if (it == m_textures.end()) {
                const auto texture = create_placeholder_render_texture();
                m_textures.emplace(key, texture);
                return texture;
            }

            return it->second.ref();
        }

        app::Texture* get_texture(const T& key) {
            return reinterpret_cast<app::Texture*>(get_render_texture(key));
        }

    private:
        std::unordered_map<T, il2cpp::GCRef<app::RenderTexture>> m_textures;
    };
} // namespace core::api::graphics::textures
