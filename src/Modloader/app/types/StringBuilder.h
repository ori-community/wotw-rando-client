#pragma once
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/StringBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringBuilder {
        inline app::StringBuilder__Class** type_info() {
            static app::StringBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringBuilder__Class**)(modloader::win::memory::resolve_rva(0x04713A70));
            }
            return cache;
        }
        inline app::StringBuilder__Class* get_class() {
            return il2cpp::get_class<app::StringBuilder__Class>(type_info(), "System.Text", "StringBuilder");
        }
        inline app::StringBuilder* create() {
            return il2cpp::create_object<app::StringBuilder>(get_class());
        }
    } // namespace StringBuilder
} // namespace app::classes::types
