#ifdef ENABLE_MIDI_IN
#include <Core/api/game/game.h>
#include <Modloader/app/methods/Core/Input.h>
#include <Modloader/modloader.h>
#include <Core/input/midi_input.h>
#include <libremidi/libremidi.hpp>
#include <optional>

/**
 * Translate MIDI inputs to game inputs
 */
namespace core::input::midi_input {
    using namespace app::classes;

    std::optional<libremidi::midi_in> midi;

    struct Note {
        uint8_t note;
    };

    std::array<bool, 256> pressed_states;

    void on_midi_message(const libremidi::message& message) {
        if (!message.is_note_on_or_off()) {
            return;
        }

        const auto note = message.bytes[1];
        pressed_states[note] = message.get_message_type() == libremidi::message_type::NOTE_ON;
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        pressed_states.fill(false);

        libremidi::observer obs;
        for (const libremidi::input_port& port: obs.get_input_ports()) {
            // We don't want the default Windows software synth...
            if (port.display_name == "Microsoft GS Wavetable Synth 1") {
                continue;
            }

            midi = std::make_optional<libremidi::midi_in>(
                libremidi::input_configuration{
                    .on_message = on_midi_message
                }
            );
            midi->open_port(port);
            modloader::info("midi_in", std::format("MIDI interface initialized: {}", port.display_name));
            return;
        }

        modloader::warn("midi_in", "Could not open MIDI interface");
    });

    auto on_after_unity_update_loop = api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
        if (midi.has_value()) {
        }
    });

    bool is_note_pressed(const uint8_t note) {
        return pressed_states[note];
    }
} // namespace core::input::midi
#endif
