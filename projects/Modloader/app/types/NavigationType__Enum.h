#pragma once
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/NavigationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigationType__Enum {
        inline app::NavigationType__Enum__Class** type_info() {
            static app::NavigationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NavigationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04762110));
            }
            return cache;
        }
        inline app::NavigationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NavigationType__Enum__Class>(type_info(), "MoonNavigation", "NavigationType");
        }
        inline app::NavigationType__Enum* create() {
            return il2cpp::create_object<app::NavigationType__Enum>(get_class());
        }
    } // namespace NavigationType__Enum
} // namespace app::classes::types
