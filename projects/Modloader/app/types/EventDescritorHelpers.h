#pragma once
#include <Modloader/app/structs/EventDescritorHelpers.h>
#include <Modloader/app/structs/EventDescritorHelpers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDescritorHelpers {
        inline app::EventDescritorHelpers__Class** type_info() {
            static app::EventDescritorHelpers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventDescritorHelpers__Class**)(modloader::win::memory::resolve_rva(0x04722428));
            }
            return cache;
        }
        inline app::EventDescritorHelpers__Class* get_class() {
            return il2cpp::get_class<app::EventDescritorHelpers__Class>(type_info(), "Moon.Timeline", "EventDescritorHelpers");
        }
        inline app::EventDescritorHelpers* create() {
            return il2cpp::create_object<app::EventDescritorHelpers>(get_class());
        }
    } // namespace EventDescritorHelpers
} // namespace app::classes::types
