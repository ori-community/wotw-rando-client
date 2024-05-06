#ifdef ENABLE_MIDI_OUT
#include <Core/api/game/game.h>
#include <Modloader/app/methods/PlayerInput.h>
#include <Modloader/app/methods/Core/Input.h>
#include <Modloader/modloader.h>
#include <libremidi/libremidi.hpp>
#include <optional>

/**
 * This module can map input buttons to a MIDI sink.
 * Used for auralizing tricks with strict timings.
 */
namespace core::input::midi {
    using namespace app::classes;

    std::optional<libremidi::midi_out> midi;

    struct Note {
        uint8_t note;
    };

    std::unordered_map<app::Input_Button__Enum, Note> midi_mapping {
        // Bind buttons here
        // {app::Input_Button__Enum::Left, Note(73)},
        // {app::Input_Button__Enum::Right, Note(76)},
    };

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        libremidi::observer obs;
        for (const libremidi::output_port& port: obs.get_output_ports()) {
            // We don't want the default Windows software synth...
            if (port.display_name == "Microsoft GS Wavetable Synth 1") {
                continue;
            }

            midi = std::make_optional<libremidi::midi_out>();
            midi->open_port(port);
            modloader::info("midi", std::format("MIDI interface initialized: {}", port.display_name));
            return;
        }

        modloader::warn("midi", "Could not open MIDI interface");
    });

    auto on_after_unity_update_loop = api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
        if (midi.has_value()) {
            for (auto& [command, note] : midi_mapping) {
                const auto processor = Core::Input::GetButton(command);

                if (processor->fields.IsPressed != processor->fields.WasPressed) {
                    midi->send_message(
                        processor->fields.IsPressed
                            ? libremidi::channel_events::note_on(0, note.note, 100)
                            : libremidi::channel_events::note_off(0, note.note, 100)
                    );
                }
            }
        }
    });
}
#endif
