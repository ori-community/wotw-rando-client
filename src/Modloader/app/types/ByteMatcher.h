#pragma once
#include <Modloader/app/structs/ByteMatcher.h>
#include <Modloader/app/structs/ByteMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteMatcher {
        inline app::ByteMatcher__Class** type_info() {
            static app::ByteMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteMatcher__Class**)(modloader::win::memory::resolve_rva(0x04769A40));
            }
            return cache;
        }
        inline app::ByteMatcher__Class* get_class() {
            return il2cpp::get_class<app::ByteMatcher__Class>(type_info(), "System", "ByteMatcher");
        }
        inline app::ByteMatcher* create() {
            return il2cpp::create_object<app::ByteMatcher>(get_class());
        }
    } // namespace ByteMatcher
} // namespace app::classes::types
