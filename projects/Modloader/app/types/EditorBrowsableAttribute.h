#pragma once
#include <Modloader/app/structs/EditorBrowsableAttribute.h>
#include <Modloader/app/structs/EditorBrowsableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorBrowsableAttribute {
        inline app::EditorBrowsableAttribute__Class** type_info() {
            static app::EditorBrowsableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EditorBrowsableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04724710));
            }
            return cache;
        }
        inline app::EditorBrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::EditorBrowsableAttribute__Class>(type_info(), "System.ComponentModel", "EditorBrowsableAttribute");
        }
        inline app::EditorBrowsableAttribute* create() {
            return il2cpp::create_object<app::EditorBrowsableAttribute>(get_class());
        }
    } // namespace EditorBrowsableAttribute
} // namespace app::classes::types
