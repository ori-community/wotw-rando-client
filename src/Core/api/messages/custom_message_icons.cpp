#include <Modloader/app/methods/CatlikeCoding/TextBox/MoonIconRenderer.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextStyle.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextStyleCollection.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageBoxLanguageStyles.h>
#include <Modloader/app/methods/MessageControllerB.h>
#include <Modloader/app/methods/System/String.h>
#include <Modloader/app/methods/ButtonIconUtility.h>
#include <Modloader/app/methods/TextBoxIconsFontGenerator_IconData.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/MoonIconRenderer.h>
#include <Modloader/app/types/TextBoxIconsFontGenerator.h>
#include <Modloader/app/types/TextBoxIconsFontGenerator_IconData.h>
#include <Modloader/app/types/TextStyle.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/interception_macros.h>
#include <magic_enum/magic_enum.hpp>
#include <Core/api/game/player.h>

#include "Core/api/game/game.h"
#include "Core/api/graphics/sprite.h"
#include "Core/api/graphics/textures.h"
#include "Core/input/sdl.h"
#include "frozen/unordered_map.h"

namespace {
    using namespace app::classes;

    struct TextStyleHolder {
        il2cpp::GCRef<app::GameObject> game_object;
        app::TextStyle* style_prefab;
    };

    std::optional<TextStyleHolder> playstation_icons_style;
    std::unordered_set<app::TextStyleCollection*> processed_style_collections;

    struct IconOverride {
        core::api::graphics::textures::TextureIdentifier texture_identifier;
        std::shared_ptr<core::api::graphics::Sprite> sprite = nullptr;
    };

    std::unordered_map<std::string, IconOverride> PLAYSTATION_ICON_OVERRIDES = {
        {"A", IconOverride(core::api::graphics::textures::TextureIdentifier("File", "icons/input/playstation_cross.png"))},
        {"B", IconOverride(core::api::graphics::textures::TextureIdentifier("File", "icons/input/playstation_circle.png"))},
        {"X", IconOverride(core::api::graphics::textures::TextureIdentifier("File", "icons/input/playstation_square.png"))},
        {"Y", IconOverride(core::api::graphics::textures::TextureIdentifier("File", "icons/input/playstation_triangle.png"))},
    };

