#include "faderb.h"

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <Il2CppModLoader/app/methods/FaderB.h>

using namespace app::methods;

namespace faderb {
    namespace {
        app::FaderB *faderb_cache = nullptr;

        app::FaderB *get_faderb() {
            if (faderb_cache == nullptr) {
                auto ui = il2cpp::get_class<app::UI__Class>("Game", "UI");
                faderb_cache = ui->static_fields->Fader;
            }

            return faderb_cache;
        }
    } // namespace

    void fade_in(float duration) {
        FaderB::FadeIn_2(get_faderb(), duration);
    }

    void fade_out(float duration) {
        FaderB::FadeOut_2(get_faderb(), duration);
    }
} // namespace faderb