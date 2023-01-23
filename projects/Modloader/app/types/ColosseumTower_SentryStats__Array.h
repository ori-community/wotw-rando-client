#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats__Array__Class.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats__Array.h>

namespace app::classes::types {
    namespace ColosseumTower_SentryStats__Array {
        namespace {
            inline app::ColosseumTower_SentryStats__Array__Class* type_info_ref = nullptr;
        }
        inline app::ColosseumTower_SentryStats__Array__Class** type_info = &type_info_ref;
        inline app::ColosseumTower_SentryStats__Array__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTower_SentryStats__Array__Class>(type_info, "", "ColosseumTower+SentryStats[]");
        }
        inline app::ColosseumTower_SentryStats__Array* create() {
            return il2cpp::create_object<app::ColosseumTower_SentryStats__Array>(get_class());
        }
    } // namespace ColosseumTower_SentryStats__Array
} // namespace app::classes::types
