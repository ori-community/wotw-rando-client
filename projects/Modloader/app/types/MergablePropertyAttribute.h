#pragma once
#include <Modloader/app/structs/MergablePropertyAttribute.h>
#include <Modloader/app/structs/MergablePropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MergablePropertyAttribute {
        inline app::MergablePropertyAttribute__Class** type_info() {
            static app::MergablePropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MergablePropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04798C00));
            }
            return cache;
        }
        inline app::MergablePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::MergablePropertyAttribute__Class>(type_info(), "System.ComponentModel", "MergablePropertyAttribute");
        }
        inline app::MergablePropertyAttribute* create() {
            return il2cpp::create_object<app::MergablePropertyAttribute>(get_class());
        }
    } // namespace MergablePropertyAttribute
} // namespace app::classes::types
