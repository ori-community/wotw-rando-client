#pragma once
#include <Modloader/app/structs/IntimidateNightcrawlerAction.h>
#include <Modloader/app/structs/IntimidateNightcrawlerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntimidateNightcrawlerAction {
        inline app::IntimidateNightcrawlerAction__Class** type_info() {
            static app::IntimidateNightcrawlerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntimidateNightcrawlerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntimidateNightcrawlerAction__Class* get_class() {
            return il2cpp::get_class<app::IntimidateNightcrawlerAction__Class>(type_info(), "", "IntimidateNightcrawlerAction");
        }
        inline app::IntimidateNightcrawlerAction* create() {
            return il2cpp::create_object<app::IntimidateNightcrawlerAction>(get_class());
        }
    } // namespace IntimidateNightcrawlerAction
} // namespace app::classes::types
