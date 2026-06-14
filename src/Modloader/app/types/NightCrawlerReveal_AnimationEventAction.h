#pragma once
#include <Modloader/app/structs/NightCrawlerReveal_AnimationEventAction.h>
#include <Modloader/app/structs/NightCrawlerReveal_AnimationEventAction__Array.h>
#include <Modloader/app/structs/NightCrawlerReveal_AnimationEventAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerReveal_AnimationEventAction {
        inline app::NightCrawlerReveal_AnimationEventAction__Class** type_info() {
            static app::NightCrawlerReveal_AnimationEventAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerReveal_AnimationEventAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerReveal_AnimationEventAction__Class>(type_info(), "", "NightCrawlerReveal", "AnimationEventAction");
        }
        inline app::NightCrawlerReveal_AnimationEventAction* create() {
            return il2cpp::create_object<app::NightCrawlerReveal_AnimationEventAction>(get_class());
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Array* create_array(int size) {
            return il2cpp::array_new<app::NightCrawlerReveal_AnimationEventAction__Array>(get_class(), size);
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Array* create_array(const std::vector<app::NightCrawlerReveal_AnimationEventAction*>& items) {
            return il2cpp::array_new<app::NightCrawlerReveal_AnimationEventAction__Array>(get_class(), items);
        }
    } // namespace NightCrawlerReveal_AnimationEventAction
} // namespace app::classes::types
