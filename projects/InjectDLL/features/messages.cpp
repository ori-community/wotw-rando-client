#include <csharp_bridge.h>
#include <dll_main.h>
#include <dev/object_visualizer.h>
#include <features/messages.h>
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

IL2CPP_BINDING(System, String, app::Char__Array*, ToCharArray, (app::String* this_ptr))
bool area_map_open = false;
std::string convert_csstring(app::String* str)
{
    std::string cppstr;
    if (str == nullptr)
        return cppstr;

    auto chars = String::ToCharArray(str);
    if (chars == nullptr)
        return cppstr;

    std::wstring wstr(reinterpret_cast<wchar_t*>(chars->vector), str->fields.m_stringLength);
    using convert_type = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_type, wchar_t> converter;
    cppstr = converter.to_bytes(wstr);

    return cppstr;
}

INJECT_C_DLLEXPORT void clear_visible_hints();

namespace
{
    // Noop intercepts.

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowSpiritTreeTextMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::Vector3 position)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowAbilityMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, int32_t ability)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::GameObject*, ShowShardMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* provider, app::GameObject* av, app::SpiritShardType__Enum shard)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowSpellMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Don't think this ever gets called.
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowCompleteQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Don't think this ever gets called.
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowUpdatedQuestMessage, (app::MessageControllerB* t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    // Noop default zone hints.
    IL2CPP_INTERCEPT(, MessageZoneB, void, FixedUpdate, (app::MessageZoneB* this_ptr)) {

    }

    std::set<app::MessageBox*> tracked_boxes;
    app::MessageBox* npc_box = nullptr;
    app::MessageBox* below_hint_box = nullptr;
    app::String* last_message = nullptr;
    app::String* cached = nullptr;
    uint32_t last_handle = 0;
    uint32_t below_box_handle = 0;

    IL2CPP_BINDING_OVERLOAD(, MessageControllerB, app::MessageBox*, ShowHintSmallMessage, (app::MessageControllerB* this_ptr, app::MessageDescriptor descriptor, app::Vector3 position, float duration), (MessageDescriptor, UnityEngine : Vector3, System : Single));
    IL2CPP_BINDING(, MessageBoxVisibility, bool, get_Visible, (app::MessageBoxVisibility* this_ptr));
    IL2CPP_BINDING(, MessageBox, void, HideMessageScreenImmediately, (app::MessageBox* this_ptr, int32_t action));
    IL2CPP_BINDING(, MessageBox, void, HideMessageScreen, (app::MessageBox* this_ptr, int32_t action));

    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_TopCenter, ());
    STATIC_IL2CPP_BINDING(, OnScreenPositions, app::Vector3, get_BottomCenter, ());

    IL2CPP_BINDING(, SeinLogicCycle, app::SeinLogicCycle_StateFlags__Enum, GetFlags, (app::SeinLogicCycle* this_ptr, app::SeinLogicCycle_StateFlags__Enum test));
    
    void print_csstring(app::String* str)
    {
        auto cppstr = convert_csstring(str);
        trace(MessageType::Info, 4, "csstring", cppstr);
    }

    // nullcheck helper
    bool is_visible(app::MessageBox* box)
    {
        return box && box->fields.Visibility && MessageBoxVisibility::get_Visible(box->fields.Visibility);
    }

    IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider* this_ptr));
    IL2CPP_INTERCEPT(, MessageControllerB, app::MessageBox*, ShowPickupMessage, (app::MessageControllerB* this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
        if (context->fields.PickupType == app::PickupMessageIcon_PickupType__Enum_QuestItem) {
            auto arr = MessageProvider::GetAllMessages(context->fields.Name);
            if (arr->max_length > 0)
            {
                auto name = convert_csstring(arr->vector[0]);
                if (name == "Gorlek Ore" || name == "Giant Spirit Light Container")
                    return nullptr;
            }
        }

        return MessageControllerB::ShowPickupMessage(this_ptr, message_provider, context, lockInput);
    }

    struct RandoMessage
    {
        app::Vector3 pos;
        std::wstring text;
        float duration;
        bool mute;
        bool below;
    };

    struct PermanentRandoMessage
    {
        int id = 0;
        app::Vector3 pos{ 0.0f, 0.0f, 0.0f};
        std::wstring text;
        bool should_show_box = true;
        bool should_play_sound = true;
        bool alive = true;
        float fadein = 0.5f;
        float fadeout = 0.5f;
        app::Color color = { 1.0f, 1.0f, 1.0f, 1.0f };
        float size = 1.0f;
        app::AlignmentMode__Enum alignment = app::AlignmentMode__Enum_Center;
        app::HorizontalAnchorMode__Enum horizontal_anchor = app::HorizontalAnchorMode__Enum_Center;
        app::VerticalAnchorMode__Enum vertical_anchor = app::VerticalAnchorMode__Enum_Middle;
        float line_spacing = 1.0f;
        uint32_t handle = -1;
    };

    std::unordered_map<int, PermanentRandoMessage> permanent_messages;
    std::vector<RandoMessage> messages;

    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WeaponmasterScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_BuilderScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_GardenerScreenVisible, ());
    IL2CPP_BINDING(, MenuScreenManager, bool, IsVisible, (app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen));
    bool should_handle_messages()
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

    uint32_t set_box(const RandoMessage& message)
    {
        auto msg = reinterpret_cast<app::String*>(il2cpp::string_new(message.text));
        const auto message_controller = get_ui()->static_fields->MessageController;
        app::MessageBox* box = MessageControllerB::ShowHintSmallMessage(
            message_controller,
            app::MessageDescriptor{ msg, app::EmotionType__Enum_Neutral, nullptr, nullptr },
            message.pos,
            message.duration
        );
        box->fields.MessageIndex = 1;
        return il2cpp::gchandle_new_weak(box, true);
    }

    void show_msg(const RandoMessage& message)
    {
        if (message.mute)
            mute_for(15);

        if (message.below)
        {
            // Kill the current box.
            if (below_hint_box && is_visible(below_hint_box))
            {
                MessageBox::HideMessageScreenImmediately(below_hint_box, 0);
                below_hint_box = 0;
                if (below_box_handle)
                {
                    il2cpp::gchandle_free(below_box_handle);
                    below_box_handle = 0;
                }
            }

            below_box_handle = set_box(message);
            below_hint_box = reinterpret_cast<app::MessageBox*>(il2cpp::gchandle_target(last_handle));
        }
        else
        {
            last_handle = set_box(message);
            app::MessageBox* box = reinterpret_cast<app::MessageBox*>(il2cpp::gchandle_target(last_handle));
            last_message = box->fields.m_currentMessage.Message;
            tracked_boxes.insert(box);
        }
    }

    bool clear_on_next_update = false;
    INJECT_C_DLLEXPORT void clear_quest_messages()
    {
        clear_on_next_update = true;
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Implicit, (void* this_ptr));
    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Equality, (void* this_ptr, void* obj));
    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (void* object), (UnityEngine:Object));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr));
    //IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr, app::String* replace, app::String* with));
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

    std::unordered_set<std::string> created_styles;
    app::TextStyle* create_style(std::string const& text)
    {
        if (text.size() != 8)
        {
            warn("messages", "malformed color style declaration");
            return nullptr;
        }

        // We already added the style, style collection is global.
        auto it = created_styles.find(text);
        if (it != created_styles.end())
            return nullptr;

        auto style = il2cpp::create_object<app::TextStyle>("CatlikeCoding.TextBox", "TextStyle");
        il2cpp::invoke(style, ".ctor");
        style->fields.name = reinterpret_cast<app::String*>(il2cpp::string_new("hex_" + text));
        style->fields.hasColor = true;

        char* out = nullptr;
        auto color_channels = std::strtoul(text.c_str(), &out, 16);
        style->fields.color.rgba = ((color_channels >> 24) & 0xff) |
            ((color_channels << 8) & 0xff0000) |
            ((color_channels >> 8) & 0xff00) |
            ((color_channels << 24) & 0xff000000);

        // Set everything to good values.
        style->fields.rendererId = -1;
        style->fields.font = nullptr;
        style->fields.renderer = nullptr;
        style->fields.absoluteFontScale = false;
        style->fields.hasFontScale = false;
        style->fields.hasLetterSpacing = false;
        style->fields.hasLineScale = false;
        style->fields.fontScale = 1.0f;
        style->fields.letterSpacing = 1.0f;
        style->fields.lineScale = 1.0f;

        return style;
    }

    void create_color_styles(app::MessageBox* box, std::wstring const& text)
    {
        int i = 0;
        std::vector<app::TextStyle*> new_styles;
        while (i < text.size())
        {
            if (eat(text, i, L"<hex_"))
            {
                auto value = trim(convert_wstring_to_string(std::wstring(eat_until(text, i, L">"))));
                if (!value.empty())
                {
                    auto style = create_style(value);
                    if (style != nullptr)
                    {
                        created_styles.emplace(value);
                        new_styles.push_back(style);
                    }
                }
                else
                    warn("messages", "missing > in color style definition");
            }
            else
                ++i;
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
            {
                auto name = il2cpp::convert_csstring(box->fields.TextBox->fields.styleCollection->fields.styles->vector[i]->fields.name);
                console::console_send("style: '" + name + "' - " + std::to_string(i));
            }
        }
    }

    app::GameObject* create_permanent_box(PermanentRandoMessage& message)
    {
        auto controller = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->MessageController;
        auto go = reinterpret_cast<app::GameObject*>(Object::Instantiate(controller->fields.HintSmallMessage));
        message.handle = il2cpp::gchandle_new(go, false);
        auto parent = Transform::get_parent(il2cpp::unity::get_transform(controller->fields.HintSmallMessage));
        Transform::set_parent(il2cpp::unity::get_transform(go), parent);

        auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(go, "", "MessageBox");
        message_box->fields.ShouldWriteOut = true;

        message_box->fields.Visibility->fields.TransitionInDuration = message.fadein;
        message_box->fields.Visibility->fields.TransitionOutDuration = message.fadeout;
        message_box->fields.Visibility->fields.WaitDuration = 1.0f;
        message_box->fields.Visibility->fields.m_delayTime = 1.0f;
        message_box->fields.Visibility->fields.m_timeSpeed = 1.00000000 / message.fadein;
        
        message_box->fields.Visibility->fields.DestroyOnHide = true;

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
        message_box->fields.MessageProvider = utils::create_message_provider(il2cpp::string_new(message.text));
        MessageBox::RefreshText(message_box);

        auto transform = il2cpp::unity::get_transform(go);
        if (!message.should_show_box)
        {
            auto background = il2cpp::unity::get_game_object(Transform::GetChild(transform, 2));
            GameObject::SetActive(background, false);
        }

        if (!message.should_play_sound)
        {
            auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(go, "", "SoundSource");
            sound_source->fields.PlayAtStart = false;
        }

        Transform::set_position(transform, &message.pos);
        GameObject::SetActive(go, true);

        return go;
    }

    IL2CPP_INTERCEPT(, QuestsController, void, Update, (app::QuestsController* this_ptr)) {
        if (clear_on_next_update)
        {
            il2cpp::invoke(this_ptr->fields.m_queuedQuestMessages, "Clear");
            clear_on_next_update = false;
        }

        if (should_handle_messages())
        {
            for (const auto& message : messages)
                show_msg(message);

            messages.clear();
        }

        std::unordered_set<int> dead_messages;
        for (auto& message : permanent_messages)
        {
            if (message.second.handle == -1)
                create_permanent_box(message.second);

            auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message.second.handle));
            if (!Object::op_Implicit(go))
            {
                // Something else killed this game object.
                il2cpp::gchandle_free(message.second.handle);
                dead_messages.emplace(message.second.id);
                continue;
            }

            auto message_box = reinterpret_cast<app::MessageBox*>(il2cpp::unity::get_component_in_children(go, "", "MessageBox"));
            message_box->fields.Visibility->fields.m_delayTime = 1.0f;
            if (!message.second.alive)
            {
                message_box->fields.Visibility->fields.m_delayTime = 0.0f;
                message_box->fields.Visibility->fields.m_timeSpeed = 1.00000000 / message.second.fadeout;
                il2cpp::gchandle_free(message.second.handle);
                dead_messages.emplace(message.second.id);
                continue;
            }
        }

        for (auto id : dead_messages)
            permanent_messages.erase(id);

        QuestsController::Update(this_ptr);
    }

    INJECT_C_DLLEXPORT void message_item_callback(const wchar_t* str) {
        cached = reinterpret_cast<app::String*>(il2cpp::string_new(str));
    }

    IL2CPP_INTERCEPT(, MessageBox, void, Update, (app::MessageBox* this_ptr)) {
        MessageBox::Update(this_ptr);
        if (this_ptr == below_hint_box || this_ptr == nullptr)
          return;

        if (tracked_boxes.find(this_ptr) == tracked_boxes.end() && is_visible(this_ptr))
            tracked_boxes.insert(this_ptr);
    }

    IL2CPP_INTERCEPT(, MessageBox, void, OnDestroy, (app::MessageBox* this_ptr)) {
        MessageBox::OnDestroy(this_ptr);
        if (tracked_boxes.find(this_ptr) != tracked_boxes.end())
            tracked_boxes.erase(this_ptr);

        if (this_ptr == below_hint_box)
            below_hint_box = nullptr;
    }
}

