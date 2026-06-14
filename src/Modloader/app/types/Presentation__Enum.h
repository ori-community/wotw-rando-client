#pragma once
#include <Modloader/app/structs/Presentation__Enum.h>
#include <Modloader/app/structs/Presentation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Presentation__Enum {
        inline app::Presentation__Enum__Class** type_info() {
            static app::Presentation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Presentation__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471CD48));
            }
            return cache;
        }
        inline app::Presentation__Enum__Class* get_class() {
            return il2cpp::get_class<app::Presentation__Enum__Class>(type_info(), "Moon.Profile", "Presentation");
        }
        inline app::Presentation__Enum* create() {
            return il2cpp::create_object<app::Presentation__Enum>(get_class());
        }
    } // namespace Presentation__Enum
} // namespace app::classes::types
