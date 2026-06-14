#ifdef ENABLE_MIDI_IN
    #include <Core/api/game/game.h>
    #include <Core/events/task.h>
    #include <Core/input/midi_input.h>
    #include <Modloader/app/methods/Core/Input.h>
    #include <Modloader/modloader.h>
    #include <Modloader/windows_api/console.h>
    #include <libremidi/libremidi.hpp>
    #include <nlohmann/json.hpp>
    #include <Core/utils/json_serializers.h>
    #include <optional>

/**
 * Translate MIDI inputs to game inputs
 */
namespace core::input::midi_input {
    using namespace app::classes;

    struct Note {
        uint8_t note;
    };

    std::optional<libremidi::midi_in> midi;
    std::array<bool, 256> pressed_states;
    libremidi::observer_configuration observer_config;
    std::optional<libremidi::observer> observer;
    std::optional<libremidi::input_port> current_port;

    void on_midi_message(const libremidi::message& message) {
        if (!message.is_note_on_or_off()) {
            return;
        }

        const auto note = message.bytes[1];
        const auto is_pressed = message.get_message_type() == libremidi::message_type::NOTE_ON;
        pressed_states[note] = is_pressed;
    }

    void on_input_added(const libremidi::input_port& port) {
        if (midi.has_value()) {
            if (midi->is_port_open()) {
                return;
            }

            current_port = std::nullopt;
            midi->close_port();
            midi = std::nullopt;
        }

        // We don't want the default Windows software synth...
        if (port.display_name == "Microsoft GS Wavetable Synth 1") {
            return;
        }

        midi = std::make_optional<libremidi::midi_in>(
            libremidi::input_configuration{
                .on_message = on_midi_message
            }
        );
        midi->open_port(port);
        current_port = port;
        modloader::info("midi_in", std::format("MIDI interface initialized: {}", port.display_name));
    }

    void on_input_removed(const libremidi::input_port& port) {
        if (port == current_port) {
            if (midi.has_value()) {
                midi->close_port();
                midi = std::nullopt;
            }
            current_port = std::nullopt;
        }
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        pressed_states.fill(false);

        observer_config.input_added = &on_input_added;
        observer_config.input_removed = &on_input_removed;
        observer = std::make_optional<libremidi::observer>(observer_config);
    });

    bool is_note_pressed(const uint8_t note) {
        return pressed_states[note];
    }
} // namespace core::input::midi
#endif
