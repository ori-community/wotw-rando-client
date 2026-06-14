#pragma once
#include <Modloader/app/structs/IntroLogosSkip.h>
#include <Modloader/app/structs/IntroLogosSkip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntroLogosSkip {
        inline app::IntroLogosSkip__Class** type_info() {
            static app::IntroLogosSkip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntroLogosSkip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntroLogosSkip__Class* get_class() {
            return il2cpp::get_class<app::IntroLogosSkip__Class>(type_info(), "", "IntroLogosSkip");
        }
        inline app::IntroLogosSkip* create() {
            return il2cpp::create_object<app::IntroLogosSkip>(get_class());
        }
    } // namespace IntroLogosSkip
} // namespace app::classes::types
