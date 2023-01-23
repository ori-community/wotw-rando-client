#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BaseAnimatorSerializer__Class.h>
#include <Modloader/app/structs/BaseAnimatorSerializer.h>

namespace app::classes::types {
    namespace BaseAnimatorSerializer {
        namespace {
            inline app::BaseAnimatorSerializer__Class* type_info_ref = nullptr;
        }
        inline app::BaseAnimatorSerializer__Class** type_info = &type_info_ref;
        inline app::BaseAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimatorSerializer__Class>(type_info, "", "BaseAnimatorSerializer");
        }
        inline app::BaseAnimatorSerializer* create() {
            return il2cpp::create_object<app::BaseAnimatorSerializer>(get_class());
        }
    } // namespace BaseAnimatorSerializer
} // namespace app::classes::types
