#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDrill {
        namespace {
            inline app::SeinDrill__Class* type_info_ref = nullptr;
        }
        inline app::SeinDrill__Class** type_info = &type_info_ref;
        inline app::SeinDrill__Class* get_class() {
            return il2cpp::get_class<app::SeinDrill__Class>(type_info, "", "SeinDrill");
        }
        inline app::SeinDrill* create() {
            return il2cpp::create_object<app::SeinDrill>(get_class());
        }
    } // namespace SeinDrill
} // namespace app::classes::types
