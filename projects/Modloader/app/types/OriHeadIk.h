#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriHeadIk {
        namespace {
            inline app::OriHeadIk__Class* type_info_ref = nullptr;
        }
        inline app::OriHeadIk__Class** type_info = &type_info_ref;
        inline app::OriHeadIk__Class* get_class() {
            return il2cpp::get_class<app::OriHeadIk__Class>(type_info, "Moon", "OriHeadIk");
        }
        inline app::OriHeadIk* create() {
            return il2cpp::create_object<app::OriHeadIk>(get_class());
        }
    } // namespace OriHeadIk
} // namespace app::classes::types
