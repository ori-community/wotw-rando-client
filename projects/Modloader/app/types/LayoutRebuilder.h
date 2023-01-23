#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayoutRebuilder__Class.h>
#include <Modloader/app/structs/LayoutRebuilder.h>
#include <Modloader/app/structs/LayoutRebuilder__Array.h>

namespace app::classes::types {
    namespace LayoutRebuilder {
        inline app::LayoutRebuilder__Class** type_info = (app::LayoutRebuilder__Class**)(modloader::win::memory::resolve_rva(0x0470FF40));
        inline app::LayoutRebuilder__Class* get_class() {
            return il2cpp::get_class<app::LayoutRebuilder__Class>(type_info, "UnityEngine.UI", "LayoutRebuilder");
        }
        inline app::LayoutRebuilder* create() {
            return il2cpp::create_object<app::LayoutRebuilder>(get_class());
        }
        inline app::LayoutRebuilder__Array* create_array(int size) {
            return il2cpp::array_new<app::LayoutRebuilder__Array>(get_class(), size);
        }
        inline app::LayoutRebuilder__Array* create_array(const std::vector<app::LayoutRebuilder*>& items) {
            return il2cpp::array_new<app::LayoutRebuilder__Array>(get_class(), items);
        }
    } // namespace LayoutRebuilder
} // namespace app::classes::types
