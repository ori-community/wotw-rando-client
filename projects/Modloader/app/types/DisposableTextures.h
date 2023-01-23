#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DisposableTextures__Class.h>
#include <Modloader/app/structs/DisposableTextures.h>

namespace app::classes::types {
    namespace DisposableTextures {
        namespace {
            inline app::DisposableTextures__Class* type_info_ref = nullptr;
        }
        inline app::DisposableTextures__Class** type_info = &type_info_ref;
        inline app::DisposableTextures__Class* get_class() {
            return il2cpp::get_class<app::DisposableTextures__Class>(type_info, "", "DisposableTextures");
        }
        inline app::DisposableTextures* create() {
            return il2cpp::create_object<app::DisposableTextures>(get_class());
        }
    } // namespace DisposableTextures
} // namespace app::classes::types
