#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerReveal_AnimationEventAction__Array {
        namespace {
            inline app::NightCrawlerReveal_AnimationEventAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Array__Class** type_info = &type_info_ref;
        inline app::NightCrawlerReveal_AnimationEventAction__Array__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerReveal_AnimationEventAction__Array__Class>(type_info, "", "NightCrawlerReveal+AnimationEventAction[]");
        }
        inline app::NightCrawlerReveal_AnimationEventAction__Array* create() {
            return il2cpp::create_object<app::NightCrawlerReveal_AnimationEventAction__Array>(get_class());
        }
    } // namespace NightCrawlerReveal_AnimationEventAction__Array
} // namespace app::classes::types
