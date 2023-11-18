#pragma once
#include <Modloader/app/structs/Compositor__Enum.h>
#include <Modloader/app/structs/Compositor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Compositor__Enum {
        inline app::Compositor__Enum__Class** type_info() {
            static app::Compositor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Compositor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Compositor__Enum__Class* get_class() {
            return il2cpp::get_class<app::Compositor__Enum__Class>(type_info(), "System.Xml.Schema", "Compositor");
        }
        inline app::Compositor__Enum* create() {
            return il2cpp::create_object<app::Compositor__Enum>(get_class());
        }
    } // namespace Compositor__Enum
} // namespace app::classes::types
