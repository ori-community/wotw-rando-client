#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestIndicator {
        namespace {
            inline app::QuestIndicator__Class* type_info_ref = nullptr;
        }
        inline app::QuestIndicator__Class** type_info = &type_info_ref;
        inline app::QuestIndicator__Class* get_class() {
            return il2cpp::get_class<app::QuestIndicator__Class>(type_info, "", "QuestIndicator");
        }
        inline app::QuestIndicator* create() {
            return il2cpp::create_object<app::QuestIndicator>(get_class());
        }
    } // namespace QuestIndicator
} // namespace app::classes::types
