#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup {
        namespace {
            app::QuestNodeSetup__Class* type_info_ref = nullptr;
        }
        app::QuestNodeSetup__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup__Class>(type_info, "", "QuestNodeSetup");
        }
        inline app::QuestNodeSetup* create() {
            return il2cpp::create_object<app::QuestNodeSetup>(get_class());
        }
    } // namespace QuestNodeSetup
} // namespace app::classes::types
