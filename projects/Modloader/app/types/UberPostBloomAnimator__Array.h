#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPostBloomAnimator__Array {
        namespace {
            inline app::UberPostBloomAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPostBloomAnimator__Array__Class** type_info = &type_info_ref;
        inline app::UberPostBloomAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPostBloomAnimator__Array__Class>(type_info, "", "UberPostBloomAnimator[]");
        }
        inline app::UberPostBloomAnimator__Array* create() {
            return il2cpp::create_object<app::UberPostBloomAnimator__Array>(get_class());
        }
    } // namespace UberPostBloomAnimator__Array
} // namespace app::classes::types
