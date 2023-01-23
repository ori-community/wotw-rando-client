#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsAotVersionInfo__Class.h>
#include <Modloader/app/structs/fsAotVersionInfo.h>
#include <Modloader/app/structs/fsAotVersionInfo__Boxed.h>

namespace app::classes::types {
    namespace fsAotVersionInfo {
        namespace {
            inline app::fsAotVersionInfo__Class* type_info_ref = nullptr;
        }
        inline app::fsAotVersionInfo__Class** type_info = &type_info_ref;
        inline app::fsAotVersionInfo__Class* get_class() {
            return il2cpp::get_class<app::fsAotVersionInfo__Class>(type_info, "FullSerializer", "fsAotVersionInfo");
        }
        inline app::fsAotVersionInfo* create() {
            return il2cpp::create_object<app::fsAotVersionInfo>(get_class());
        }
        inline app::fsAotVersionInfo__Boxed* box(app::fsAotVersionInfo value) {
            return il2cpp::box_value<app::fsAotVersionInfo__Boxed>(get_class(), value);
        }
    } // namespace fsAotVersionInfo
} // namespace app::classes::types
