#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossBaseBehaviour__Array {
        namespace {
            inline app::PetrifiedOwlBossBaseBehaviour__Array__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossBaseBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossBaseBehaviour__Array__Class>(type_info, "", "PetrifiedOwlBossBaseBehaviour[]");
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossBaseBehaviour__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossBaseBehaviour__Array
} // namespace app::classes::types
