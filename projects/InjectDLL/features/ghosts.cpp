#include <Il2CppModLoader/app/methods/GhostCharacterAbilitiesPlugin.h>
#include <Il2CppModLoader/app/methods/GhostCharacterPlugin.h>
#include <Il2CppModLoader/app/methods/GhostFrame.h>
#include <Il2CppModLoader/app/methods/GhostGenericEventsPlugin.h>
#include <Il2CppModLoader/app/methods/GhostManager.h>
#include <Il2CppModLoader/app/methods/GhostPlayer.h>
#include <Il2CppModLoader/app/methods/GhostRecorder.h>
#include <Il2CppModLoader/app/methods/GhostRecorderData.h>
#include <Il2CppModLoader/app/methods/GhostStateMachinePlugin.h>
#include <Il2CppModLoader/app/methods/OriGhostRigVisuals_GhostVisualSettings.h>
#include <Il2CppModLoader/app/methods/System/IO/BinaryReader.h>
#include <Il2CppModLoader/app/methods/System/IO/BinaryWriter.h>
#include <Il2CppModLoader/app/methods/System/IO/MemoryStream.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <constants.h>
#include <game/player.h>
#include <game/game.h>
#include <randomizer/text_style.h>
#include <Common/ext.h>

#include "ghosts.h"

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <macros.h>
#include <uber_states/uber_state_interface.h>
#include <utils/misc.h>

using namespace app::methods;
using namespace app::methods::System::IO;

namespace ghosts {
    constexpr int GHOST_RECORDER_DATA_VERSION = 8;

    bool intercept_ghost_player_on_enable = false;

    IL2CPP_INTERCEPT(GhostPlayer, void, OnEnable, (app::GhostPlayer * this_ptr)) {
        if (intercept_ghost_player_on_enable) {
            this_ptr->fields.m_oriRig = nullptr;
            this_ptr->fields.OriRig = game::player::sein()->fields.OriRig;
        }

        next::GhostPlayer::OnEnable(this_ptr);
    }

