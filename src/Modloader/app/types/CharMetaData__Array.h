#pragma once
#include <Modloader/app/structs/CharMetaData__Array.h>
#include <Modloader/app/structs/CharMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharMetaData__Array {
        inline app::CharMetaData__Array__Class** type_info() {
            static app::CharMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B5B0));
            }
            return cache;
        }
        inline app::CharMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData__Array__Class>(type_info(), "CatlikeCoding.TextBox", "CharMetaData[]");
        }
        inline app::CharMetaData__Array* create() {
            return il2cpp::create_object<app::CharMetaData__Array>(get_class());
        }
    } // namespace CharMetaData__Array
} // namespace app::classes::types
