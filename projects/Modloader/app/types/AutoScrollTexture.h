#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoScrollTexture {
        namespace {
            inline app::AutoScrollTexture__Class* type_info_ref = nullptr;
        }
        inline app::AutoScrollTexture__Class** type_info = &type_info_ref;
        inline app::AutoScrollTexture__Class* get_class() {
            return il2cpp::get_class<app::AutoScrollTexture__Class>(type_info, "", "AutoScrollTexture");
        }
        inline app::AutoScrollTexture* create() {
            return il2cpp::create_object<app::AutoScrollTexture>(get_class());
        }
    } // namespace AutoScrollTexture
} // namespace app::classes::types