void hide_below_hint() {
    if (below_hint_box != nullptr)
        MessageBox::HideMessageScreenImmediately(below_hint_box, 0);
}

INJECT_C_DLLEXPORT void clear_visible_hints()
{
    if (!should_handle_messages())
        return;

    for (auto* box : tracked_boxes)
    {
        if (box != npc_box && is_visible(box))
            MessageBox::HideMessageScreenImmediately(box, 0);
    }

    tracked_boxes.clear();
    if (last_handle)
    {
        il2cpp::gchandle_free(last_handle);
        last_handle = 0;
    }
}

INJECT_C_DLLEXPORT bool hints_ready() {
    return OnScreenPositions::get_TopCenter().y > 0 &&
        should_handle_messages();
}

INJECT_C_DLLEXPORT void display_hint(const wchar_t* hint, float duration, float ypos, bool mute)
{
    auto pos = OnScreenPositions::get_TopCenter();
    pos.y = ypos;
    messages.push_back({ pos, hint, duration, mute, false });
}

INJECT_C_DLLEXPORT void display_below(const wchar_t* hint, float duration, bool mute)
{
    messages.push_back({ OnScreenPositions::get_BottomCenter(), hint, duration, mute, true });
}

INJECT_C_DLLEXPORT void update_map_hint(const wchar_t* info)
{
    messages.push_back({ OnScreenPositions::get_BottomCenter(), info, 20, true, true });
}

