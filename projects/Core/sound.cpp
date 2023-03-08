#include <sound.h>

#include <Common/ext.h>

#include <Modloader/app/methods/AK/Wwise/State.h>
#include <Modloader/app/methods/AkSoundEngine.h>
#include <Modloader/app/methods/Moon/Wwise/ArtificialSoundHostReference.h>
#include <Modloader/app/methods/Moon/Wwise/WwiseEventSystem.h>
#include <Modloader/app/methods/Moon/Wwise/WwiseEventSystem_SoundHandle.h>
#include <Modloader/app/methods/Moon/Wwise/WwiseGameObjectSystem.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/Event_1.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/Wwise.h>
#include <Modloader/app/types/WwiseEventSystem_SoundHandle.h>
#include <Modloader/app/types/SoundHost.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <magic_enum.hpp>

#include <fstream>
#include <string>
#include <unordered_map>

using namespace app::classes;
using namespace app::classes::UnityEngine;
using namespace app::classes::Moon::Wwise;

namespace core::sound {
    std::unordered_map<std::string, SoundEventID> string_to_event = {
        { "Catching", SoundEventID::Catching }
    };

    app::Event_1* create_event(SoundEventID id) {
        auto evt = types::Event_1::create();
        il2cpp::invoke(evt, ".ctor");
        evt->fields._.forceId = true;
        evt->fields._.forcedId = static_cast<uint32_t>(id);
        return evt;
    }

    std::unordered_map<std::string, std::vector<unsigned char>> banks;
    void load_bank(std::string_view name, std::filesystem::path path) {
        std::ifstream input(path, std::ios::binary);
        banks[std::string(name)] = std::vector<unsigned char>(std::istreambuf_iterator<char>(input), {});
        auto& data = banks[std::string(name)];
        uint32_t bank_id = 0;
        void* data_ptr = data.data();
        AkSoundEngine::LoadAndDecodeBankFromMemory(data_ptr, data.size(), true, il2cpp::string_new("WotwRando"), false, &bank_id);
    }

    app::WwiseEventSystem_SoundHandle play_sound(SoundEventID event_id, app::ISoundHost* host) {
        auto wwise = types::Wwise::get_class();
        auto wes = wwise->static_fields->m_eventsSystem;
        if (host == nullptr)
            host = reinterpret_cast<app::ISoundHost*>(wwise->static_fields->_DefaultDevSoundHost_k__BackingField);

        auto evt = create_event(event_id);
        auto handle = WwiseEventSystem::AllocateHandle(wes, evt, host);
        auto boxed = types::WwiseEventSystem_SoundHandle::box(handle);
        WwiseEventSystem_SoundHandle::Play(boxed);
        return handle;
    }

    std::string artificial_host_name_template("randomizer_artificial_host_");
    int artificial_host_id = 1;
    void play_sound_at(SoundEventID event_id, app::Vector3 location) {
        auto wwise = types::Wwise::get_class();
        auto go_system = wwise->static_fields->m_gameObjectSystem;

        auto evt = create_event(event_id);
        auto name = il2cpp::string_new(artificial_host_name_template + std::to_string(artificial_host_id++));
        WwiseGameObjectSystem::FireAndForget(go_system, name, evt, location);
    }

    void set_state(SoundStateGroupID group_id, SoundStateID state_id) {
        AK::Wwise::State::SetValueFast(static_cast<uint32_t>(state_id), static_cast<uint32_t>(group_id));
    }

    void initialize() {
        modloader::info("sound", fmt::format("WWise version '{}.{}'", AkSoundEngine::GetMajorMinorVersion(), AkSoundEngine::GetSubminorBuildVersion()));
        modloader::info("sound", fmt::format("WWise soundbank version '{}'", AkSoundEngine::get_AK_SOUNDBANK_VERSION()));

        load_bank("WotwRando", modloader::base_path / "assets/sounds/WotwRando.bnk");
    }

    CALL_ON_INIT(initialize);

    SoundActor::SoundActor(app::GameObject* parent) {
        m_root = types::GameObject::create();
        il2cpp::invoke(m_root, ".ctor");
        m_host = il2cpp::unity::add_component<app::SoundHost>(m_root, types::SoundHost::get_class());
        m_host->fields.m_gameObject = m_root;
        m_host->fields.m_transform = il2cpp::unity::get_transform(m_root);
        m_host->fields.m_isListener = false;
        m_host->fields.SyncPosition = true;
        il2cpp::unity::set_active(m_root, true);
    }

    SoundActor::~SoundActor() {
        il2cpp::unity::destroy_object(m_root);
    }

    app::WwiseEventSystem_EventStatus__Enum SoundActor::status() {
        auto boxed = types::WwiseEventSystem_SoundHandle::box(m_sound);
        return WwiseEventSystem_SoundHandle::get_Status(boxed);
    }

    void SoundActor::play(SoundEventID event_id) {
        auto wwise = types::Wwise::get_class();
        auto wes = wwise->static_fields->m_eventsSystem;
        auto evt = sound::create_event(event_id);
        m_sound = WwiseEventSystem::AllocateHandle(wes, evt, reinterpret_cast<app::ISoundHost*>(m_host));
        auto boxed = types::WwiseEventSystem_SoundHandle::box(m_sound);
        WwiseEventSystem_SoundHandle::Play(boxed);
    }

    void SoundActor::pause() {
        auto boxed = types::WwiseEventSystem_SoundHandle::box(m_sound);
        WwiseEventSystem_SoundHandle::Pause(boxed, 0, app::AkCurveInterpolation__Enum::AkCurveInterpolation_Linear);
    }

    void SoundActor::resume() {
        auto boxed = types::WwiseEventSystem_SoundHandle::box(m_sound);
        WwiseEventSystem_SoundHandle::Resume(boxed, 0, app::AkCurveInterpolation__Enum::AkCurveInterpolation_Linear);
    }

    void SoundActor::stop() {
        auto boxed = types::WwiseEventSystem_SoundHandle::box(m_sound);
        WwiseEventSystem_SoundHandle::Stop(boxed, 0, app::AkCurveInterpolation__Enum::AkCurveInterpolation_Linear);
    }
} // namespace core::sound

CORE_C_DLLEXPORT void play_sound(SoundEventID event_id, app::Vector3 position) {
    core::sound::play_sound_at(event_id, position);
}

CORE_C_DLLEXPORT void play_sound_str(const char* event_name, app::Vector3 position) {
    auto event_id = core::sound::string_to_event.find(event_name);
    if (event_id != core::sound::string_to_event.end())
        core::sound::play_sound_at(event_id->second, position);
}
