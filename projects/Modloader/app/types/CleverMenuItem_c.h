#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItem_c {
        inline app::CleverMenuItem_c__Class** type_info = (app::CleverMenuItem_c__Class**)(modloader::win::memory::resolve_rva(0x0471A690));
        inline app::CleverMenuItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItem_c__Class>(type_info, "", "CleverMenuItem", "<>c");
        }
        inline app::CleverMenuItem_c* create() {
            return il2cpp::create_object<app::CleverMenuItem_c>(get_class());
        }
    } // namespace CleverMenuItem_c
} // namespace app::classes::types
