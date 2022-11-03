#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_TongueState {
        inline app::KwolokTongueStatue_TongueState__Class** type_info = (app::KwolokTongueStatue_TongueState__Class**)(modloader::win::memory::resolve_rva(0x0476AE70));
        inline app::KwolokTongueStatue_TongueState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_TongueState__Class>(type_info, "", "KwolokTongueStatue", "TongueState");
        }
        inline app::KwolokTongueStatue_TongueState* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_TongueState>(get_class());
        }
    } // namespace KwolokTongueStatue_TongueState
} // namespace app::classes::types
