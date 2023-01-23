#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextMeshFloatSetter__Class.h>
#include <Modloader/app/structs/TextMeshFloatSetter.h>

namespace app::classes::types {
    namespace TextMeshFloatSetter {
        namespace {
            inline app::TextMeshFloatSetter__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshFloatSetter__Class** type_info = &type_info_ref;
        inline app::TextMeshFloatSetter__Class* get_class() {
            return il2cpp::get_class<app::TextMeshFloatSetter__Class>(type_info, "", "TextMeshFloatSetter");
        }
        inline app::TextMeshFloatSetter* create() {
            return il2cpp::create_object<app::TextMeshFloatSetter>(get_class());
        }
    } // namespace TextMeshFloatSetter
} // namespace app::classes::types