app::MessageBox* get_message_box(PermanentRandoMessage& message)
{
    if (message.handle == -1)
        return nullptr;

    auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message.handle));
    return reinterpret_cast<app::MessageBox*>(il2cpp::unity::get_component_in_children(go, "", "MessageBox"));
}

INJECT_C_DLLEXPORT bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound)
{
    if (permanent_messages.find(id) != permanent_messages.end())
        return false;

    PermanentRandoMessage message;
    message.id = id;
    message.should_show_box = false;
    message.alive = true;
    message.fadein = fadein;
    message.fadeout = fadeout;
    message.should_show_box = should_show_box;
    message.should_play_sound = should_play_sound;
    message.handle = -1;
    permanent_messages.emplace(id, std::move(message));

    return true;
}

STATIC_IL2CPP_BINDING(, MessageParserUtility, app::String*, ProcessString, (Il2CppString* message));
INJECT_C_DLLEXPORT bool text_box_text(int id, const wchar_t* text)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.text = text;
    auto message_box = get_message_box(message->second);
    if (message_box != nullptr) {
        create_color_styles(message_box, text);
        auto new_str = il2cpp::string_new(text);
        auto test = il2cpp::convert_csstring(MessageParserUtility::ProcessString(new_str));
        message_box->fields.MessageProvider = utils::create_message_provider(new_str);
        MessageBox::RefreshText(message_box);
    }

    return true;
}

