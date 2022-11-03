#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugSneezeBehaviourNew {
        namespace {
            inline app::SneezeSlugSneezeBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugSneezeBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SneezeSlugSneezeBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugSneezeBehaviourNew__Class>(type_info, "", "SneezeSlugSneezeBehaviourNew");
        }
        inline app::SneezeSlugSneezeBehaviourNew* create() {
            return il2cpp::create_object<app::SneezeSlugSneezeBehaviourNew>(get_class());
        }
    } // namespace SneezeSlugSneezeBehaviourNew
} // namespace app::classes::types
