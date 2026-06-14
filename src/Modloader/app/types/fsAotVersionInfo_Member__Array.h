#pragma once
#include <Modloader/app/structs/fsAotVersionInfo_Member__Array.h>
#include <Modloader/app/structs/fsAotVersionInfo_Member__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsAotVersionInfo_Member__Array {
        inline app::fsAotVersionInfo_Member__Array__Class** type_info() {
            static app::fsAotVersionInfo_Member__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsAotVersionInfo_Member__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsAotVersionInfo_Member__Array__Class* get_class() {
            return il2cpp::get_class<app::fsAotVersionInfo_Member__Array__Class>(type_info(), "FullSerializer", "fsAotVersionInfo+Member[]");
        }
        inline app::fsAotVersionInfo_Member__Array* create() {
            return il2cpp::create_object<app::fsAotVersionInfo_Member__Array>(get_class());
        }
    } // namespace fsAotVersionInfo_Member__Array
} // namespace app::classes::types
