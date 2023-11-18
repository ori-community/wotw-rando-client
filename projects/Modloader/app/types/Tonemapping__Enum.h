#pragma once
#include <Modloader/app/structs/Tonemapping__Enum.h>
#include <Modloader/app/structs/Tonemapping__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tonemapping__Enum {
        inline app::Tonemapping__Enum__Class** type_info() {
            static app::Tonemapping__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tonemapping__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tonemapping__Enum__Class* get_class() {
            return il2cpp::get_class<app::Tonemapping__Enum__Class>(type_info(), "AmplifyColor", "Tonemapping");
        }
        inline app::Tonemapping__Enum* create() {
            return il2cpp::create_object<app::Tonemapping__Enum>(get_class());
        }
    } // namespace Tonemapping__Enum
} // namespace app::classes::types
