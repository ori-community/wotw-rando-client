#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBowMark {
        namespace {
            inline app::SeinBowMark__Class* type_info_ref = nullptr;
        }
        inline app::SeinBowMark__Class** type_info = &type_info_ref;
        inline app::SeinBowMark__Class* get_class() {
            return il2cpp::get_class<app::SeinBowMark__Class>(type_info, "", "SeinBowMark");
        }
        inline app::SeinBowMark* create() {
            return il2cpp::create_object<app::SeinBowMark>(get_class());
        }
    } // namespace SeinBowMark
} // namespace app::classes::types
