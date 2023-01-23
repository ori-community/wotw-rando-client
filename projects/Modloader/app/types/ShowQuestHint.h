#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowQuestHint__Class.h>
#include <Modloader/app/structs/ShowQuestHint.h>

namespace app::classes::types {
    namespace ShowQuestHint {
        namespace {
            inline app::ShowQuestHint__Class* type_info_ref = nullptr;
        }
        inline app::ShowQuestHint__Class** type_info = &type_info_ref;
        inline app::ShowQuestHint__Class* get_class() {
            return il2cpp::get_class<app::ShowQuestHint__Class>(type_info, "", "ShowQuestHint");
        }
        inline app::ShowQuestHint* create() {
            return il2cpp::create_object<app::ShowQuestHint>(get_class());
        }
    } // namespace ShowQuestHint
} // namespace app::classes::types
