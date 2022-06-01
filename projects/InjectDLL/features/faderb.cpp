#include "faderb.h"

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/console.h>

namespace faderb {
    namespace {
        app::FaderB* faderb_cache = nullptr;

        app::FaderB* get_faderb() {
            if (faderb_cache == nullptr) {
                auto ui = il2cpp::get_class<app::UI__Class>("Game", "UI");
                faderb_cache = ui->static_fields->Fader;
            }

            return faderb_cache;
        }

        IL2CPP_BINDING_OVERLOAD(, FaderB, void, FadeIn, (app::FaderB* this_ptr, float duration), (System:Single))
        IL2CPP_BINDING_OVERLOAD(, FaderB, void, FadeOut, (app::FaderB* this_ptr, float duration), (System:Single))
    }

    void fade_in(float duration) {
        FaderB::FadeIn(get_faderb(), duration);
    }

    void fade_out(float duration) {
        FaderB::FadeOut(get_faderb(), duration);
    }
}