#pragma once
#include <Modloader/app/structs/NightCrawlerReveal_AnimationEventAction__Array.h>
#include <Modloader/app/structs/NightCrawlerReveal_AnimationEventAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerReveal_AnimationEventAction__Array {
        inline app::NightCrawlerReveal_AnimationEventAction__Array__Class** type_info() {
            static app::NightCrawlerReveal_AnimationEventAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerReveal_AnimationEventAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Array__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerReveal_AnimationEventAction__Array__Class>(type_info(), "", "NightCrawlerReveal+AnimationEventAction[]");
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Array* create() {
            return il2cpp::create_object<app::NightCrawlerReveal_AnimationEventAction__Array>(get_class());
        }
    } // namespace NightCrawlerReveal_AnimationEventAction__Array
} // namespace app::classes::types
