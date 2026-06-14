#pragma once
#include <Modloader/app/structs/TextMeshRenderer_1.h>
#include <Modloader/app/structs/TextMeshRenderer_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshRenderer_1 {
        inline app::TextMeshRenderer_1__Class** type_info() {
            static app::TextMeshRenderer_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextMeshRenderer_1__Class**)(modloader::win::memory::resolve_rva(0x0474D8A0));
            }
            return cache;
        }
        inline app::TextMeshRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshRenderer_1__Class>(type_info(), "Moon.UI", "TextMeshRenderer");
        }
        inline app::TextMeshRenderer_1* create() {
            return il2cpp::create_object<app::TextMeshRenderer_1>(get_class());
        }
    } // namespace TextMeshRenderer_1
} // namespace app::classes::types
