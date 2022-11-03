#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MirrorData {
        namespace {
            inline app::MirrorData__Class* type_info_ref = nullptr;
        }
        inline app::MirrorData__Class** type_info = &type_info_ref;
        inline app::MirrorData__Class* get_class() {
            return il2cpp::get_class<app::MirrorData__Class>(type_info, "", "MirrorData");
        }
        inline app::MirrorData* create() {
            return il2cpp::create_object<app::MirrorData>(get_class());
        }
    } // namespace MirrorData
} // namespace app::classes::types
