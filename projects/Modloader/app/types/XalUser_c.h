#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalUser_c__Class.h>
#include <Modloader/app/structs/XalUser_c.h>

namespace app::classes::types {
    namespace XalUser_c {
        inline app::XalUser_c__Class** type_info = (app::XalUser_c__Class**)(modloader::win::memory::resolve_rva(0x04731BE8));
        inline app::XalUser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_c__Class>(type_info, "SystemIntegration", "XalUser", "<>c");
        }
        inline app::XalUser_c* create() {
            return il2cpp::create_object<app::XalUser_c>(get_class());
        }
    } // namespace XalUser_c
} // namespace app::classes::types
