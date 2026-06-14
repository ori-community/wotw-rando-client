#pragma once
#include <Modloader/app/structs/KwolokTongueStatue_TongueState.h>
#include <Modloader/app/structs/KwolokTongueStatue_TongueState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_TongueState {
        inline app::KwolokTongueStatue_TongueState__Class** type_info() {
            static app::KwolokTongueStatue_TongueState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokTongueStatue_TongueState__Class**)(modloader::win::memory::resolve_rva(0x0476AE70));
            }
            return cache;
        }
        inline app::KwolokTongueStatue_TongueState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_TongueState__Class>(type_info(), "", "KwolokTongueStatue", "TongueState");
        }
        inline app::KwolokTongueStatue_TongueState* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_TongueState>(get_class());
        }
    } // namespace KwolokTongueStatue_TongueState
} // namespace app::classes::types
