#pragma once
#include <Modloader/app/structs/MoonDebugMessage.h>
#include <Modloader/app/structs/MoonDebugMessage__Array.h>
#include <Modloader/app/structs/MoonDebugMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDebugMessage {
        inline app::MoonDebugMessage__Class** type_info() {
            static app::MoonDebugMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonDebugMessage__Class**)(modloader::win::memory::resolve_rva(0x047457C0));
            }
            return cache;
        }
        inline app::MoonDebugMessage__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessage__Class>(type_info(), "Moon", "MoonDebugMessage");
        }
        inline app::MoonDebugMessage* create() {
            return il2cpp::create_object<app::MoonDebugMessage>(get_class());
        }
        inline app::MoonDebugMessage__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonDebugMessage__Array>(get_class(), size);
        }
        inline app::MoonDebugMessage__Array* create_array(const std::vector<app::MoonDebugMessage*>& items) {
            return il2cpp::array_new<app::MoonDebugMessage__Array>(get_class(), items);
        }
    } // namespace MoonDebugMessage
} // namespace app::classes::types