    bool RandoGhost::initialize() {
        modloader::ScopedSetter setter(intercept_ghost_player_on_enable, true);

        auto ghost_manager = il2cpp::get_class<app::GhostManager__Class>("", "GhostManager")->static_fields->instance;

        if (!il2cpp::unity::is_valid(ghost_manager)) {
            return false;
        }

        auto ghost_go = il2cpp::unity::instantiate_object(ghost_manager->fields.GhostPrefab);
        this->ghost_player = il2cpp::unity::get_component<app::GhostPlayer>(ghost_go, "", "GhostPlayer");

        auto ghost_recorder_data = il2cpp::create_object<app::GhostRecorderData>("", "GhostRecorderData");
        GhostRecorderData::ctor(ghost_recorder_data);
        this->ghost_player->fields.GhostRecorderData = ghost_recorder_data;

        // Register plugins
        auto const character_plugin = il2cpp::create_object<app::GhostCharacterPlugin>("", "GhostCharacterPlugin");
        auto const character_abilities_plugin = il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>("", "GhostCharacterAbilitiesPlugin");
        auto const state_machine_plugin = il2cpp::create_object<app::GhostStateMachinePlugin>("", "GhostStateMachinePlugin");
        auto const generic_events_plugin = il2cpp::create_object<app::GhostGenericEventsPlugin>("", "GhostGenericEventsPlugin");

        GhostCharacterPlugin::ctor(character_plugin);
        GhostCharacterAbilitiesPlugin::ctor(character_abilities_plugin);
        GhostStateMachinePlugin::ctor(state_machine_plugin);
        GhostGenericEventsPlugin::ctor(generic_events_plugin);

        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(character_plugin));
        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(character_abilities_plugin));
        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(state_machine_plugin));
        GhostPlayer::RegisterPlugin(this->ghost_player, reinterpret_cast<app::IGhostRecorderPlugin*>(generic_events_plugin));

        GhostPlayer::InitializePuppetPrefabs(this->ghost_player);

        this->ghost_player->fields.OnFinished = nullptr;

        // The name text box is rotated for some reason...
        il2cpp::unity::set_local_rotation(this->ghost_player->fields.Name, app::Vector3{ 0.f, -90.f, 0.f });
        il2cpp::unity::set_local_position(this->ghost_player->fields.Name, app::Vector3{ 0.f, 1.5f, 0.f });

        this->ghost_go_gchandle = il2cpp::gchandle_new(ghost_go, true);

        return true;
    }

    bool RandoGhost::is_initialized() {
        return il2cpp::unity::is_valid(this->ghost_player);
    }

    void RandoGhost::set_name(std::string name) {
        std::wstring name_text = convert_string_to_wstring(format("<s_2>%s</>", name.c_str()));
        text_style::create_styles(ghost_player->fields.Name, name_text);
        GhostPlayer::SetDisplayName(this->ghost_player, il2cpp::string_new(name_text));
    }

    void RandoGhost::play_frame_data(std::vector<std::byte> frame_data) {
        // il2cpp::unity::set_active_recursively(this->ghost_player, true);

        this->ghost_player->fields.GhostRecorderData->fields.CurrentVersion = 8;
        this->ghost_player->fields.GhostRecorderData->fields.Duration = FLT_MAX;

        auto ghost_frame = ghosts::deserialize_frame(frame_data);
        ghost_frame->fields.Time = 0.f;

        if (this->ghost_player->fields.GhostRecorderData->fields.Frames->fields._size == 0) {
            il2cpp::invoke(this->ghost_player->fields.GhostRecorderData->fields.Frames, "Add", ghost_frame);
        } else {
            this->ghost_player->fields.GhostRecorderData->fields.Frames->fields._items->vector[0] = ghost_frame;
        }

        for (int i = 0; i < this->ghost_player->fields.m_plugins->fields._size; ++i) {
            auto item = this->ghost_player->fields.m_plugins->fields._items->vector[i];
            item->fields.NextFrame = ghost_frame;
            item->fields.NextFrameIndex = 0;
            item->fields.NoMoreFrames = false;
        }

        this->ghost_player->fields.CurrentTime = 0.f;
        this->ghost_player->fields.m_isStarted = true;
        this->ghost_player->fields._IsFinished_k__BackingField = false;
    }

    void RandoGhost::set_color(app::Color color) {
        auto visual_settings = il2cpp::create_object<app::OriGhostRigVisuals_GhostVisualSettings>("", "OriGhostRigVisuals", "GhostVisualSettings");
        OriGhostRigVisuals_GhostVisualSettings::ctor(visual_settings);

        visual_settings->fields.MultiplyLayerColor = utils::uber_shader_color(color);
        visual_settings->fields.EmissivityColor = utils::uber_shader_color(color);
        visual_settings->fields.FirstVignetteColor = utils::uber_shader_color(color);
        visual_settings->fields.SecondVignetteColor = utils::uber_shader_color(color);
        visual_settings->fields.GhostIndicatorColor = utils::uber_shader_color(color);
        visual_settings->fields.ParticleColor = utils::uber_shader_color(color);
        visual_settings->fields.TrailColor = utils::uber_shader_color(color);

        this->ghost_player->fields.VisualSettings = visual_settings;
        GhostPlayer::InitializeVisualize(this->ghost_player, visual_settings);

        utils::set_color(this->ghost_player->fields.m_oriRig, color, app::UberShaderProperty_Color__Enum::MainColor);
    }

    void RandoGhost::destroy() {
        il2cpp::gchandle_free(this->ghost_go_gchandle);
        il2cpp::unity::destroy_object(il2cpp::unity::get_game_object(this->ghost_player));

        this->ghost_player = nullptr;
        this->ghost_go_gchandle = 0;
    }

    app::Vector2 RandoGhost::get_position() {
        auto position_3d = GhostPlayer::get_Position(this->ghost_player);
        return app::Vector2{ position_3d.x, position_3d.y };
    }

    IL2CPP_INTERCEPT(GhostRecorder, void, StopRecorder, (app::GhostRecorder* this_ptr)) {
        // Noop
    }

    app::GhostRecorder* create_recorder() {
        auto const ghost_recorder = GhostManager::GetOrCreateRecorder();

        auto const character_plugin = il2cpp::create_object<app::GhostCharacterPlugin>("", "GhostCharacterPlugin");
        auto const character_abilities_plugin = il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>("", "GhostCharacterAbilitiesPlugin");
        auto const state_machine_plugin = il2cpp::create_object<app::GhostStateMachinePlugin>("", "GhostStateMachinePlugin");
        auto const generic_events_plugin = il2cpp::create_object<app::GhostGenericEventsPlugin>("", "GhostGenericEventsPlugin");

        GhostCharacterPlugin::ctor(character_plugin);
        GhostCharacterAbilitiesPlugin::ctor(character_abilities_plugin);
        GhostStateMachinePlugin::ctor(state_machine_plugin);
        GhostGenericEventsPlugin::ctor(generic_events_plugin);

        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(character_plugin));
        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(character_abilities_plugin));
        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(state_machine_plugin));
        GhostRecorder::RegisterPlugin(ghost_recorder, reinterpret_cast<app::IGhostRecorderPlugin*>(generic_events_plugin));

        GhostRecorder::InitializeRecorder(ghost_recorder, il2cpp::string_new("C:\\ghost"));
        GhostRecorder::StartRecorder(ghost_recorder);

        MemoryStream::SetLength(ghost_recorder->klass->static_fields->m_stream, 0);

        return ghost_recorder;
    }

    std::vector<std::byte> get_last_frame_data_and_flush(app::GhostRecorder* ghost_recorder) {
        GhostRecorder::FinalizeFrame(ghost_recorder);
        auto recorder_data = ghost_recorder->fields.GhostRecorderData;

        if (recorder_data == nullptr) {
            recorder_data = il2cpp::create_object<app::GhostRecorderData>("", "GhostRecorderData");
            GhostRecorderData::ctor(recorder_data);
            ghost_recorder->fields.GhostRecorderData = recorder_data;
        }

        auto stream_buffer = MemoryStream::GetBuffer(ghost_recorder->klass->static_fields->m_stream);
        auto target_buffer = std::vector<std::byte>();

        auto length = MemoryStream::get_Length(ghost_recorder->klass->static_fields->m_stream);

        for (int i = 0; i < length; ++i) {
            target_buffer.push_back(static_cast<const std::byte>(stream_buffer->vector[i]));
        }

        MemoryStream::SetLength(ghost_recorder->klass->static_fields->m_stream, 0);

        return target_buffer;
    }

    std::vector<std::byte> serialize_frame(app::GhostFrame* frame) {
        auto memory_stream = il2cpp::create_object<app::MemoryStream>("System.IO", "MemoryStream");
        MemoryStream::ctor_1(memory_stream);

        auto binary_writer = il2cpp::create_object<app::BinaryWriter>("System.IO", "BinaryWriter");
        BinaryWriter::ctor_2(binary_writer, reinterpret_cast<app::Stream*>(memory_stream));

        GhostFrame::SaveToFile(frame, binary_writer);
        MemoryStream::Flush(memory_stream);

        auto stream_buffer = MemoryStream::GetBuffer(memory_stream);
        auto target_buffer = std::vector<std::byte>();
        auto length = MemoryStream::get_Length(memory_stream);

        for (int i = 0; i < length; ++i) {
            target_buffer.push_back(static_cast<const std::byte>(stream_buffer->vector[i]));
        }

        return target_buffer;
    }

    app::GhostFrame* deserialize_frame(std::vector<std::byte> buffer) {
        auto memory_stream = il2cpp::create_object<app::MemoryStream>("System.IO", "MemoryStream");
        auto byte_array = il2cpp::array_new<app::Byte__Array>(il2cpp::get_class("System", "Byte"), buffer);

        MemoryStream::ctor_3(memory_stream, byte_array);

        auto binary_reader = il2cpp::create_object<app::BinaryReader>("System.IO", "BinaryReader");
        BinaryReader::ctor_1(binary_reader, reinterpret_cast<app::Stream*>(memory_stream));

        auto frame = il2cpp::create_object<app::GhostFrame>("", "GhostFrame");
        GhostFrame::ctor(frame);

        GhostFrame::LoadFromFile(frame, binary_reader, GHOST_RECORDER_DATA_VERSION);

        return frame;
    }
} // namespace ghosts

app::GhostRecorder* recorder = nullptr;
std::vector<std::byte> frame_data;

INJECT_C_DLLEXPORT char* get_current_ghost_frame_data(int& size) {
    if (recorder == nullptr) {
        size = 0;
        return 0;
    }

    frame_data = ghosts::get_last_frame_data_and_flush(recorder);
    size = frame_data.size();

    modloader::win::console::console_send(format("B %d bytes", size));

    return reinterpret_cast<char*>(frame_data.data());
}

namespace {
    void restart_recorder(GameEvent game_event, EventTiming timing) {
        recorder = ghosts::create_recorder();
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, &restart_recorder);
        game::event_bus().register_handler(GameEvent::NewGame, EventTiming::End, &restart_recorder);
    }

    CALL_ON_INIT(initialize);
}