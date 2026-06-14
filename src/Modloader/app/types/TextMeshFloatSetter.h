#pragma once
#include <Modloader/app/structs/TextMeshFloatSetter.h>
#include <Modloader/app/structs/TextMeshFloatSetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshFloatSetter {
        inline app::TextMeshFloatSetter__Class** type_info() {
            static app::TextMeshFloatSetter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshFloatSetter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshFloatSetter__Class* get_class() {
            return il2cpp::get_class<app::TextMeshFloatSetter__Class>(type_info(), "", "TextMeshFloatSetter");
        }
        inline app::TextMeshFloatSetter* create() {
            return il2cpp::create_object<app::TextMeshFloatSetter>(get_class());
        }
    } // namespace TextMeshFloatSetter
} // namespace app::classes::types
