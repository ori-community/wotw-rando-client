#pragma once
#include <Modloader/app/structs/MoonByte.h>
#include <Modloader/app/structs/MoonByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonByte {
        inline app::MoonByte__Class** type_info() {
            static app::MoonByte__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonByte__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonByte__Class* get_class() {
            return il2cpp::get_class<app::MoonByte__Class>(type_info(), "Moon", "MoonByte");
        }
        inline app::MoonByte* create() {
            return il2cpp::create_object<app::MoonByte>(get_class());
        }
    } // namespace MoonByte
} // namespace app::classes::types
