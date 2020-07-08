#include <system/sound.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>

namespace
{
    IL2CPP_BINDING(Moon.Wwise, WwiseEventSystem, void, FireAndForget, (app::WwiseEventSystem* this_ptr, app::Event_1* wise_event, app::ISoundHost* host));
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
        WwiseEventSystem_FireAndForget(wes, controller->fields.CompleteSoundEvent, host);
        break;
    }
}
