#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokNpcEntity_c {
        inline app::KwolokNpcEntity_c__Class** type_info = (app::KwolokNpcEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04765468));
        inline app::KwolokNpcEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokNpcEntity_c__Class>(type_info, "", "KwolokNpcEntity", "<>c");
        }
        inline app::KwolokNpcEntity_c* create() {
            return il2cpp::create_object<app::KwolokNpcEntity_c>(get_class());
        }
    } // namespace KwolokNpcEntity_c
} // namespace app::classes::types
