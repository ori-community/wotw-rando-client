#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureOffsetModifier__Class.h>
#include <Modloader/app/structs/TextureOffsetModifier.h>

namespace app::classes::types {
    namespace TextureOffsetModifier {
        namespace {
            inline app::TextureOffsetModifier__Class* type_info_ref = nullptr;
        }
        inline app::TextureOffsetModifier__Class** type_info = &type_info_ref;
        inline app::TextureOffsetModifier__Class* get_class() {
            return il2cpp::get_class<app::TextureOffsetModifier__Class>(type_info, "", "TextureOffsetModifier");
        }
        inline app::TextureOffsetModifier* create() {
            return il2cpp::create_object<app::TextureOffsetModifier>(get_class());
        }
    } // namespace TextureOffsetModifier
} // namespace app::classes::types
