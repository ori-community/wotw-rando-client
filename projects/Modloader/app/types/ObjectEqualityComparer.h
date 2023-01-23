#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectEqualityComparer__Class.h>
#include <Modloader/app/structs/ObjectEqualityComparer.h>

namespace app::classes::types {
    namespace ObjectEqualityComparer {
        inline app::ObjectEqualityComparer__Class** type_info = (app::ObjectEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04768D28));
        inline app::ObjectEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::ObjectEqualityComparer__Class>(type_info, "System.Collections.Generic", "ObjectEqualityComparer");
        }
        inline app::ObjectEqualityComparer* create() {
            return il2cpp::create_object<app::ObjectEqualityComparer>(get_class());
        }
    } // namespace ObjectEqualityComparer
} // namespace app::classes::types
