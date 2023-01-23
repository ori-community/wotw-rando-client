#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuLookUp__Class.h>
#include <Modloader/app/structs/KuLookUp.h>

namespace app::classes::types {
    namespace KuLookUp {
        namespace {
            inline app::KuLookUp__Class* type_info_ref = nullptr;
        }
        inline app::KuLookUp__Class** type_info = &type_info_ref;
        inline app::KuLookUp__Class* get_class() {
            return il2cpp::get_class<app::KuLookUp__Class>(type_info, "", "KuLookUp");
        }
        inline app::KuLookUp* create() {
            return il2cpp::create_object<app::KuLookUp>(get_class());
        }
    } // namespace KuLookUp
} // namespace app::classes::types
