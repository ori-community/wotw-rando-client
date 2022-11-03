#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Texture__Array {
        namespace {
            inline app::Texture__Array__Class* type_info_ref = nullptr;
        }
        inline app::Texture__Array__Class** type_info = &type_info_ref;
        inline app::Texture__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture__Array__Class>(type_info, "UnityEngine", "Texture[]");
        }
        inline app::Texture__Array* create() {
            return il2cpp::create_object<app::Texture__Array>(get_class());
        }
    } // namespace Texture__Array
} // namespace app::classes::types
