#include <randomizer/sound.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <magic_enum/include/magic_enum.hpp>

#include <fstream>
#include <string>
#include <unordered_map>

namespace randomizer
{
    namespace sound
    {
        std::unordered_map<std::string, SoundEventID> string_to_event = {
            { "Catching", SoundEventID::Catching }
        };

        //public static uint GetMajorMinorVersion() { }
        //public static uint GetSubminorBuildVersion() { }
        STATIC_IL2CPP_BINDING(, AkSoundEngine, uint32_t, GetMajorMinorVersion, ());
        STATIC_IL2CPP_BINDING(, AkSoundEngine, uint32_t, GetSubminorBuildVersion, ());
        STATIC_IL2CPP_BINDING(, AkSoundEngine, uint32_t, get_AK_SOUNDBANK_VERSION, ());
        STATIC_IL2CPP_BINDING(, AkSoundEngine, int32_t, get_g_SpatialAudioPoolId, ());
        STATIC_IL2CPP_BINDING(, AkSoundEngine, int32_t, GetPoolID, ());
        STATIC_IL2CPP_BINDING(, AkSoundEngine, app::AKRESULT__Enum, AddBasePath, (app::String* base_path));
        STATIC_IL2CPP_BINDING(, AkSoundEngine, app::AKRESULT__Enum, LoadAndDecodeBankFromMemory,
            (app::IntPtr bank_data, uint32_t size, bool save_bank, app::String* bank_name, bool is_language_specific, uint32_t* out_bank_id));
        //STATIC_IL2CPP_BINDING(, AkSoundEngine, app::AKRESULT__Enum, LoadBank, (app::IntPtr bank_data, uint32_t size, uint32_t* out_bank_id));
        STATIC_IL2CPP_BINDING_OVERLOAD(, AkSoundEngine, app::AKRESULT__Enum, PrepareBank,
            (app::AkPreparationType__Enum type, uint32_t bank_id, app::AkBankContent__Enum content),
            (AkPreparationType, System:UInt32, AkBankContent));
        STATIC_IL2CPP_BINDING_OVERLOAD(, AkSoundEngine, uint32_t, PostEvent, (uint32_t event_id, uint64_t game_object_id), (System:UInt32, System:UInt64));
        
        IL2CPP_BINDING_OVERLOAD(Moon.Wwise, WwiseEventSystem, void, FireAndForget,
            (app::WwiseEventSystem* system, uint32_t event_id, app::ISoundHost* host),
            (System:UInt32, Moon.Wwise:ISoundHost));
        NAMED_IL2CPP_BINDING_OVERLOAD(Moon.Wwise, WwiseEventSystem, void, FireAndForget, FireAndForgetEvt,
            (app::WwiseEventSystem* system, app::Event_1* evt, app::ISoundHost* host),
            (AK.Wwise:Event, Moon.Wwise:ISoundHost));

        IL2CPP_BINDING(Moon.Wwise, WwiseGameObjectSystem, app::ArtificialSoundHostReference*, Allocate,
            (app::WwiseGameObjectSystem* this_ptr, app::String* name));
        IL2CPP_BINDING(Moon.Wwise, WwiseGameObjectSystem, void, FireAndForget,
            (app::WwiseGameObjectSystem* this_ptr, app::String* name, app::Event_1* evt, app::Vector3* position));

        IL2CPP_BINDING(Moon.Wwise, ArtificialSoundHostReference, void, Release, (app::ArtificialSoundHostReference* this_ptr));
        IL2CPP_BINDING(Moon.Wwise, ArtificialSoundHostReference, app::ArtificialSoundHostReference*, Place,
            (app::ArtificialSoundHostReference* this_ptr, app::Vector3* position));
        IL2CPP_BINDING(Moon.Wwise, ArtificialSoundHostReference, app::ArtificialSoundHostReference*, AttachTo,
            (app::ArtificialSoundHostReference* this_ptr, app::Transform* transform));
        IL2CPP_BINDING(Moon.Wwise, ArtificialSoundHostReference, app::WwiseEventSystem_SoundHandle*, PlayAndReleaseWith,
            (app::ArtificialSoundHostReference* this_ptr, app::Event_1* evt));

        app::Event_1* create_event(SoundEventID id)
        {
            auto evt = il2cpp::create_object<app::Event_1>("AK.Wwise", "Event");
            il2cpp::invoke(evt, ".ctor");
            evt->fields._.forceId = true;
            evt->fields._.forcedId = static_cast<uint32_t>(id);
            return evt;
        }

        std::unordered_map<std::string, std::vector<unsigned char>> banks;
        void load_bank(std::string_view name, std::string_view path)
        {
            std::ifstream input(std::string(path), std::ios::binary);
            banks[std::string(name)] = std::vector<unsigned char>(std::istreambuf_iterator<char>(input), {});
            auto& data = banks[std::string(name)];
            uint32_t bank_id = 0;
            app::IntPtr data_ptr;
            data_ptr.m_value = reinterpret_cast<app::Void*>(data.data());
            auto out = AkSoundEngine::LoadAndDecodeBankFromMemory(data_ptr, data.size(), true, il2cpp::string_new("WotwRando"), false, &bank_id);
        }

        void play_sound(SoundEventID event_id, app::ISoundHost* host)
        {
            auto wwise = il2cpp::get_class<app::Wwise__Class>("Moon.Wwise", "Wwise");
            auto wes = wwise->static_fields->m_eventsSystem;
            if (host == nullptr)
                host = reinterpret_cast<app::ISoundHost*>(wwise->static_fields->_DefaultDevSoundHost_k__BackingField);

            WwiseEventSystem::FireAndForget(wes, static_cast<uint32_t>(event_id), host);
        }


        std::string artificial_host_name_template("randomizer_artificial_host_");
        int artificial_host_id = 1;
        void play_sound_at(SoundEventID event_id, app::Vector3 location)
        {
            auto wwise = il2cpp::get_class<app::Wwise__Class>("Moon.Wwise", "Wwise");
            auto go_system = wwise->static_fields->m_gameObjectSystem;

            auto evt = create_event(event_id);
            auto name = il2cpp::string_new(artificial_host_name_template + std::to_string(artificial_host_id++));
            WwiseGameObjectSystem::FireAndForget(go_system, name, evt, &location);
        }

        void initialize()
        {
            modloader::info("sound", format("WWise version '%d.%d'", AkSoundEngine::GetMajorMinorVersion(), AkSoundEngine::GetSubminorBuildVersion()));
            modloader::info("sound", format("WWise soundbank version '%d'", AkSoundEngine::get_AK_SOUNDBANK_VERSION()));

            load_bank("WotwRando", modloader::base_path + "assets/sounds/WotwRando.bnk");
        }

        CALL_ON_INIT(initialize);
    }
}

INJECT_C_DLLEXPORT void play_sound(randomizer::sound::SoundEventID event_id, app::Vector3 position)
{
    randomizer::sound::play_sound_at(event_id, position);
}

INJECT_C_DLLEXPORT void play_sound_str(const char* event_name, app::Vector3 position)
{
    auto event_id = randomizer::sound::string_to_event.find(event_name);
    if (event_id != randomizer::sound::string_to_event.end())
        randomizer::sound::play_sound_at(event_id->second, position);
}
