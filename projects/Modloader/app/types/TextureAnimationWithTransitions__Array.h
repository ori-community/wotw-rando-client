#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array__Class.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions__Array {
        namespace {
            inline app::TextureAnimationWithTransitions__Array__Class* type_info_ref = nullptr;
        }
        inline app::TextureAnimationWithTransitions__Array__Class** type_info = &type_info_ref;
        inline app::TextureAnimationWithTransitions__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions__Array__Class>(type_info, "", "TextureAnimationWithTransitions[]");
        }
        inline app::TextureAnimationWithTransitions__Array* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions__Array>(get_class());
        }
    } // namespace TextureAnimationWithTransitions__Array
} // namespace app::classes::types
