#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BitMaskAttribute {
        namespace {
            inline app::BitMaskAttribute__Class* type_info_ref = nullptr;
        }
        inline app::BitMaskAttribute__Class** type_info = &type_info_ref;
        inline app::BitMaskAttribute__Class* get_class() {
            return il2cpp::get_class<app::BitMaskAttribute__Class>(type_info, "Moon", "BitMaskAttribute");
        }
        inline app::BitMaskAttribute* create() {
            return il2cpp::create_object<app::BitMaskAttribute>(get_class());
        }
    } // namespace BitMaskAttribute
} // namespace app::classes::types
