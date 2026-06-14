#pragma once
#include <Modloader/app/structs/GenericRegularEvent.h>
#include <Modloader/app/structs/GenericRegularEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericRegularEvent {
        inline app::GenericRegularEvent__Class** type_info() {
            static app::GenericRegularEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericRegularEvent__Class**)(modloader::win::memory::resolve_rva(0x0473E088));
            }
            return cache;
        }
        inline app::GenericRegularEvent__Class* get_class() {
            return il2cpp::get_class<app::GenericRegularEvent__Class>(type_info(), "", "GenericRegularEvent");
        }
        inline app::GenericRegularEvent* create() {
            return il2cpp::create_object<app::GenericRegularEvent>(get_class());
        }
    } // namespace GenericRegularEvent
} // namespace app::classes::types
