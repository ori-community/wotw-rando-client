#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberBloomAnimator__Array__Class.h>
#include <Modloader/app/structs/UberBloomAnimator__Array.h>

namespace app::classes::types {
    namespace UberBloomAnimator__Array {
        namespace {
            inline app::UberBloomAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberBloomAnimator__Array__Class** type_info = &type_info_ref;
        inline app::UberBloomAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberBloomAnimator__Array__Class>(type_info, "", "UberBloomAnimator[]");
        }
        inline app::UberBloomAnimator__Array* create() {
            return il2cpp::create_object<app::UberBloomAnimator__Array>(get_class());
        }
    } // namespace UberBloomAnimator__Array
} // namespace app::classes::types
