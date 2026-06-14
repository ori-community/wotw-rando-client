#pragma once
#include <Modloader/app/structs/XboxOne.h>
#include <Modloader/app/structs/XboxOne__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOne {
        inline app::XboxOne__Class** type_info() {
            static app::XboxOne__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOne__Class**)(modloader::win::memory::resolve_rva(0x04707B88));
            }
            return cache;
        }
        inline app::XboxOne__Class* get_class() {
            return il2cpp::get_class<app::XboxOne__Class>(type_info(), "", "XboxOne");
        }
        inline app::XboxOne* create() {
            return il2cpp::create_object<app::XboxOne>(get_class());
        }
    } // namespace XboxOne
} // namespace app::classes::types
