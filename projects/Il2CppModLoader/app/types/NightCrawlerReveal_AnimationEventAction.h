#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerReveal_AnimationEventAction {
        namespace {
            app::NightCrawlerReveal_AnimationEventAction__Class* type_info_ref = nullptr;
        }
        app::NightCrawlerReveal_AnimationEventAction__Class** type_info = &type_info_ref;
        inline app::NightCrawlerReveal_AnimationEventAction__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerReveal_AnimationEventAction__Class>(type_info, "", "NightCrawlerReveal", "AnimationEventAction");
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
