#include "custom_cutscene_skips.h"

#include <Il2CppModLoader/app/methods/SkipCutsceneController.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/windows_api/console.h>

namespace custom_cutscene_skips {
    namespace {
        std::vector<CustomCutsceneSkip> skips;

        IL2CPP_INTERCEPT(SkipCutsceneController, bool, get_SkippingAvailable, (app::SkipCutsceneController * this_ptr)) {
            for (const auto& skip : skips) {
                if (skip.is_available()) {
                    return true;
                }
            }

            return next::SkipCutsceneController::get_SkippingAvailable(this_ptr);
        }

        IL2CPP_INTERCEPT(SkipCutsceneController, void, SkipCutscene, (app::SkipCutsceneController * this_ptr)) {
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