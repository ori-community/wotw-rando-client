#pragma once
#include <Modloader/app/structs/hdRumbleCreator.h>
#include <Modloader/app/structs/hdRumbleCreator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace hdRumbleCreator {
        inline app::hdRumbleCreator__Class** type_info() {
            static app::hdRumbleCreator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::hdRumbleCreator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::hdRumbleCreator__Class* get_class() {
            return il2cpp::get_class<app::hdRumbleCreator__Class>(type_info(), "", "hdRumbleCreator");
        }
        inline app::hdRumbleCreator* create() {
            return il2cpp::create_object<app::hdRumbleCreator>(get_class());
        }
    } // namespace hdRumbleCreator
} // namespace app::classes::types
