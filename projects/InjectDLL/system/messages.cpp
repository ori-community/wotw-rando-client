#include <csharp_bridge.h>
#include <dll_main.h>
#include <dev/object_visualizer.h>
#include <system/messages.h>
#include <utils/messaging.h>

#include <Common/ext.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <set>
#include <locale>
#include <codecvt>
#include <unordered_map>
#include <unordered_set>
#include <xstring>

using namespace modloader;

bool area_map_open = false;

namespace
{
    STATIC_IL2CPP_BINDING(, MessageParserUtility, app::String*, ProcessString, (app::String* message));
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopLeft, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopCenter, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopRight, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_MiddleLeft, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_MiddleCenter, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_MiddleRight, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomLeft, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomCenter, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomRight, ());

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowSpiritTreeTextMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::Vector3 position)) { return nullptr; }
    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowAbilityMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, int32_t ability)) { return nullptr; }
    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowShardMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::GameObject* av, app::SpiritShardType__Enum shard)) { return nullptr; }
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowSpellMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) { return nullptr; }
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowCompleteQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) { return nullptr; }
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowUpdatedQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) { return nullptr; }
    IL2CPP_INTERCEPT(, MessageZoneB, void, FixedUpdate, (app::MessageZoneB* this_ptr)) {}

    IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider* this_ptr));
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowPickupMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
        if (context->fields.PickupType == app::PickupMessageIcon_PickupType__Enum_QuestItem) {
            auto arr = MessageProvider::GetAllMessages(context->fields.Name);
            if (arr->max_length > 0)
            {
                auto name = il2cpp::convert_csstring(arr->vector[0]);
                if (name == "Gorlek Ore" || name == "Giant Spirit Light Container")
                    return nullptr;
            }
        }

        return MessageControllerB::ShowPickupMessage(this_ptr, message_provider, context, lockInput);
    }

    bool is_on_screen_positions_initialized()
    {
        auto on_screen_positions = il2cpp::get_class<app::OnScreenPositions__Class>("", "OnScreenPositions");
        auto mono_instance = reinterpret_cast<app::MonoSingleInstance_1_OnScreenPositions___Class*>(on_screen_positions->_0.parent);
        return mono_instance->static_fields->m_initialized;
    }

    struct RandoMessage
    {
        int id = 0;
        bool use_in_game_coordinates = false;
        app::Vector3 pos{ 0.0f, 0.0f, 0.0f};
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
        app::AlignmentMode__Enum alignment = app::AlignmentMode__Enum_Center;
        app::HorizontalAnchorMode__Enum horizontal_anchor = app::HorizontalAnchorMode__Enum_Center;
        app::VerticalAnchorMode__Enum vertical_anchor = app::VerticalAnchorMode__Enum_Middle;
        float line_spacing = 1.0f;
        uint32_t handle = -1;
        creation_callback callback = nullptr;
    };

    std::unordered_map<int, RandoMessage> permanent_messages;
    IL2CPP_BINDING(, MenuScreenManager, bool, IsVisible, (app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen));
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WeaponmasterScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_BuilderScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_GardenerScreenVisible, ());

    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Implicit, (void* this_ptr));
    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Equality, (void* this_ptr, void* obj));
    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (void* object), (UnityEngine:Object));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_parent, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, GetChild, (app::Transform* this_ptr, int index));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* value));
    IL2CPP_BINDING(CatlikeCoding.TextBox, TextBox, void, RefreshText, (app::TextBox* this_ptr));

    bool eat(std::wstring const& text, int& i, std::wstring_view food)
    {
        if (i + food.size() >= text.size())
            return false;

        if (std::wstring_view(text.c_str() + i, food.size()) == food)
        {
            i += food.size();
            return true;
        }

        return false;
    }

    std::wstring_view eat_until(std::wstring const& text, int& i, std::wstring_view until)
    {
        int j = i;
        while (j < text.size())
        {
            if (eat(text, j, until))
            {
                std::wstring_view out(text.c_str() + i, j - i - until.size());
                i = j;
                return out;
            }
            else
                ++j;
        }

        return L"";
    }

    bool check_style(std::wstring const& text, int& i, std::wstring_view start, std::string& value)
    {
        if (eat(text, i, start))
        {
            value = trim(convert_wstring_to_string(std::wstring(eat_until(text, i, L">"))));
            if (!value.empty())
                return true;
            else
                warn("messages", "missing > in style definition");
        }

        return false;
    }

    app::TextStyle* create_style(std::string_view name)
    {
        auto style = il2cpp::create_object<app::TextStyle>("CatlikeCoding.TextBox", "TextStyle");
        il2cpp::invoke(style, ".ctor");
        style->fields.name = reinterpret_cast<app::String*>(il2cpp::string_new(name));
        style->fields.rendererId = -1;
        return style;
    }

    std::unordered_set<std::string> created_styles;
    app::TextStyle* create_color_style(std::string const& text)
    {
        auto it = created_styles.find(text);
        if (it != created_styles.end() || text.size() != 8)
            return nullptr;

        char* out = nullptr;
        auto color_channels = std::strtoul(text.c_str(), &out, 16);
        if (out != text.c_str() + text.size())
            return nullptr;

        auto style = create_style("hex_" + text);
        style->fields.hasColor = true;
        style->fields.color.rgba =
            ((color_channels >> 24) & 0xff) |
            ((color_channels << 8) & 0xff0000) |
            ((color_channels >> 8) & 0xff00) |
            ((color_channels << 24) & 0xff000000);

        return style;
    }

    app::TextStyle* create_size_style(std::string const& text)
    {
        auto it = created_styles.find(text);
        if (it != created_styles.end())
            return nullptr;

        char* out = nullptr;
        auto font_scale = std::strtod(text.c_str(), &out);
        if (out != text.c_str() + text.size())
            return nullptr;

        auto style = create_style("s_" + text);
        style->fields.hasFontScale = true;
        style->fields.fontScale = font_scale;
        style->fields.absoluteFontScale = true;

        return style;
    }

    void create_color_styles(app::MessageBox* box, std::wstring const& text)
    {
        int i = 0;
        std::vector<app::TextStyle*> new_styles;
        std::string value;
        while (i < text.size())
        {
            app::TextStyle* style = nullptr;
            if (check_style(text, i, L"<hex_", value))
                style = create_color_style(value);
            else if (check_style(text, i, L"<s_", value))
                style = create_size_style(value);
            else
                ++i;

            if (style != nullptr)
            {
                created_styles.emplace(value);
                new_styles.push_back(style);
            }
        }

        if (!new_styles.empty())
        {
            auto* styles = box->fields.TextBox->fields.styleCollection->fields.styles;
            auto size = styles->max_length + new_styles.size();
            auto arr = il2cpp::untyped::array_new(il2cpp::get_class("CatlikeCoding.TextBox", "TextStyle"), size);
            for (int i = 0; i < styles->max_length; ++i)
                arr->vector[i] = styles->vector[i];

            for (int i = 0; i < new_styles.size(); ++i)
                arr->vector[i + styles->max_length] = new_styles.at(i);

            box->fields.TextBox->fields.styleCollection->fields.styles = reinterpret_cast<app::TextStyle__Array*>(arr);
            for (auto i = 0; i < box->fields.TextBox->fields.styleCollection->fields.styles->max_length; ++i)
                auto name = il2cpp::convert_csstring(box->fields.TextBox->fields.styleCollection->fields.styles->vector[i]->fields.name);
        }
    }

    IL2CPP_BINDING(, ScaleToTextBox, void, UpdateSize, (app::ScaleToTextBox* this_ptr));
    void scale_background(RandoMessage& message)
    {
        if (!message.should_show_box || message.handle == -1)
            return;

        auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message.handle));
        if (!il2cpp::unity::is_valid(go))
            return;

        auto scaler = il2cpp::unity::get_component_in_children<app::ScaleToTextBox>(go, "", "ScaleToTextBox");
        scaler->fields.TopLeftPadding.y = message.box_top_padding;
        scaler->fields.TopLeftPadding.x = message.box_left_padding;
        scaler->fields.BottomRightPadding.y = message.box_bottom_padding;
        scaler->fields.BottomRightPadding.x = message.box_right_padding;
        ScaleToTextBox::UpdateSize(scaler);
    }

    void refresh(RandoMessage& message)
    {
        if (message.handle != -1 && !message.recreate)
            message.should_refresh = true;
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Camera, app::Camera*, get_current, ());
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, WorldToScreenPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, ScreenToWorldPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(, GameplayCamera, app::Camera*, get_Camera, (app::GameplayCamera* camera));
    void do_position_refresh(RandoMessage &message)
    {
        app::Vector3 pos = { message.pos.x, message.pos.y, 0.0f };
        if (message.use_in_game_coordinates) {
            auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
            if (!il2cpp::unity::is_valid(cameras->static_fields->Current) || !il2cpp::unity::is_valid(cameras->static_fields->System->fields.GUICamera))
                return;

            auto world_camera = GameplayCamera::get_Camera(cameras->static_fields->Current);
            auto ui_camera = cameras->static_fields->System->fields.GUICamera->fields.Camera;
            if (!il2cpp::unity::is_valid(world_camera) || !il2cpp::unity::is_valid(ui_camera))
                return;

            pos = Camera::WorldToScreenPoint(world_camera, &pos);
            pos = Camera::ScreenToWorldPoint(ui_camera, &pos);
            pos.z = 0.0f;
        }

        auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message.handle));
        auto transform = il2cpp::unity::get_transform(go);
        Transform::set_position(transform, &pos);
    }

    void do_refresh(RandoMessage& message, app::MessageBox* message_box)
    {
        // Position
        do_position_refresh(message);

        // Text
        create_color_styles(message_box, message.text);
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

        MessageBox::RefreshText(message_box);
        message_box->fields.TextBox->fields.m_initializeAfterEnabling = true;
        scale_background(message);
        message.should_refresh = false;
    }

    app::GameObject* create_permanent_box(RandoMessage& message, bool instant = false)
    {
        auto controller = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->MessageController;
        auto go = reinterpret_cast<app::GameObject*>(Object::Instantiate(controller->fields.HintSmallMessage));
        message.handle = il2cpp::gchandle_new(go, false);

        auto parent = Transform::get_parent(il2cpp::unity::get_transform(controller->fields.HintSmallMessage));
        Transform::set_parent(il2cpp::unity::get_transform(go), parent);

        auto destroy_on_restore = il2cpp::unity::get_component_in_children<app::DestroyOnRestoreCheckpoint>(go, "", "DestroyOnRestoreCheckpoint");
        bool should_destroy_on_restore = false;
        il2cpp::invoke(destroy_on_restore, "set_enabled", &should_destroy_on_restore);

        auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(go, "", "MessageBox");
        message_box->fields.ShouldWriteOut = true;

        message_box->fields.Visibility->fields.TransitionInDuration = message.fadein;
        message_box->fields.Visibility->fields.TransitionOutDuration = message.fadeout;
        message_box->fields.Visibility->fields.WaitDuration = 1.0f;
        if (instant)
            message_box->fields.Visibility->fields.m_time = 0.0f;
        message_box->fields.Visibility->fields.m_delayTime = instant ? 1.0f : 0.0f;
        message_box->fields.Visibility->fields.m_timeSpeed = message.fadein > 0.0f ? 1.0f / message.fadein : 1.0f;

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

        create_color_styles(message_box, message.text);
        message_box->fields.MessageProvider = utils::create_message_provider(message.text);
        MessageBox::RefreshText(message_box);

        auto transform = il2cpp::unity::get_transform(go);
        if (!message.should_show_box)
        {
            auto background = il2cpp::unity::get_game_object(Transform::GetChild(transform, 2));
            GameObject::SetActive(background, false);
        }

        auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(go, "", "SoundSource");
        sound_source->fields.PlayAtStart = message.should_play_sound && !instant;

        Transform::set_position(transform, &message.pos);
        if (message.callback != nullptr)
            message.callback(message.id);

        GameObject::SetActive(go, message.visible);
        scale_background(message);
        message.should_refresh = false;

        return go;
    }

    bool clear_on_next_update = false;

    bool handle_visibility(RandoMessage& message, app::MessageBox* message_box)
    {
        auto visible = message.visible && message.alive;
        message_box->fields.Visibility->fields.m_timeSpeed = visible
            ? (message.fadein > 0.0f ? 1.0f / message.fadein : 1.0f)
            : -(message.fadeout > 0.0f ? 1.0f / message.fadeout : 1.0f);
        if (!message.alive)
        {
            if (message.recreate || message.fadeout > 0.0f)
                message.delay = message.fadeout * (1.f - message_box->fields.Visibility->fields.m_delayTime);
            else
                return true;
        }

        return false;
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    IL2CPP_INTERCEPT(, QuestsController, void, Update, (app::QuestsController* this_ptr)) {
        if (clear_on_next_update)
        {
            il2cpp::invoke(this_ptr->fields.m_queuedQuestMessages, "Clear");
            clear_on_next_update = false;
        }

        std::unordered_set<int> dead_messages;
        for (auto& message : permanent_messages)
        {
            if (message.second.delay > 0.0f)
            {
                message.second.delay -= TimeUtility::get_deltaTime();

                if (message.second.use_in_game_coordinates)
                    do_position_refresh(message.second);

                // Wait for message to disappear before removing from the list (so we have the chance to recreate it).
                if (!message.second.recreate && message.second.delay < 0.0f)
                    dead_messages.emplace(message.second.id);

                continue;
            }

            if (message.second.handle == -1)
            {
                create_permanent_box(message.second);
                message.second.recreate = false;
            }

            auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message.second.handle));
            if (!il2cpp::unity::is_valid(go))
            {
                // Something else killed this game object, recreate it instantly.
                il2cpp::gchandle_free(message.second.handle);
                create_permanent_box(message.second, true);
                continue;
            }

            auto message_box = reinterpret_cast<app::MessageBox*>(il2cpp::unity::get_component_in_children(go, "", "MessageBox"));
            if (message.second.should_refresh)
                do_refresh(message.second, message_box);
            else if (message.second.use_in_game_coordinates)
                do_position_refresh(message.second);

            if (handle_visibility(message.second, message_box))
                dead_messages.emplace(message.second.id);

            GameObject::SetActive(go, true);
        }

        for (auto id : dead_messages)
        {
            auto it = permanent_messages.find(id);
            if (it != permanent_messages.end())
            {
                il2cpp::unity::destroy_object(il2cpp::gchandle_target(it->second.handle));
                il2cpp::gchandle_free(it->second.handle);
                it->second.handle = -1;
                permanent_messages.erase(it);
            }
        }

        QuestsController::Update(this_ptr);
    }

    IL2CPP_BINDING(, SeinLogicCycle, app::SeinLogicCycle_StateFlags__Enum, GetFlags, (app::SeinLogicCycle* this_ptr, app::SeinLogicCycle_StateFlags__Enum test));
}

