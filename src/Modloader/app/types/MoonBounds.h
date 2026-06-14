#pragma once
#include <Modloader/app/structs/MoonBounds.h>
#include <Modloader/app/structs/MoonBounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonBounds {
        inline app::MoonBounds__Class** type_info() {
            static app::MoonBounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonBounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonBounds__Class* get_class() {
            return il2cpp::get_class<app::MoonBounds__Class>(type_info(), "Moon", "MoonBounds");
        }
        inline app::MoonBounds* create() {
            return il2cpp::create_object<app::MoonBounds>(get_class());
        }
    } // namespace MoonBounds
} // namespace app::classes::types
