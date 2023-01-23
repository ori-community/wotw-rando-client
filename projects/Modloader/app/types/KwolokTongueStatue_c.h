#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokTongueStatue_c__Class.h>
#include <Modloader/app/structs/KwolokTongueStatue_c.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_c {
        inline app::KwolokTongueStatue_c__Class** type_info = (app::KwolokTongueStatue_c__Class**)(modloader::win::memory::resolve_rva(0x047045B0));
        inline app::KwolokTongueStatue_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_c__Class>(type_info, "", "KwolokTongueStatue", "<>c");
        }
        inline app::KwolokTongueStatue_c* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_c>(get_class());
        }
    } // namespace KwolokTongueStatue_c
} // namespace app::classes::types