INJECT_C_DLLEXPORT void clear_quest_messages()
{
    clear_on_next_update = true;
}

INJECT_C_DLLEXPORT void get_screen_position(ScreenPosition position, app::Vector3* output)
{
    if (is_on_screen_positions_initialized())
    {
        switch (position)
        {
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
    }
    else
    {
        output->x = 0.0f;
        output->y = 0.0f;
        output->z = 0.0f;
    }
}

enum ConvertPositionType {
    UI_TO_WORLD,
    WORLD_TO_UI,
};

void convert_position(app::Vector2* position, ConvertPositionType type)
{
    app::Vector3 pos = { position->x, position->y, 0.0f };

    auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
    if (!il2cpp::unity::is_valid(cameras->static_fields->Current) || !il2cpp::unity::is_valid(cameras->static_fields->System->fields.GUICamera))
        return;

    auto world_camera = GameplayCamera::get_Camera(cameras->static_fields->Current);
    auto ui_camera = cameras->static_fields->System->fields.GUICamera->fields.Camera;
    if (!il2cpp::unity::is_valid(world_camera) || !il2cpp::unity::is_valid(ui_camera))
        return;

    switch (type) {
        case UI_TO_WORLD:
            pos = Camera::WorldToScreenPoint(ui_camera, &pos);
            pos = Camera::ScreenToWorldPoint(world_camera, &pos);
            break;
        case WORLD_TO_UI:
            pos = Camera::WorldToScreenPoint(world_camera, &pos);
            pos = Camera::ScreenToWorldPoint(ui_camera, &pos);
            break;
    }

    position->x = pos.x;
    position->y = pos.y;
}

INJECT_C_DLLEXPORT void world_to_ui_position(app::Vector2* position)
{
    return convert_position(position, WORLD_TO_UI);
}

INJECT_C_DLLEXPORT void ui_to_world_position(app::Vector2* position)
{
    return convert_position(position, UI_TO_WORLD);
}

app::MessageBox* get_message_box(RandoMessage& message)
{
    if (message.handle == -1 || message.recreate)
        return nullptr;

    auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message.handle));
    return reinterpret_cast<app::MessageBox*>(il2cpp::unity::get_component_in_children(go, "", "MessageBox"));
}

