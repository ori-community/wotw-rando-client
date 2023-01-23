#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameInfo_1__Class.h>
#include <Modloader/app/structs/NameInfo_1.h>
#include <Modloader/app/structs/NameInfo_1__Array.h>

namespace app::classes::types {
    namespace NameInfo_1 {
        inline app::NameInfo_1__Class** type_info = (app::NameInfo_1__Class**)(modloader::win::memory::resolve_rva(0x0471E2D8));
        inline app::NameInfo_1__Class* get_class() {
            return il2cpp::get_class<app::NameInfo_1__Class>(type_info, "System.Diagnostics.Tracing", "NameInfo");
        }
        inline app::NameInfo_1* create() {
            return il2cpp::create_object<app::NameInfo_1>(get_class());
        }
        inline app::NameInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::NameInfo_1__Array>(get_class(), size);
        }
        inline app::NameInfo_1__Array* create_array(const std::vector<app::NameInfo_1*>& items) {
            return il2cpp::array_new<app::NameInfo_1__Array>(get_class(), items);
        }
    } // namespace NameInfo_1
} // namespace app::classes::types
