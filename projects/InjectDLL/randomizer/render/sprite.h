#pragma once

#include <macros.h>
#include <enums/layer.h>
#include <randomizer/render/textures.h>

namespace randomizer
{
    enum class SpriteEndHandling
    {
        Freeze,
        Hide
    };

    struct AnimationEntry
    {
        std::wstring texture;
        std::shared_ptr<textures::TextureData> texture_data = nullptr;
        std::optional<textures::MaterialParams> texture_params;
        app::Vector3 position{ 0.f, 0.f, 0.f };
        app::Vector3 scale{ 0.f, 0.f, 0.f };
        float aspect_ratio = 1.f;
        float rotation = 0;
        float duration = 0;
        float real_duration = 0;
        float offset_z = 0.f;
    };

    struct Sprite
    {
        bool visible = true;
        float start_time = 0.f;
        uint32_t game_object_handle = -1;
        app::BlendMode__Enum src_blend = app::BlendMode__Enum_SrcAlpha;
        app::BlendMode__Enum dst_blend = app::BlendMode__Enum_OneMinusSrcAlpha;

        DirtyValue<Layer> layer = Layer::UI;
        app::Vector3 position{ 0.f, 0.f, 0.f };
        app::Vector3 scale{ 0.f, 0.f, 0.f };
        float rotation = 0;

        std::wstring current_texture;
        DirtyValue<int> entry = 0;
        std::vector<AnimationEntry> entries;
        SpriteEndHandling end_handler;
    };
}
