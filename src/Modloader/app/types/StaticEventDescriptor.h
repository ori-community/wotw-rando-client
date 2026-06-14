#pragma once
#include <Modloader/app/structs/StaticEventDescriptor.h>
#include <Modloader/app/structs/StaticEventDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticEventDescriptor {
        inline app::StaticEventDescriptor__Class** type_info() {
            static app::StaticEventDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StaticEventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474E028));
            }
            return cache;
        }
        inline app::StaticEventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::StaticEventDescriptor__Class>(type_info(), "Moon.Timeline", "StaticEventDescriptor");
        }
        inline app::StaticEventDescriptor* create() {
            return il2cpp::create_object<app::StaticEventDescriptor>(get_class());
        }
    } // namespace StaticEventDescriptor
} // namespace app::classes::types
