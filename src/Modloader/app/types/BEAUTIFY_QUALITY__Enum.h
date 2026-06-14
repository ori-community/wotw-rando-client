#pragma once
#include <Modloader/app/structs/BEAUTIFY_QUALITY__Enum.h>
#include <Modloader/app/structs/BEAUTIFY_QUALITY__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BEAUTIFY_QUALITY__Enum {
        inline app::BEAUTIFY_QUALITY__Enum__Class** type_info() {
            static app::BEAUTIFY_QUALITY__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BEAUTIFY_QUALITY__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BEAUTIFY_QUALITY__Enum__Class* get_class() {
            return il2cpp::get_class<app::BEAUTIFY_QUALITY__Enum__Class>(type_info(), "BeautifyEffect", "BEAUTIFY_QUALITY");
        }
        inline app::BEAUTIFY_QUALITY__Enum* create() {
            return il2cpp::create_object<app::BEAUTIFY_QUALITY__Enum>(get_class());
        }
    } // namespace BEAUTIFY_QUALITY__Enum
} // namespace app::classes::types
