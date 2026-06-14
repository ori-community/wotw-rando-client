#pragma once
#include <Modloader/app/structs/SeinPinned.h>
#include <Modloader/app/structs/SeinPinned__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPinned {
        inline app::SeinPinned__Class** type_info() {
            static app::SeinPinned__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPinned__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPinned__Class* get_class() {
            return il2cpp::get_class<app::SeinPinned__Class>(type_info(), "", "SeinPinned");
        }
        inline app::SeinPinned* create() {
            return il2cpp::create_object<app::SeinPinned>(get_class());
        }
    } // namespace SeinPinned
} // namespace app::classes::types
