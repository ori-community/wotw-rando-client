#pragma once
#include <Modloader/app/structs/EditorAttribute.h>
#include <Modloader/app/structs/EditorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorAttribute {
        inline app::EditorAttribute__Class** type_info() {
            static app::EditorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EditorAttribute__Class**)(modloader::win::memory::resolve_rva(0x04769D18));
            }
            return cache;
        }
        inline app::EditorAttribute__Class* get_class() {
            return il2cpp::get_class<app::EditorAttribute__Class>(type_info(), "System.ComponentModel", "EditorAttribute");
        }
        inline app::EditorAttribute* create() {
            return il2cpp::create_object<app::EditorAttribute>(get_class());
        }
    } // namespace EditorAttribute
} // namespace app::classes::types
