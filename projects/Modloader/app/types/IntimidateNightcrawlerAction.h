#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntimidateNightcrawlerAction__Class.h>
#include <Modloader/app/structs/IntimidateNightcrawlerAction.h>

namespace app::classes::types {
    namespace IntimidateNightcrawlerAction {
        namespace {
            inline app::IntimidateNightcrawlerAction__Class* type_info_ref = nullptr;
        }
        inline app::IntimidateNightcrawlerAction__Class** type_info = &type_info_ref;
        inline app::IntimidateNightcrawlerAction__Class* get_class() {
            return il2cpp::get_class<app::IntimidateNightcrawlerAction__Class>(type_info, "", "IntimidateNightcrawlerAction");
        }
        inline app::IntimidateNightcrawlerAction* create() {
            return il2cpp::create_object<app::IntimidateNightcrawlerAction>(get_class());
        }
    } // namespace IntimidateNightcrawlerAction
} // namespace app::classes::types
