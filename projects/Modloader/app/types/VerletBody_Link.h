#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletBody_Link__Class.h>
#include <Modloader/app/structs/VerletBody_Link.h>
#include <Modloader/app/structs/VerletBody_Link__Array.h>

namespace app::classes::types {
    namespace VerletBody_Link {
        inline app::VerletBody_Link__Class** type_info = (app::VerletBody_Link__Class**)(modloader::win::memory::resolve_rva(0x0477D7F0));
        inline app::VerletBody_Link__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBody_Link__Class>(type_info, "Moon", "VerletBody", "Link");
        }
        inline app::VerletBody_Link* create() {
            return il2cpp::create_object<app::VerletBody_Link>(get_class());
        }
        inline app::VerletBody_Link__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBody_Link__Array>(get_class(), size);
        }
        inline app::VerletBody_Link__Array* create_array(const std::vector<app::VerletBody_Link*>& items) {
            return il2cpp::array_new<app::VerletBody_Link__Array>(get_class(), items);
        }
    } // namespace VerletBody_Link
} // namespace app::classes::types
