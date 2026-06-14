#pragma once
#include <Modloader/app/structs/ValueFixup.h>
#include <Modloader/app/structs/ValueFixup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueFixup {
        inline app::ValueFixup__Class** type_info() {
            static app::ValueFixup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValueFixup__Class**)(modloader::win::memory::resolve_rva(0x047886D8));
            }
            return cache;
        }
        inline app::ValueFixup__Class* get_class() {
            return il2cpp::get_class<app::ValueFixup__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
        }
        inline app::ValueFixup* create() {
            return il2cpp::create_object<app::ValueFixup>(get_class());
        }
    } // namespace ValueFixup
} // namespace app::classes::types
