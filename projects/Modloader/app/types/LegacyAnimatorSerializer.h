#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyAnimatorSerializer__Class.h>
#include <Modloader/app/structs/LegacyAnimatorSerializer.h>

namespace app::classes::types {
    namespace LegacyAnimatorSerializer {
        namespace {
            inline app::LegacyAnimatorSerializer__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAnimatorSerializer__Class** type_info = &type_info_ref;
        inline app::LegacyAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorSerializer__Class>(type_info, "", "LegacyAnimatorSerializer");
        }
        inline app::LegacyAnimatorSerializer* create() {
            return il2cpp::create_object<app::LegacyAnimatorSerializer>(get_class());
        }
    } // namespace LegacyAnimatorSerializer
} // namespace app::classes::types
