#pragma once
#include <Modloader/app/structs/XboxOneSave_c.h>
#include <Modloader/app/structs/XboxOneSave_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneSave_c {
        inline app::XboxOneSave_c__Class** type_info() {
            static app::XboxOneSave_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneSave_c__Class**)(modloader::win::memory::resolve_rva(0x04718D48));
            }
            return cache;
        }
        inline app::XboxOneSave_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneSave_c__Class>(type_info(), "", "XboxOneSave", "<>c");
        }
        inline app::XboxOneSave_c* create() {
            return il2cpp::create_object<app::XboxOneSave_c>(get_class());
        }
    } // namespace XboxOneSave_c
} // namespace app::classes::types
