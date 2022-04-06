#include <constants.h>
#include <dev/object_visualizer.h>
#include <game/system/sound.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <algorithm>
#include <chrono>
#include <fstream>
#include <queue>
#include <regex>
#include <unordered_set>
#include <unordered_map>

using namespace modloader;

namespace
{
    IL2CPP_BINDING_OVERLOAD(Moon.Wwise, WwiseEventSystem, void, FireAndForget,
        (app::WwiseEventSystem* this_ptr, app::Event_1* wwise_event, app::ISoundHost* host), (AK.Wwise:Event, Moon.Wwise:ISoundHost));
}

INJECT_C_DLLEXPORT void play_sound(SoundEvent evt)
{
    auto wwise = il2cpp::get_class<app::Wwise__Class>("Moon.Wwise", "Wwise");
    auto wes = wwise->static_fields->m_eventsSystem;
    auto host = reinterpret_cast<app::ISoundHost*>(wwise->static_fields->_DefaultDevSoundHost_k__BackingField);
    switch (evt)
    {
    case SoundEvent::QuestComplete:
        auto controller = il2cpp::get_class<app::QuestsController__Class>("", "QuestsController")->static_fields->Instance;
        WwiseEventSystem::FireAndForget(wes, controller->fields.CompleteSoundEvent, host);
        break;
    }
}
