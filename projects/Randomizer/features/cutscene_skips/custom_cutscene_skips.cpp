#include "custom_cutscene_skips.h"

#include <Modloader/app/methods/SkipCutsceneController.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Modloader/windows_api/console.h>

namespace custom_cutscene_skips {
    namespace {
        std::vector<CustomCutsceneSkip> skips;

        IL2CPP_INTERCEPT(bool, SkipCutsceneController, get_SkippingAvailable, app::SkipCutsceneController * this_ptr) {
            for (const auto& skip : skips) {
                if (skip.is_available()) {
                    return true;
                }
            }

            return next::SkipCutsceneController::get_SkippingAvailable(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SkipCutsceneController, SkipCutscene, app::SkipCutsceneController * this_ptr) {
            for (const auto& skip : skips) {
                if (skip.is_available()) {
                    modloader::win::console::console_send("Running custom cutscene skip");
                    skip.invoke();
                }
            }

            next::SkipCutsceneController::SkipCutscene(this_ptr);
        }
    } // namespace

    void register_cutscene_skip(const CustomCutsceneSkip& skip) {
        skips.push_back(skip);
    }
} // namespace custom_cutscene_skips