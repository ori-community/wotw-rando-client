#include <csharp_bridge.h>
#include <dll_main.h>
#include <features/messages.h>
#include <utils/messaging.h>

#include <Common/ext.h>
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
        int id;
        app::Vector3 pos;
        std::wstring text;
        bool should_show_box = true;
        bool alive = true;
        float fadein = 0.5f;
        float fadeout = 0.5f;
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
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr, app::String* replace, app::String* with));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_parent, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, GetChild, (app::Transform* this_ptr, int index));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* value));
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

        auto empty = il2cpp::get_class<app::String__Class>("System", "String")->static_fields->Empty;
        message_box->fields.MessageProvider = utils::create_message_provider(il2cpp::string_new(message.text));
        MessageBox::RefreshText(message_box, empty, empty);

        auto transform = il2cpp::unity::get_transform(go);
        if (!message.should_show_box)
        {
            auto background = il2cpp::unity::get_game_object(Transform::GetChild(transform, 2));
            GameObject::SetActive(background, false);
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

            auto transform = il2cpp::unity::get_transform(go);
            Transform::set_position(transform, &message.second.pos);
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

INJECT_C_DLLEXPORT bool create_text_box(int id, const wchar_t* text, float x, float y, float fadein, float fadeout, bool should_show_box)
{
    if (permanent_messages.find(id) != permanent_messages.end())
        return false;

    PermanentRandoMessage message;
    message.id = id;
    message.text = text;
    message.should_show_box = false;
    message.pos = { x, y, 0.0f };
    message.alive = true;
    message.fadein = fadein;
    message.fadeout = fadeout;
    message.should_show_box = should_show_box;
    message.handle = -1;
    permanent_messages.emplace(id, std::move(message));

    return true;
}

INJECT_C_DLLEXPORT bool move_text_box(int id, float x, float y)
{
    auto& message = permanent_messages.find(id);
    if (message == permanent_messages.end())
        return false;

    message->second.pos.x = x;
    message->second.pos.y = y;
    return true;
}

INJECT_C_DLLEXPORT bool destroy_text_box(int id)
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
