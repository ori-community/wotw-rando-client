#pragma once
#include <Modloader/app/structs/GhostGenericResourceAttribute__Array.h>
#include <Modloader/app/structs/GhostGenericResourceAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostGenericResourceAttribute__Array {
        inline app::GhostGenericResourceAttribute__Array__Class** type_info() {
            static app::GhostGenericResourceAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostGenericResourceAttribute__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostGenericResourceAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericResourceAttribute__Array__Class>(type_info(), "", "GhostGenericResourceAttribute[]");
        }
        inline app::GhostGenericResourceAttribute__Array* create() {
            return il2cpp::create_object<app::GhostGenericResourceAttribute__Array>(get_class());
        }
    } // namespace GhostGenericResourceAttribute__Array
} // namespace app::classes::types
