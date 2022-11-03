#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PaddedHeadAndTail {
        namespace {
            inline app::PaddedHeadAndTail__Class* type_info_ref = nullptr;
        }
        inline app::PaddedHeadAndTail__Class** type_info = &type_info_ref;
        inline app::PaddedHeadAndTail__Class* get_class() {
            return il2cpp::get_class<app::PaddedHeadAndTail__Class>(type_info, "System.Collections.Concurrent", "PaddedHeadAndTail");
        }
        inline app::PaddedHeadAndTail* create() {
            return il2cpp::create_object<app::PaddedHeadAndTail>(get_class());
        }
        inline app::PaddedHeadAndTail__Boxed* box(app::PaddedHeadAndTail value) {
            return il2cpp::box_value<app::PaddedHeadAndTail__Boxed>(get_class(), value);
        }
    } // namespace PaddedHeadAndTail
} // namespace app::classes::types
