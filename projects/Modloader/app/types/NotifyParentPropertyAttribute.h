#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotifyParentPropertyAttribute__Class.h>
#include <Modloader/app/structs/NotifyParentPropertyAttribute.h>

namespace app::classes::types {
    namespace NotifyParentPropertyAttribute {
        inline app::NotifyParentPropertyAttribute__Class** type_info = (app::NotifyParentPropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476B100));
        inline app::NotifyParentPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NotifyParentPropertyAttribute__Class>(type_info, "System.ComponentModel", "NotifyParentPropertyAttribute");
        }
        inline app::NotifyParentPropertyAttribute* create() {
            return il2cpp::create_object<app::NotifyParentPropertyAttribute>(get_class());
        }
    } // namespace NotifyParentPropertyAttribute
} // namespace app::classes::types
