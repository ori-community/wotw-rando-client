#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesignOnlyAttribute__Class.h>
#include <Modloader/app/structs/DesignOnlyAttribute.h>

namespace app::classes::types {
    namespace DesignOnlyAttribute {
        inline app::DesignOnlyAttribute__Class** type_info = (app::DesignOnlyAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473FE18));
        inline app::DesignOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignOnlyAttribute__Class>(type_info, "System.ComponentModel", "DesignOnlyAttribute");
        }
        inline app::DesignOnlyAttribute* create() {
            return il2cpp::create_object<app::DesignOnlyAttribute>(get_class());
        }
    } // namespace DesignOnlyAttribute
} // namespace app::classes::types