    void try_initialize_playstation_icons(app::TextStyleCollection* vanilla_style_collection) {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        for (auto style: il2cpp::ArrayIterator(vanilla_style_collection->fields.styles)) {
            const auto style_name = il2cpp::convert_csstring_fast_unsafe(style->fields.name);

            // Copy icon renderer from the xbox style
            if (style_name == "xbox") {
                const auto new_style_prefab = types::TextStyle::create();
                CatlikeCoding::TextBox::TextStyle::ctor(new_style_prefab);
                il2cpp::gchandle_new(new_style_prefab, true);

                new_style_prefab->fields.name = il2cpp::string_new("playstation");
                new_style_prefab->fields.color = app::Color32{.r = 0, .g = 0, .b = 0, .a = 0};
                new_style_prefab->fields.font = style->fields.font;

                const auto original_icon_renderer = reinterpret_cast<app::MoonIconRenderer*>(style->fields.renderer);

                const auto new_icon_renderer_go = types::GameObject::create();
                UnityEngine::GameObject::ctor_1(new_icon_renderer_go, il2cpp::string_new("playstationIconRenderer"));
                UnityEngine::Object::DontDestroyOnLoad(reinterpret_cast<app::Object_1*>(new_icon_renderer_go));

                const auto new_icon_renderer = il2cpp::unity::add_component<app::MoonIconRenderer>(new_icon_renderer_go, types::MoonIconRenderer::get_class());

                new_icon_renderer->fields.Icons = il2cpp::unity::create_scriptable_object<app::TextBoxIconsFontGenerator>(types::TextBoxIconsFontGenerator::get_class());
                new_icon_renderer->fields.Icons->fields.BitmapFont = original_icon_renderer->fields.Icons->fields.BitmapFont;
                new_icon_renderer->fields.IconOffset = original_icon_renderer->fields.IconOffset;

                for (int i = 0; i < original_icon_renderer->fields.Icons->fields.Icons->fields._size; ++i) {
                    const auto original_icon_data = original_icon_renderer->fields.Icons->fields.Icons->fields._items->vector[i];
                    const auto original_icon_character = il2cpp::convert_csstring_fast_unsafe(original_icon_data->fields.Character);

                    const auto new_icon_data = types::TextBoxIconsFontGenerator_IconData::create();
                    TextBoxIconsFontGenerator_IconData::ctor(new_icon_data);
                    new_icon_data->fields.Width = original_icon_data->fields.Width;

                    const auto overrides_it = PLAYSTATION_ICON_OVERRIDES.find(original_icon_character);
                    if (overrides_it != PLAYSTATION_ICON_OVERRIDES.end()) {
                        const auto icon_parent_go = types::GameObject::create();
                        UnityEngine::GameObject::ctor_1(icon_parent_go, il2cpp::string_new(std::format("playstationIcon_{}", original_icon_character)));

                        overrides_it->second.sprite = std::make_shared<core::api::graphics::Sprite>(icon_parent_go);
                        overrides_it->second.sprite->enabled(true);
                        overrides_it->second.sprite->local_position({0.5, 0.3, 0});
                        overrides_it->second.sprite->texture(overrides_it->second.texture_identifier.load());

                        new_icon_data->fields.Icon = icon_parent_go;
                    } else {
                        new_icon_data->fields.Icon = il2cpp::unity::instantiate_object(original_icon_data->fields.Icon);
                    }

                    core::api::game::add_to_container(core::api::game::GameObjectContainer::Prefabs, new_icon_data->fields.Icon);
                    new_icon_data->fields.Character = System::String::Copy(original_icon_data->fields.Character);

                    il2cpp::invoke(new_icon_renderer->fields.Icons->fields.Icons, "Add", new_icon_data);
                }

                new_style_prefab->fields.renderer = reinterpret_cast<app::TextRenderer*>(new_icon_renderer);
                new_style_prefab->fields.rendererId = -1;
                new_style_prefab->fields.letterSpacing = 0.f;
                new_style_prefab->fields.fontScale = 1.f;
                new_style_prefab->fields.absoluteFontScale = true;
                new_style_prefab->fields.lineScale = 1.f;
                new_style_prefab->fields.hasColor = false;
                new_style_prefab->fields.hasLetterSpacing = false;
                new_style_prefab->fields.hasFontScale = false;
                new_style_prefab->fields.hasLineScale = false;

                playstation_icons_style = TextStyleHolder(il2cpp::GCRef(new_icon_renderer_go), new_style_prefab);
            }
        }
    }

    void add_custom_icon_renderers_to_style_collection(app::TextStyleCollection* style_collection, app::TextBox* text_box) {
        if (playstation_icons_style.has_value() && !processed_style_collections.contains(style_collection)) {
            processed_style_collections.emplace(style_collection);

            const auto new_styles_array_count = style_collection->fields.styles->max_length + 1;
            const auto new_styles_array = types::TextStyle::create_array(static_cast<int>(new_styles_array_count));

            for (int i = 0; i < style_collection->fields.styles->max_length; ++i) {
                new_styles_array->vector[i] = style_collection->fields.styles->vector[i];
            }

            new_styles_array->vector[style_collection->fields.styles->max_length] = types::TextStyle::create();
            const auto& style = new_styles_array->vector[style_collection->fields.styles->max_length];
            CatlikeCoding::TextBox::TextStyle::ctor(style);;

            style->fields.name = playstation_icons_style->style_prefab->fields.name;
            style->fields.color = playstation_icons_style->style_prefab->fields.color;
            style->fields.font = playstation_icons_style->style_prefab->fields.font;
            style->fields.renderer = playstation_icons_style->style_prefab->fields.renderer;
            style->fields.rendererId = playstation_icons_style->style_prefab->fields.rendererId;
            style->fields.letterSpacing = playstation_icons_style->style_prefab->fields.letterSpacing;
            style->fields.fontScale = playstation_icons_style->style_prefab->fields.fontScale;
            style->fields.absoluteFontScale = playstation_icons_style->style_prefab->fields.absoluteFontScale;
            style->fields.lineScale = playstation_icons_style->style_prefab->fields.lineScale;
            style->fields.hasColor = playstation_icons_style->style_prefab->fields.hasColor;
            style->fields.hasLetterSpacing = playstation_icons_style->style_prefab->fields.hasLetterSpacing;
            style->fields.hasFontScale = playstation_icons_style->style_prefab->fields.hasFontScale;
            style->fields.hasLineScale = playstation_icons_style->style_prefab->fields.hasLineScale;

            style_collection->fields.styles = new_styles_array;
        }
    }

