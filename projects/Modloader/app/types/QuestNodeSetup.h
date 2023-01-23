#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestNodeSetup__Class.h>
#include <Modloader/app/structs/QuestNodeSetup.h>

namespace app::classes::types {
    namespace QuestNodeSetup {
        namespace {
            inline app::QuestNodeSetup__Class* type_info_ref = nullptr;
        }
        inline app::QuestNodeSetup__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup__Class>(type_info, "", "QuestNodeSetup");
        }
        inline app::QuestNodeSetup* create() {
            return il2cpp::create_object<app::QuestNodeSetup>(get_class());
        }
    } // namespace QuestNodeSetup
} // namespace app::classes::types
