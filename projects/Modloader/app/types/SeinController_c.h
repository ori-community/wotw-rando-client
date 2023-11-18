#pragma once
#include <Modloader/app/structs/SeinController_c.h>
#include <Modloader/app/structs/SeinController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinController_c {
        inline app::SeinController_c__Class** type_info() {
            static app::SeinController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinController_c__Class**)(modloader::win::memory::resolve_rva(0x04795C98));
            }
            return cache;
        }
        inline app::SeinController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinController_c__Class>(type_info(), "", "SeinController", "<>c");
        }
        inline app::SeinController_c* create() {
            return il2cpp::create_object<app::SeinController_c>(get_class());
        }
    } // namespace SeinController_c
} // namespace app::classes::types
