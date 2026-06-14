#pragma once
#include <Modloader/app/structs/Stat__Enum.h>
#include <Modloader/app/structs/Stat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stat__Enum {
        inline app::Stat__Enum__Class** type_info() {
            static app::Stat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753600));
            }
            return cache;
        }
        inline app::Stat__Enum__Class* get_class() {
            return il2cpp::get_class<app::Stat__Enum__Class>(type_info(), "Moon.Profile", "Stat");
        }
        inline app::Stat__Enum* create() {
            return il2cpp::create_object<app::Stat__Enum>(get_class());
        }
    } // namespace Stat__Enum
} // namespace app::classes::types
