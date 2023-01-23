#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/system/message_provider.h>
#include <Core/api/game/ui.h>
#include <Core/api/messages/messages.h>
#include <text_style.h>
#include <Core/utils/position_converter.h>

#include <Common/ext.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageControllerB.h>
#include <Modloader/app/methods/MessageProvider.h>
#include <Modloader/app/methods/MessageZoneB.h>
#include <Modloader/app/methods/OnScreenPositions.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/ScaleToTextBox.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/SwimBoostHelper.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/OnScreenPositions.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/types/ScaleToTextBox.h>
#include <Modloader/app/types/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/SoundSource.h>
#include <Modloader/app/structs/MonoSingleInstance_1_OnScreenPositions___Class.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <unordered_map>
#include <unordered_set>
#include <xstring>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;
using namespace app::classes::CatlikeCoding::TextBox;

namespace {
    bool is_on_screen_positions_initialized() {
        auto on_screen_positions = types::OnScreenPositions::get_class();
        auto mono_instance = reinterpret_cast<app::MonoSingleInstance_1_OnScreenPositions___Class*>(on_screen_positions->_0.parent);
        return mono_instance->static_fields->m_initialized;
    }

    struct RandoMessage {
        int id = 0;
        bool use_in_game_coordinates = false;
        app::Vector3 pos{ 0.0f, 0.0f, 0.0f };
        std::wstring text;
        bool should_show_box = true;
        float box_top_padding = 0.25f;
        float box_left_padding = 1.0f;
        float box_right_padding = 1.0f;
        float box_bottom_padding = 0.25f;
        bool should_play_sound = true;
        bool alive = true;
        bool recreate = false;
        bool visible = true;
        bool should_refresh = false;
        float delay = -1.0f;
        float fadein = 0.5f;
        float fadeout = 0.5f;
        app::Color color = { 1.0f, 1.0f, 1.0f, 1.0f };
        float size = 1.0f;
        app::AlignmentMode__Enum alignment = app::AlignmentMode__Enum::Center;
        app::HorizontalAnchorMode__Enum horizontal_anchor = app::HorizontalAnchorMode__Enum::Center;
        app::VerticalAnchorMode__Enum vertical_anchor = app::VerticalAnchorMode__Enum::Middle;
        float line_spacing = 1.0f;
        creation_callback callback = nullptr;
        app::GameObject* obj = nullptr;
    };

    std::unordered_map<int, RandoMessage> permanent_messages;

    void scale_background(RandoMessage& message) {
        if (!message.should_show_box || message.obj == nullptr)
            return;

        auto scaler = il2cpp::unity::get_component_in_children<app::ScaleToTextBox>(message.obj, types::ScaleToTextBox::get_class());
        scaler->fields.TopLeftPadding.y = message.box_top_padding;
        scaler->fields.TopLeftPadding.x = message.box_left_padding;
        scaler->fields.BottomRightPadding.y = message.box_bottom_padding;
        scaler->fields.BottomRightPadding.x = message.box_right_padding;
        ScaleToTextBox::UpdateSize(scaler);
    }

    void refresh(RandoMessage& message) {
        if (message.obj != nullptr && !message.recreate)
            message.should_refresh = true;
    }

    void do_position_refresh(RandoMessage& message) {
        app::Vector3 pos = { message.pos.x, message.pos.y, 0.0f };
        if (message.use_in_game_coordinates)
            pos = world_to_ui_position(pos);

        auto transform = il2cpp::unity::get_transform(message.obj);
        Transform::set_position(transform, pos);
    }

    void do_refresh(RandoMessage& message, app::MessageBox* message_box) {
        // Position
        do_position_refresh(message);

        // Text
        text_style::create_styles(message_box->fields.TextBox, message.text);
        message_box->fields.MessageProvider = utils::create_message_provider(message.text);

        // Color
        message_box->fields.TextBox->fields.color = message.color;

        // Size
        message_box->fields.TextBox->fields.size = message.size;

        // Alignment
        message_box->fields.TextBox->fields.alignment = message.alignment;

        // Anchor
        message_box->fields.TextBox->fields.horizontalAnchor = message.horizontal_anchor;
        message_box->fields.TextBox->fields.verticalAnchor = message.vertical_anchor;

        // Line spacing
        message_box->fields.TextBox->fields.LineSpacing = message.line_spacing;

        // Fade times
        message_box->fields.Visibility->fields.TransitionInDuration = message.fadein;
        message_box->fields.Visibility->fields.TransitionOutDuration = message.fadeout;

        MessageBox::RefreshText_1(message_box);
        message_box->fields.TextBox->fields.m_initializeAfterEnabling = true;
        scale_background(message);
        message.should_refresh = false;
    }

