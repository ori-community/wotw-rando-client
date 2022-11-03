#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLeached {
        namespace {
            inline app::SeinLeached__Class* type_info_ref = nullptr;
        }
        inline app::SeinLeached__Class** type_info = &type_info_ref;
        inline app::SeinLeached__Class* get_class() {
            return il2cpp::get_class<app::SeinLeached__Class>(type_info, "", "SeinLeached");
        }
        inline app::SeinLeached* create() {
            return il2cpp::create_object<app::SeinLeached>(get_class());
        }
    } // namespace SeinLeached
} // namespace app::classes::types
