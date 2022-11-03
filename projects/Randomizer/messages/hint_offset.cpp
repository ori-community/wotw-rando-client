#include <Modloader/app/methods/BoolStateMap.h>
#include <Modloader/app/methods/NewSetupStateController.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/types/UI_Hints.h>
#include <Modloader/il2cpp_helpers.h>

#include <Modloader/common.h>
#include <Modloader/windows_api/console.h>
#include <Core/enums/game_event.h>
#include <Core/utils/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/game/game.h>

using namespace app::classes;

RANDOMIZER_C_DLLEXPORT bool messages_is_showing_hint() {
    return Game::UI_Hints::get_IsShowingHint();
}

RANDOMIZER_C_DLLEXPORT int messages_active_hint_lines() {
    auto ui_hints = types::UI_Hints::get_class();
    auto current_hint_message_box = ui_hints->static_fields->m_currentHint;

    if (!il2cpp::unity::is_valid(current_hint_message_box)) {
        return 0;
    }

    auto text = il2cpp::convert_csstring_fast(MessageBox::get_CurrentMessage(current_hint_message_box));
    auto lines = std::count(text.begin(), text.end(), '\n');

    return static_cast<int>(lines) + 1;
}