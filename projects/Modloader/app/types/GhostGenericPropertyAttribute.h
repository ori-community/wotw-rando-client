#pragma once
#include <Modloader/app/structs/GhostGenericPropertyAttribute.h>
#include <Modloader/app/structs/GhostGenericPropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericPropertyAttribute {
        inline app::GhostGenericPropertyAttribute__Class** type_info() {
            static app::GhostGenericPropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostGenericPropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04751440));
            }
            return cache;
        }
        inline app::GhostGenericPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericPropertyAttribute__Class>(type_info(), "", "GhostGenericPropertyAttribute");
        }
        inline app::GhostGenericPropertyAttribute* create() {
            return il2cpp::create_object<app::GhostGenericPropertyAttribute>(get_class());
        }
    } // namespace GhostGenericPropertyAttribute
} // namespace app::classes::types
