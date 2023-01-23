#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Index__Class.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/Index__Array.h>

namespace app::classes::types {
    namespace Index {
        inline app::Index__Class** type_info = (app::Index__Class**)(modloader::win::memory::resolve_rva(0x047488F0));
        inline app::Index__Class* get_class() {
            return il2cpp::get_class<app::Index__Class>(type_info, "System.Data", "Index");
        }
        inline app::Index* create() {
            return il2cpp::create_object<app::Index>(get_class());
        }
        inline app::Index__Array* create_array(int size) {
            return il2cpp::array_new<app::Index__Array>(get_class(), size);
        }
        inline app::Index__Array* create_array(const std::vector<app::Index*>& items) {
            return il2cpp::array_new<app::Index__Array>(get_class(), items);
        }
    } // namespace Index
} // namespace app::classes::types
