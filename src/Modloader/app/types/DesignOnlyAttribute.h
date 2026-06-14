#pragma once
#include <Modloader/app/structs/DesignOnlyAttribute.h>
#include <Modloader/app/structs/DesignOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesignOnlyAttribute {
        inline app::DesignOnlyAttribute__Class** type_info() {
            static app::DesignOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesignOnlyAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473FE18));
            }
            return cache;
        }
        inline app::DesignOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignOnlyAttribute__Class>(type_info(), "System.ComponentModel", "DesignOnlyAttribute");
        }
        inline app::DesignOnlyAttribute* create() {
            return il2cpp::create_object<app::DesignOnlyAttribute>(get_class());
        }
    } // namespace DesignOnlyAttribute
} // namespace app::classes::types
