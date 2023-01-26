#pragma once
#include <Modloader/app/structs/Frapser.h>
#include <Modloader/app/structs/Frapser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Frapser {
        inline app::Frapser__Class** type_info() {
            static app::Frapser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Frapser__Class**)(modloader::win::memory::resolve_rva(0x04759968));
            }
            return cache;
        }
        inline app::Frapser__Class* get_class() {
            return il2cpp::get_class<app::Frapser__Class>(type_info(), "", "Frapser");
        }
        inline app::Frapser* create() {
            return il2cpp::create_object<app::Frapser>(get_class());
        }
    } // namespace Frapser
} // namespace app::classes::types