    IL2CPP_INTERCEPT(void, CatlikeCoding::TextBox::TextStyleCollection, ComputeRendererCount, app::TextStyleCollection* this_ptr) {
        this_ptr->fields.rendererCount = 0;

        // This is the notable change here.
        // Keeping rendererCount at zero until all styles are initialized
        // forces the game to re-render once the styles are ready.
        if (!playstation_icons_style.has_value()) {
            return;
        }

        for (int i = 0; i < this_ptr->fields.styles->max_length; ++i) {
            const auto text_style = this_ptr->fields.styles->vector[i];
            text_style->fields.rendererId = -1;

            if (il2cpp::unity::is_valid(text_style->fields.renderer)) {
                for (int j = 0; j < i; ++j) {
                    if (text_style->fields.renderer == this_ptr->fields.styles->vector[j]->fields.renderer) {
                        text_style->fields.rendererId = this_ptr->fields.styles->vector[j]->fields.rendererId;
                        break;
                    }
                }

                if (text_style->fields.rendererId == -1) {
                    text_style->fields.rendererId = this_ptr->fields.rendererCount++;
                }
            }
        }
    }

    IL2CPP_INTERCEPT(app::TextRenderer__Array*, CatlikeCoding::TextBox::TextStyleCollection, CreateRenderers_1, app::TextStyleCollection* this_ptr, app::TextBox* box) {
        if (!playstation_icons_style.has_value()) {
            try_initialize_playstation_icons(this_ptr);
        }

        add_custom_icon_renderers_to_style_collection(this_ptr, box);
        return next::CatlikeCoding::TextBox::TextStyleCollection::CreateRenderers_1(this_ptr, box);
    }

    std::optional<std::string_view> get_input_character_for_button(const app::XboxControllerInput_Button__Enum button) {
        switch (button) {
            case app::XboxControllerInput_Button__Enum::ButtonA:
                return "A";
            case app::XboxControllerInput_Button__Enum::ButtonX:
                return "X";
            case app::XboxControllerInput_Button__Enum::ButtonY:
                return "Y";
            case app::XboxControllerInput_Button__Enum::ButtonB:
                return "B";
            case app::XboxControllerInput_Button__Enum::LeftTrigger:
                return "S";
            case app::XboxControllerInput_Button__Enum::RightTrigger:
                return "T";
            case app::XboxControllerInput_Button__Enum::LeftShoulder:
                return "L";
            case app::XboxControllerInput_Button__Enum::RightShoulder:
                return "R";
            case app::XboxControllerInput_Button__Enum::LeftStick:
                return "7";
            case app::XboxControllerInput_Button__Enum::RightStick:
                return "8";
            case app::XboxControllerInput_Button__Enum::Select:
                return "s";
            case app::XboxControllerInput_Button__Enum::Start:
                return "m";
            case app::XboxControllerInput_Button__Enum::Button10:
                return "0";
            case app::XboxControllerInput_Button__Enum::Button11:
                return "0";
            default:
        }

        return std::nullopt;
    }

    IL2CPP_INTERCEPT(app::String*, ButtonIconUtility, GetButtonString_3, app::ControllerButtonInput* controller_button_input) {
        const auto input_character = get_input_character_for_button(controller_button_input->fields.Button);

        if (input_character.has_value()) {
            std::string icon_identifier = "xbox";

            switch (core::input::sdl::get_sdl_gamepad_type()) {
                case core::input::sdl::GamepadType::Switch:
                    icon_identifier = "switch";
                    break;
                case core::input::sdl::GamepadType::PlayStation:
                    icon_identifier = "playstation";
                    break;
                default:
                    break;
            }

            return il2cpp::string_new(std::format("<{}>{}</>", icon_identifier, *input_character));
        }

        return il2cpp::string_new("");
    }
}
