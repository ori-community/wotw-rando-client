#include <Il2CppModLoader/app/methods/BoolStateMap.h>
#include <Il2CppModLoader/app/methods/NewSetupStateController.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/app/methods/Game/UI_Hints.h>
#include <Il2CppModLoader/app/methods/MessageBox.h>
#include <Il2CppModLoader/app/types/UI_Hints.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <enums/game_event.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>

using namespace app::classes;

INJECT_C_DLLEXPORT bool messages_is_showing_hint() {
    return Game::UI_Hints::get_IsShowingHint();
}

INJECT_C_DLLEXPORT int messages_active_hint_lines() {
    auto ui_hints = types::UI_Hints::get_class();
    auto current_hint_message_box = ui_hints->static_fields->m_currentHint;

    if (!il2cpp::unity::is_valid(current_hint_message_box)) {
        return 0;
    }

    auto text = il2cpp::convert_csstring_fast(MessageBox::get_CurrentMessage(current_hint_message_box));
    auto lines = std::count(text.begin(), text.end(), '\n');

    return static_cast<int>(lines) + 1;
}