    app::GameObject* create_permanent_box(RandoMessage& message, bool instant = false) {
        auto controller = types::UI::get_class()->static_fields->MessageController;
        auto go = reinterpret_cast<app::GameObject*>(Object::Instantiate_3(reinterpret_cast<app::Object_1*>(controller->fields.HintSmallMessage)));
        game::add_to_container(game::RandoContainer::Messages, go);

        auto destroy_on_restore = il2cpp::unity::get_component_in_children<app::DestroyOnRestoreCheckpoint>(go, types::DestroyOnRestoreCheckpoint::get_class());
        il2cpp::unity::destroy_object(destroy_on_restore);

        auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(go, types::MessageBox::get_class());
        message_box->fields.ShouldWriteOut = true;

        message_box->fields.Visibility->fields.TransitionInDuration = message.fadein;
        message_box->fields.Visibility->fields.TransitionOutDuration = message.fadeout;
        message_box->fields.Visibility->fields.WaitDuration = 1.0f;
        if (instant)
            message_box->fields.Visibility->fields.m_time = 0.0f;
        message_box->fields.Visibility->fields.m_delayTime = instant ? 1.0f : 0.0f;
        message_box->fields.Visibility->fields.m_timeSpeed = 1.0f / std::max(message.fadein, FLT_MAX);

        message_box->fields.Visibility->fields.DestroyOnHide = false;

        message_box->fields.StartId = 0;
        message_box->fields.LockInput = false;
        message_box->fields.EndId = 0;
        message_box->fields.IsInteractive = false;
        message_box->fields.MessageIndex = 0;
        if (!message.should_play_sound)
            message_box->fields.m_messageDescriptors->vector[0].WWiseEvent = nullptr;

        message_box->fields.WrapText = true;
        message_box->fields.TextBox->fields.maxHeight = 500;

        message_box->fields.TextBox->fields.color = message.color;
        message_box->fields.TextBox->fields.alignment = message.alignment;
        message_box->fields.TextBox->fields.verticalAnchor = message.vertical_anchor;
        message_box->fields.TextBox->fields.horizontalAnchor = message.horizontal_anchor;
        message_box->fields.TextBox->fields.LineSpacing = message.line_spacing;
        message_box->fields.TextBox->fields.currentStyle.size = message.size;

        text_style::create_styles(message_box->fields.TextBox, message.text);
        message_box->fields.MessageProvider = utils::create_message_provider(message.text);
        MessageBox::RefreshText_1(message_box);

        auto transform = il2cpp::unity::get_transform(go);
        if (!message.should_show_box) {
            auto background = il2cpp::unity::get_game_object(Transform::GetChild(transform, 2));
            GameObject::SetActive(background, false);
        }

        auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(go, types::SoundSource::get_class());
        sound_source->fields.PlayAtStart = message.should_play_sound && !instant;

        Transform::set_position(transform, message.pos);
        if (message.callback != nullptr)
            message.callback(message.id);

        GameObject::SetActive(go, message.visible);
        scale_background(message);
        message.should_refresh = false;
        message.obj = go;

        return go;
    }

    bool clear_quest_messages_on_next_update = false;

    bool handle_visibility(RandoMessage& message, app::MessageBox* message_box) {
        auto visible = message.visible && message.alive;

        message_box->fields.Visibility->fields.m_timeSpeed = visible
                ? (1.0f / std::max(message.fadein, FLT_EPSILON))
                : -(1.0f / std::max(message.fadeout, FLT_EPSILON));

        if (!message.alive) {
            if (message.recreate || message.fadeout > 0.0f)
                message.delay = message.fadeout * (1.f - message_box->fields.Visibility->fields.m_delayTime);
            else
                return true;
        }

        return false;
    }

    IL2CPP_INTERCEPT(QuestsController, void, Update, (app::QuestsController * this_ptr)) {
        if (clear_quest_messages_on_next_update) {
            il2cpp::invoke(this_ptr->fields.m_queuedQuestMessages, "Clear");
            clear_quest_messages_on_next_update = false;
        }

        std::unordered_set<int> dead_messages;
        for (auto& message : permanent_messages) {
            if (message.second.delay > 0.0f) {
                message.second.delay -= TimeUtility::get_deltaTime();

                if (message.second.use_in_game_coordinates)
                    do_position_refresh(message.second);

                // Wait for message to disappear before removing from the list (so we have the chance to recreate it).
                if (!message.second.recreate && message.second.delay < 0.0f)
                    dead_messages.emplace(message.second.id);

                continue;
            }

            if (message.second.obj == nullptr) {
                create_permanent_box(message.second);
                message.second.recreate = false;
            }

            if (!il2cpp::unity::is_valid(message.second.obj)) {
                // Something else killed this game object, recreate it instantly.
                create_permanent_box(message.second, true);
                continue;
            }

            auto message_box = reinterpret_cast<app::MessageBox*>(il2cpp::unity::get_component_in_children(message.second.obj, types::MessageBox::get_class()));
            if (message.second.should_refresh)
                do_refresh(message.second, message_box);
            else if (message.second.use_in_game_coordinates)
                do_position_refresh(message.second);

            if (handle_visibility(message.second, message_box))
                dead_messages.emplace(message.second.id);

            GameObject::SetActive(message.second.obj, true);
        }

        for (auto id : dead_messages) {
            auto it = permanent_messages.find(id);
            if (it != permanent_messages.end()) {
                il2cpp::unity::destroy_object(it->second.obj);
                permanent_messages.erase(it);
            }
        }

        next::QuestsController::Update(this_ptr);
    }
} // namespace

