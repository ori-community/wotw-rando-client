#pragma once
#include <Modloader/app/structs/TextSpawner.h>
#include <Modloader/app/structs/TextSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextSpawner {
        inline app::TextSpawner__Class** type_info() {
            static app::TextSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextSpawner__Class* get_class() {
            return il2cpp::get_class<app::TextSpawner__Class>(type_info(), "", "TextSpawner");
        }
        inline app::TextSpawner* create() {
            return il2cpp::create_object<app::TextSpawner>(get_class());
        }
    } // namespace TextSpawner
} // namespace app::classes::types
