#pragma once
#include <Modloader/app/structs/Group__Array.h>
#include <Modloader/app/structs/Group__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Group__Array {
        inline app::Group__Array__Class** type_info() {
            static app::Group__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Group__Array__Class**)(modloader::win::memory::resolve_rva(0x047847A8));
            }
            return cache;
        }
        inline app::Group__Array__Class* get_class() {
            return il2cpp::get_class<app::Group__Array__Class>(type_info(), "System.Text.RegularExpressions", "Group[]");
        }
        inline app::Group__Array* create() {
            return il2cpp::create_object<app::Group__Array>(get_class());
        }
    } // namespace Group__Array
} // namespace app::classes::types
