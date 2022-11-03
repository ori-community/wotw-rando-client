#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriHintZone {
        namespace {
            inline app::OriHintZone__Class* type_info_ref = nullptr;
        }
        inline app::OriHintZone__Class** type_info = &type_info_ref;
        inline app::OriHintZone__Class* get_class() {
            return il2cpp::get_class<app::OriHintZone__Class>(type_info, "", "OriHintZone");
        }
        inline app::OriHintZone* create() {
            return il2cpp::create_object<app::OriHintZone>(get_class());
        }
    } // namespace OriHintZone
} // namespace app::classes::types