app::GameObject* text_box_get_go(int id)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return nullptr;

    if (message->second.handle == -1)
        return nullptr;

    return reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message->second.handle));
}

bool text_box_creation_callback(int id, creation_callback func)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.callback = func;
    return true;
}

int id = 1;
INJECT_C_DLLEXPORT int reserve_id()
{
    return id++;
}

INJECT_C_DLLEXPORT bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound)
{
    auto it = permanent_messages.find(id);
    if (it != permanent_messages.end())
    {
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
    message.handle = -1;
    permanent_messages.emplace(id, std::move(message));

    return true;
}

INJECT_C_DLLEXPORT bool text_box_text(int id, const wchar_t* text)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.text = text;
    auto message_box = get_message_box(message->second);
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_position(int id, float x, float y, float z, bool use_in_game_coordinates)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.pos.x = x;
    message->second.pos.y = y;
    message->second.pos.z = z;
    message->second.use_in_game_coordinates = use_in_game_coordinates;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_padding(int id, float top, float left, float right, float bottom)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.box_top_padding = top;
    message->second.box_left_padding = left;
    message->second.box_right_padding = right;
    message->second.box_bottom_padding = bottom;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_fade(int id, float fadeIn, float fadeOut)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.fadein = fadeIn;
    message->second.fadeout = fadeOut;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_color(int id, int r, int g, int b, int a)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    if (r < 0 || 255 < r || g < 0 || 255 < g || b < 0 || 255 < b || a < 0 || 255 < a)
    {
        warn("wheel", format("invalid color passed to text box: (%d, %d, %d, %d)", r, g, b, a));
        r = std::max(std::min(r, 255), 0);
        g = std::max(std::min(g, 255), 0);
        b = std::max(std::min(b, 255), 0);
        a = std::max(std::min(a, 255), 0);
    }

    message->second.color = app::Color{ r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f };
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_size(int id, float size)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.size = size;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_alignment(int id, app::AlignmentMode__Enum alignment)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.alignment = alignment;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_anchor(int id, app::HorizontalAnchorMode__Enum horizontal, app::VerticalAnchorMode__Enum vertical)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.horizontal_anchor = horizontal;
    message->second.vertical_anchor = vertical;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_line_spacing(int id, float spacing)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.line_spacing = spacing;
    refresh(message->second);

    return true;
}

