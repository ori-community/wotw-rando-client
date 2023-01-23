#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossTendril_DurationType__Enum__Array__Class.h>
#include <Modloader/app/structs/KwolokBossTendril_DurationType__Enum__Array.h>

namespace app::classes::types {
    namespace KwolokBossTendril_DurationType__Enum__Array {
        namespace {
            inline app::KwolokBossTendril_DurationType__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTendril_DurationType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendril_DurationType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendril_DurationType__Enum__Array__Class>(type_info, "", "KwolokBossTendril+DurationType[]");
        }
        inline app::KwolokBossTendril_DurationType__Enum__Array* create() {
            return il2cpp::create_object<app::KwolokBossTendril_DurationType__Enum__Array>(get_class());
        }
    } // namespace KwolokBossTendril_DurationType__Enum__Array
} // namespace app::classes::types
