#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEdgeClamber {
        namespace {
            inline app::SeinEdgeClamber__Class* type_info_ref = nullptr;
        }
        inline app::SeinEdgeClamber__Class** type_info = &type_info_ref;
        inline app::SeinEdgeClamber__Class* get_class() {
            return il2cpp::get_class<app::SeinEdgeClamber__Class>(type_info, "", "SeinEdgeClamber");
        }
        inline app::SeinEdgeClamber* create() {
            return il2cpp::create_object<app::SeinEdgeClamber>(get_class());
        }
    } // namespace SeinEdgeClamber
} // namespace app::classes::types
