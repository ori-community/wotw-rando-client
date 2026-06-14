#pragma once
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonBool {
        inline app::MoonBool__Class** type_info() {
            static app::MoonBool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonBool__Class**)(modloader::win::memory::resolve_rva(0x0476DC70));
            }
            return cache;
        }
        inline app::MoonBool__Class* get_class() {
            return il2cpp::get_class<app::MoonBool__Class>(type_info(), "Moon", "MoonBool");
        }
        inline app::MoonBool* create() {
            return il2cpp::create_object<app::MoonBool>(get_class());
        }
    } // namespace MoonBool
} // namespace app::classes::types