INJECT_C_DLLEXPORT bool text_box_position(int id, float x, float y)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.pos.x = x;
    message->second.pos.y = y;
    message->second.pos.z = 0.0f;
    if (message->second.handle != -1) {
        auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(message->second.handle));
        auto transform = il2cpp::unity::get_transform(go);
        Transform::set_position(transform, &message->second.pos);
    }

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
    auto message_box = get_message_box(message->second);
    if (message_box != nullptr)
        message_box->fields.TextBox->fields.color = message->second.color;

    return true;
}

INJECT_C_DLLEXPORT bool text_box_size(int id, float size)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.size = size;
    auto message_box = get_message_box(message->second);
    if (message_box != nullptr)
    {
        message_box->fields.TextBox->fields.size = size;
        MessageBox::RefreshText(message_box);
    }

    return true;
}

INJECT_C_DLLEXPORT bool text_box_alignment(int id, app::AlignmentMode__Enum alignment)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.alignment = alignment;
    auto message_box = get_message_box(message->second);
    if (message_box != nullptr)
    {
        message_box->fields.TextBox->fields.alignment = alignment;
        MessageBox::RefreshText(message_box);
    }

    return true;
}

INJECT_C_DLLEXPORT bool text_box_anchor(int id, app::HorizontalAnchorMode__Enum horizontal, app::VerticalAnchorMode__Enum vertical)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.horizontal_anchor = horizontal;
    message->second.vertical_anchor = vertical;
    auto message_box = get_message_box(message->second);
    if (message_box != nullptr)
    {
        message_box->fields.TextBox->fields.horizontalAnchor = horizontal;
        message_box->fields.TextBox->fields.verticalAnchor = vertical;
        MessageBox::RefreshText(message_box);
    }

    return true;
}

INJECT_C_DLLEXPORT bool text_box_line_spacing(int id, float spacing)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.line_spacing = spacing;
    auto message_box = get_message_box(message->second);
    if (message_box != nullptr)
    {
        message_box->fields.TextBox->fields.LineSpacing = spacing;
        MessageBox::RefreshText(message_box);
    }

    return true;
}

INJECT_C_DLLEXPORT bool text_box_destroy(int id)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.alive = false;
    return true;
}

INJECT_C_DLLEXPORT app::String* get_current_hint()
{
    return last_message;
}
