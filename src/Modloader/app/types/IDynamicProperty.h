#pragma once
#include <Modloader/app/structs/IDynamicProperty.h>
#include <Modloader/app/structs/IDynamicProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDynamicProperty {
        inline app::IDynamicProperty__Class** type_info() {
            static app::IDynamicProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDynamicProperty__Class**)(modloader::win::memory::resolve_rva(0x047741C0));
            }
            return cache;
        }
        inline app::IDynamicProperty__Class* get_class() {
            return il2cpp::get_class<app::IDynamicProperty__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IDynamicProperty");
        }
    } // namespace IDynamicProperty
} // namespace app::classes::types
