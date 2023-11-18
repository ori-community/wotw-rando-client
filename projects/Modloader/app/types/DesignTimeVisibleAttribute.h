#pragma once
#include <Modloader/app/structs/DesignTimeVisibleAttribute.h>
#include <Modloader/app/structs/DesignTimeVisibleAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesignTimeVisibleAttribute {
        inline app::DesignTimeVisibleAttribute__Class** type_info() {
            static app::DesignTimeVisibleAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesignTimeVisibleAttribute__Class**)(modloader::win::memory::resolve_rva(0x04732AB8));
            }
            return cache;
        }
        inline app::DesignTimeVisibleAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignTimeVisibleAttribute__Class>(type_info(), "System.ComponentModel", "DesignTimeVisibleAttribute");
        }
        inline app::DesignTimeVisibleAttribute* create() {
            return il2cpp::create_object<app::DesignTimeVisibleAttribute>(get_class());
        }
    } // namespace DesignTimeVisibleAttribute
} // namespace app::classes::types
