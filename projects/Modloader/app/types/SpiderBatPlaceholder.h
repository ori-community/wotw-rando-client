#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatPlaceholder {
        namespace {
            inline app::SpiderBatPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpiderBatPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatPlaceholder__Class>(type_info, "", "SpiderBatPlaceholder");
        }
        inline app::SpiderBatPlaceholder* create() {
            return il2cpp::create_object<app::SpiderBatPlaceholder>(get_class());
        }
    } // namespace SpiderBatPlaceholder
} // namespace app::classes::types
