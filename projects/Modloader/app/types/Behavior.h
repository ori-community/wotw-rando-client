#pragma once
#include <Modloader/app/structs/Behavior.h>
#include <Modloader/app/structs/Behavior__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Behavior {
        inline app::Behavior__Class** type_info() {
            static app::Behavior__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Behavior__Class**)(modloader::win::memory::resolve_rva(0x04717910));
            }
            return cache;
        }
        inline app::Behavior__Class* get_class() {
            return il2cpp::get_class<app::Behavior__Class>(type_info(), "TriangleNet", "Behavior");
        }
        inline app::Behavior* create() {
            return il2cpp::create_object<app::Behavior>(get_class());
        }
    } // namespace Behavior
} // namespace app::classes::types
