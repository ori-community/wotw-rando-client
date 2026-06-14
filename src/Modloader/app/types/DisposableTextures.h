#pragma once
#include <Modloader/app/structs/DisposableTextures.h>
#include <Modloader/app/structs/DisposableTextures__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisposableTextures {
        inline app::DisposableTextures__Class** type_info() {
            static app::DisposableTextures__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisposableTextures__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisposableTextures__Class* get_class() {
            return il2cpp::get_class<app::DisposableTextures__Class>(type_info(), "", "DisposableTextures");
        }
        inline app::DisposableTextures* create() {
            return il2cpp::create_object<app::DisposableTextures>(get_class());
        }
    } // namespace DisposableTextures
} // namespace app::classes::types
