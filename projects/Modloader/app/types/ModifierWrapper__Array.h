#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModifierWrapper__Array {
        namespace {
            inline app::ModifierWrapper__Array__Class* type_info_ref = nullptr;
        }
        inline app::ModifierWrapper__Array__Class** type_info = &type_info_ref;
        inline app::ModifierWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::ModifierWrapper__Array__Class>(type_info, "Moon.ArtOptimization", "ModifierWrapper[]");
        }
        inline app::ModifierWrapper__Array* create() {
            return il2cpp::create_object<app::ModifierWrapper__Array>(get_class());
        }
    } // namespace ModifierWrapper__Array
} // namespace app::classes::types
