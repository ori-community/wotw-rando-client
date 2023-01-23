#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberDofCache_DOFBucket__Class.h>
#include <Modloader/app/structs/UberDofCache_DOFBucket.h>

namespace app::classes::types {
    namespace UberDofCache_DOFBucket {
        namespace {
            inline app::UberDofCache_DOFBucket__Class* type_info_ref = nullptr;
        }
        inline app::UberDofCache_DOFBucket__Class** type_info = &type_info_ref;
        inline app::UberDofCache_DOFBucket__Class* get_class() {
            return il2cpp::get_nested_class<app::UberDofCache_DOFBucket__Class>(type_info, "", "UberDofCache", "DOFBucket");
        }
        inline app::UberDofCache_DOFBucket* create() {
            return il2cpp::create_object<app::UberDofCache_DOFBucket>(get_class());
        }
    } // namespace UberDofCache_DOFBucket
} // namespace app::classes::types
