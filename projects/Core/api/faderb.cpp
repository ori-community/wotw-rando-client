#include "faderb.h"

#include <Modloader/app/methods/FaderB.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;

namespace core::api::faderb {
    app::FaderB* faderb_cache = nullptr;

    app::FaderB* get() {
        if (!il2cpp::unity::is_valid(faderb_cache)) {
            auto ui = types::UI::get_class();
            faderb_cache = ui->static_fields->Fader;
        }

        return faderb_cache;
    }

    void fade_in(float duration) {
        FaderB::FadeIn_2(get(), duration);
    }

    void fade_out(float duration) {
        FaderB::FadeOut_2(get(), duration);
    }
} // namespace core::api::faderb