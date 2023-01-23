#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPrefabSetting__Array__Class.h>
#include <Modloader/app/structs/UberPoolPrefabSetting__Array.h>

namespace app::classes::types {
    namespace UberPoolPrefabSetting__Array {
        namespace {
            inline app::UberPoolPrefabSetting__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrefabSetting__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolPrefabSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrefabSetting__Array__Class>(type_info, "", "UberPoolPrefabSetting[]");
        }
        inline app::UberPoolPrefabSetting__Array* create() {
            return il2cpp::create_object<app::UberPoolPrefabSetting__Array>(get_class());
        }
    } // namespace UberPoolPrefabSetting__Array
} // namespace app::classes::types
