#pragma once
#include <Modloader/app/structs/Port.h>
#include <Modloader/app/structs/Port__Array.h>
#include <Modloader/app/structs/Port__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Port {
        inline app::Port__Class** type_info() {
            static app::Port__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Port__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Port__Class* get_class() {
            return il2cpp::get_class<app::Port__Class>(type_info(), "PlayFab.MultiplayerModels", "Port");
        }
        inline app::Port* create() {
            return il2cpp::create_object<app::Port>(get_class());
        }
        inline app::Port__Array* create_array(int size) {
            return il2cpp::array_new<app::Port__Array>(get_class(), size);
        }
        inline app::Port__Array* create_array(const std::vector<app::Port*>& items) {
            return il2cpp::array_new<app::Port__Array>(get_class(), items);
        }
    } // namespace Port
} // namespace app::classes::types
