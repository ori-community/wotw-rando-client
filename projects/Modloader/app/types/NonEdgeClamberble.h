#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NonEdgeClamberble__Class.h>
#include <Modloader/app/structs/NonEdgeClamberble.h>

namespace app::classes::types {
    namespace NonEdgeClamberble {
        namespace {
            inline app::NonEdgeClamberble__Class* type_info_ref = nullptr;
        }
        inline app::NonEdgeClamberble__Class** type_info = &type_info_ref;
        inline app::NonEdgeClamberble__Class* get_class() {
            return il2cpp::get_class<app::NonEdgeClamberble__Class>(type_info, "", "NonEdgeClamberble");
        }
        inline app::NonEdgeClamberble* create() {
            return il2cpp::create_object<app::NonEdgeClamberble>(get_class());
        }
    } // namespace NonEdgeClamberble
} // namespace app::classes::types
