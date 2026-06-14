#pragma once
#include <Modloader/app/structs/Poser.h>
#include <Modloader/app/structs/Poser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Poser {
        inline app::Poser__Class** type_info() {
            static app::Poser__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Poser__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Poser__Class* get_class() {
            return il2cpp::get_class<app::Poser__Class>(type_info(), "RootMotion.FinalIK", "Poser");
        }
        inline app::Poser* create() {
            return il2cpp::create_object<app::Poser>(get_class());
        }
    } // namespace Poser
} // namespace app::classes::types
