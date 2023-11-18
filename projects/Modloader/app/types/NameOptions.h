#pragma once
#include <Modloader/app/structs/NameOptions.h>
#include <Modloader/app/structs/NameOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameOptions {
        inline app::NameOptions__Class** type_info() {
            static app::NameOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameOptions__Class**)(modloader::win::memory::resolve_rva(0x04700A98));
            }
            return cache;
        }
        inline app::NameOptions__Class* get_class() {
            return il2cpp::get_class<app::NameOptions__Class>(type_info(), "", "NameOptions");
        }
        inline app::NameOptions* create() {
            return il2cpp::create_object<app::NameOptions>(get_class());
        }
    } // namespace NameOptions
} // namespace app::classes::types
