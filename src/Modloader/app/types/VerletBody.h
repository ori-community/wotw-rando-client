#pragma once
#include <Modloader/app/structs/VerletBody.h>
#include <Modloader/app/structs/VerletBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBody {
        inline app::VerletBody__Class** type_info() {
            static app::VerletBody__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletBody__Class**)(modloader::win::memory::resolve_rva(0x047383F0));
            }
            return cache;
        }
        inline app::VerletBody__Class* get_class() {
            return il2cpp::get_class<app::VerletBody__Class>(type_info(), "Moon", "VerletBody");
        }
        inline app::VerletBody* create() {
            return il2cpp::create_object<app::VerletBody>(get_class());
        }
    } // namespace VerletBody
} // namespace app::classes::types
