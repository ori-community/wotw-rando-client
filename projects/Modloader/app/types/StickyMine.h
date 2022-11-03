#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StickyMine {
        namespace {
            inline app::StickyMine__Class* type_info_ref = nullptr;
        }
        inline app::StickyMine__Class** type_info = &type_info_ref;
        inline app::StickyMine__Class* get_class() {
            return il2cpp::get_class<app::StickyMine__Class>(type_info, "", "StickyMine");
        }
        inline app::StickyMine* create() {
            return il2cpp::create_object<app::StickyMine>(get_class());
        }
    } // namespace StickyMine
} // namespace app::classes::types