CORE_C_DLLEXPORT void clear_quest_messages() {
    clear_quest_messages_on_next_update = true;
}

CORE_C_DLLEXPORT void get_screen_position(ScreenPosition position, app::Vector3* output) {
    if (is_on_screen_positions_initialized()) {
        switch (position) {
            case ScreenPosition::TopLeft:
                *output = OnScreenPositions::get_TopLeft();
                break;
            case ScreenPosition::TopCenter:
                *output = OnScreenPositions::get_TopCenter();
                break;
            case ScreenPosition::TopRight:
                *output = OnScreenPositions::get_TopRight();
                break;
            case ScreenPosition::MiddleLeft:
                *output = OnScreenPositions::get_MiddleLeft();
                break;
            case ScreenPosition::MiddleCenter:
                *output = OnScreenPositions::get_MiddleCenter();
                break;
            case ScreenPosition::MiddleRight:
                *output = OnScreenPositions::get_MiddleRight();
                break;
            case ScreenPosition::BottomLeft:
                *output = OnScreenPositions::get_BottomLeft();
                break;
            case ScreenPosition::BottomCenter:
                *output = OnScreenPositions::get_BottomCenter();
                break;
            case ScreenPosition::BottomRight:
                *output = OnScreenPositions::get_BottomRight();
                break;
        }
    } else {
        output->x = 0.0f;
        output->y = 0.0f;
        output->z = 0.0f;
    }
}

app::MessageBox* get_message_box(RandoMessage& message) {
    if (!il2cpp::unity::is_valid(message.obj) || message.recreate)
        return nullptr;

    return reinterpret_cast<app::MessageBox*>(il2cpp::unity::get_component_in_children(message.obj, types::MessageBox::get_class()));
}

app::GameObject* text_box_get_go(int id) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return nullptr;

    if (!il2cpp::unity::is_valid(message->second.obj))
        return nullptr;

    return reinterpret_cast<app::GameObject*>(message->second.obj);
}

bool text_box_creation_callback(int id, creation_callback func) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.callback = func;
    return true;
}

int next_message_id = 1;
CORE_C_DLLEXPORT int reserve_id() {
    return next_message_id++;
}

CORE_C_DLLEXPORT bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound) {
    auto it = permanent_messages.find(id);
    if (it != permanent_messages.end()) {
        if (it->second.alive)
            return false;

        it->second.recreate = true;
        it->second.alive = true;
        it->second.fadein = fadein;
        it->second.fadeout = fadeout;
        it->second.should_show_box = should_show_box;
        it->second.should_play_sound = should_play_sound;
        return true;
    }

    RandoMessage message;
    message.id = id;
    message.alive = true;
    message.fadein = fadein;
    message.fadeout = fadeout;
    message.should_show_box = should_show_box;
    message.should_play_sound = should_play_sound;
    message.obj = nullptr;
    permanent_messages.emplace(id, std::move(message));

    return true;
}

CORE_C_DLLEXPORT bool text_box_text(int id, const wchar_t* text) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.text = text;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_position(int id, float x, float y, float z, bool use_in_game_coordinates) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.pos.x = x;
    message->second.pos.y = y;
    message->second.pos.z = z;
    message->second.use_in_game_coordinates = use_in_game_coordinates;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_padding(int id, float top, float left, float right, float bottom) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.box_top_padding = top;
    message->second.box_left_padding = left;
    message->second.box_right_padding = right;
    message->second.box_bottom_padding = bottom;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_fade(int id, float fadeIn, float fadeOut) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.fadein = fadeIn;
    message->second.fadeout = fadeOut;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_color(int id, int r, int g, int b, int a) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    if (r < 0 || 255 < r || g < 0 || 255 < g || b < 0 || 255 < b || a < 0 || 255 < a) {
        warn("wheel", fmt::format("invalid color passed to text box: ({}, {}, {}, {})", r, g, b, a));
        r = std::max(std::min(r, 255), 0);
        g = std::max(std::min(g, 255), 0);
        b = std::max(std::min(b, 255), 0);
        a = std::max(std::min(a, 255), 0);
    }

    message->second.color = app::Color{ r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f };
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_size(int id, float size) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.size = size;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_alignment(int id, app::AlignmentMode__Enum alignment) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.alignment = alignment;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_anchor(int id, app::HorizontalAnchorMode__Enum horizontal, app::VerticalAnchorMode__Enum vertical) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.horizontal_anchor = horizontal;
    message->second.vertical_anchor = vertical;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_line_spacing(int id, float spacing) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.line_spacing = spacing;
    refresh(message->second);

    return true;
}

CORE_C_DLLEXPORT bool text_box_visibility(int id, bool value) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.visible = value;
    return true;
}

CORE_C_DLLEXPORT bool text_box_is_delayed(int id) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    return message->second.delay > 0.0f;
}

CORE_C_DLLEXPORT bool text_box_destroy(int id) {
    auto message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.alive = false;
    message->second.recreate = false;
    return true;
}
