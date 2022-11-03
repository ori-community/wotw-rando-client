#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinRun {
        namespace {
            inline app::SeinRun__Class* type_info_ref = nullptr;
        }
        inline app::SeinRun__Class** type_info = &type_info_ref;
        inline app::SeinRun__Class* get_class() {
            return il2cpp::get_class<app::SeinRun__Class>(type_info, "", "SeinRun");
        }
        inline app::SeinRun* create() {
            return il2cpp::create_object<app::SeinRun>(get_class());
        }
    } // namespace SeinRun
} // namespace app::classes::types
