#pragma once
#include <Modloader/app/structs/ReadOnlyAttribute.h>
#include <Modloader/app/structs/ReadOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyAttribute {
        inline app::ReadOnlyAttribute__Class** type_info() {
            static app::ReadOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReadOnlyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04748680));
            }
            return cache;
        }
        inline app::ReadOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyAttribute__Class>(type_info(), "System.ComponentModel", "ReadOnlyAttribute");
        }
        inline app::ReadOnlyAttribute* create() {
            return il2cpp::create_object<app::ReadOnlyAttribute>(get_class());
        }
    } // namespace ReadOnlyAttribute
} // namespace app::classes::types
