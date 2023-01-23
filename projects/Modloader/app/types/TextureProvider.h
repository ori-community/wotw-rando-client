#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureProvider__Class.h>
#include <Modloader/app/structs/TextureProvider.h>

namespace app::classes::types {
    namespace TextureProvider {
        namespace {
            inline app::TextureProvider__Class* type_info_ref = nullptr;
        }
        inline app::TextureProvider__Class** type_info = &type_info_ref;
        inline app::TextureProvider__Class* get_class() {
            return il2cpp::get_class<app::TextureProvider__Class>(type_info, "", "TextureProvider");
        }
        inline app::TextureProvider* create() {
            return il2cpp::create_object<app::TextureProvider>(get_class());
        }
    } // namespace TextureProvider
} // namespace app::classes::types
