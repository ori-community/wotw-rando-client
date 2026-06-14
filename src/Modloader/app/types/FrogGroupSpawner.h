#pragma once
#include <Modloader/app/structs/FrogGroupSpawner.h>
#include <Modloader/app/structs/FrogGroupSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogGroupSpawner {
        inline app::FrogGroupSpawner__Class** type_info() {
            static app::FrogGroupSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogGroupSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogGroupSpawner__Class* get_class() {
            return il2cpp::get_class<app::FrogGroupSpawner__Class>(type_info(), "", "FrogGroupSpawner");
        }
        inline app::FrogGroupSpawner* create() {
            return il2cpp::create_object<app::FrogGroupSpawner>(get_class());
        }
    } // namespace FrogGroupSpawner
} // namespace app::classes::types
