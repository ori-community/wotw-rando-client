#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SharedJsonParser_c__Class.h>
#include <Modloader/app/structs/SharedJsonParser_c.h>

namespace app::classes::types {
    namespace SharedJsonParser_c {
        inline app::SharedJsonParser_c__Class** type_info = (app::SharedJsonParser_c__Class**)(modloader::win::memory::resolve_rva(0x04791348));
        inline app::SharedJsonParser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SharedJsonParser_c__Class>(type_info, "Moon", "SharedJsonParser", "<>c");
        }
        inline app::SharedJsonParser_c* create() {
            return il2cpp::create_object<app::SharedJsonParser_c>(get_class());
        }
    } // namespace SharedJsonParser_c
} // namespace app::classes::types