INJECT_C_DLLEXPORT bool text_box_visibility(int id, bool value)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.visible = value;
    return true;
}

INJECT_C_DLLEXPORT bool text_box_is_delayed(int id)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    return message->second.delay > 0.0f;
}

INJECT_C_DLLEXPORT bool text_box_destroy(int id)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.alive = false;
    message->second.recreate = false;
    return true;
}

INJECT_C_DLLEXPORT bool should_handle_messages()
{
    auto ui = reinterpret_cast<app::UI__Class*>(il2cpp::get_class("Game", "UI"));
    if (MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_WorldMap) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_EquipmentWheel) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_ShardsShop) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_BuilderProjects) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_GardenerProjects) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_Loremaster) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_RaceScreen) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_MapmakerShop) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_ShardUpgradeShop) ||
        MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_Stats))
        return true;

    if (UI::get_MainMenuVisible())
    {
        const auto map_is_open = UI::get_WorldMapVisible();
        const auto shard_is_open = UI::get_ShardShopVisible();
        const auto weapon_is_open = UI::get_WeaponmasterScreenVisible();
        const auto builder_is_open = UI::get_BuilderScreenVisible();
        const auto gardener_is_open = UI::get_GardenerScreenVisible();

        if (area_map_open ||
            map_is_open ||
            shard_is_open ||
            weapon_is_open ||
            builder_is_open ||
            gardener_is_open)
            return true;

        return false;
    }

    auto* sein = get_sein();
    if (sein == nullptr || sein->fields.LogicCycle == nullptr)
        return false;

    if (SeinLogicCycle::GetFlags(sein->fields.LogicCycle, app::SeinLogicCycle_StateFlags__Enum_IsInteracting) == 0)
        return true;

    return false;
}
